float dotProduct(float a[], float b[]) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
static void getNormal3p
(GLfloat A[],GLfloat B[],GLfloat C[]) {
    GLfloat x1=A[0],x2=B[0],x3=C[0];
    GLfloat y1=A[1],y2=B[1],y3=C[1];
    GLfloat z1=A[2],z2=B[2],z3=C[2];
    GLfloat Ux, Uy, Uz, Vx, Vy, Vz, Nx, Ny, Nz;

    Ux = x2-x1;
    Uy = y2-y1;
    Uz = z2-z1;

    Vx = x3-x1;
    Vy = y3-y1;
    Vz = z3-z1;

    Nx = Uy*Vz - Uz*Vy;
    Ny = Uz*Vx - Ux*Vz;
    Nz = Ux*Vy - Uy*Vx;

    glNormal3f(Nx,Ny,Nz);
}
void crossProduct(float a[], float b[], float c[]) {
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
    return;
}
float getMagnitude(float a[]) {
    return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}
float angleBetween(float a[], float b[]) {
    return acos(dotProduct(a, b) / getMagnitude(a) / getMagnitude(b));
}
void makeUnit(float a[]) {
    float mag = getMagnitude(a);
    a[0] /= mag;
    a[1] /= mag;
    a[2] /= mag;
}
