void show(float a[]) {
    printf("%.3f %.3f %.3f\n",a[0],a[1],a[2]);
    return;
}
void showMat(float a[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%.3f ",a[i][j]);
        }
        puts("");
    }
}
void getUVN(GLfloat eye[],GLfloat look[],GLfloat up[], GLfloat U[], GLfloat V[], GLfloat N[]) {
    GLfloat tr[3];
    for(int i=0; i<3; i++)tr[i] = -eye[i];
    for(int i=0; i<3; i++) N[i] = eye[i] - look[i];
    crossProduct(up,N,U);
    crossProduct(N,U,V);

    makeUnit(U);
    makeUnit(V);
    makeUnit(N);
}
void transformToVCS(GLfloat eye[], GLfloat look[], GLfloat up[], GLfloat P_[]) {
    GLfloat P[4][1];
    for(int i=0; i<3; i++)P[i][0] = P_[i];
    P[3][0] = 1;
    GLfloat U[3],V[3],N[3];
    getUVN(eye,look,up,U,V,N);
    show(U);
    show(V);
    show(N);
    GLfloat R[4][4];
    GLfloat T[4][4];

    for (int i = 0; i < 3; i++)R[0][i] = U[i];
    for (int i = 0; i < 3; i++)R[1][i] = V[i];
    for (int i = 0; i < 3; i++)R[2][i] = N[i];
    R[0][3] = R[1][3] = R[2][3] = R[3][0] = R[3][1] = R[3][2] = 0;
    R[3][3] = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            T[i][j] = (i == j);
        }
        if(i<3)T[i][3]= -eye[i];
    }
    showMat(R);
    puts("");
    showMat(T);
    GLfloat tmp[4][1],tmp2[4][1];
    multiplyMatrix(T,P,tmp);
    multiplyMatrix(R,tmp,P);
    for(int i=0; i<3; i++) {
        P[i][0]/=P[3][0];
        P_[i] = P[i][0];
    }
}
void transformToWCS(GLfloat eye[], GLfloat look[],GLfloat up[],GLfloat P_[]) {
    GLfloat P[4][1];
    for(int i=0; i<3; i++)P[i][0] = P_[i];
    P[3][0] = 1;
    GLfloat U[3],V[3],N[3];
    getUVN(eye,look,up,U,V,N);
    GLfloat R[4][4];
    GLfloat T[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            T[i][j] = (i == j);
        }
        T[i][3]= eye[i];
    }

    for (int i = 0; i < 3; i++)R[i][0] = U[i];
    for (int i = 0; i < 3; i++)R[i][1] = V[i];
    for (int i = 0; i < 3; i++)R[i][2] = N[i];
    R[0][3] = R[1][3] = R[2][3] = R[3][0] = R[3][1] = R[3][2] = 0;
    R[3][3] = 1;
    GLfloat tmp[4][1],tmp2[4][1];
    multiplyMatrix(R, P, tmp);
    multiplyMatrix(T, tmp, P);
    for(int i=0; i<3; i++) {
        P[i][0]/=P[3][0];
        P_[i] = P[i][0];
    }
}
void Yaw(GLfloat eye[], GLfloat look[], GLfloat up[],GLfloat theta,bool clockwise = true) {
    if(clockwise)theta = std::min(179.0f,theta+1);
    else theta = std::max(theta-1,1.0f);
    GLfloat new_eye[3]={eye[0],eye[1],eye[2]};
    printf("Eye age: %.3f %.3f %.3f\n",new_eye[0],new_eye[1],new_eye[2]);
    transformToVCS(eye,look,up,new_eye);
    printf("Eye middle: %.3f %.3f %.3f\n",new_eye[0],new_eye[1],new_eye[2]);
    GLfloat new_x = eye[0]*cos(theta*PI/180.0)+eye[2]*sin(theta*PI/180.0);
    GLfloat new_z = -eye[0]*sin(theta*PI/180.0) +eye[2]*cos(theta*PI/180.0);
    //eye[0] = new_x;
    //eye[2] = new_z;
    transformToWCS(eye,look,up,new_eye);
    printf("Eye pore: %.3f %.3f %.3f\n",new_eye[0],new_eye[1],new_eye[2]);
}
