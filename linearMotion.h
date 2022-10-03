

// Move vector to a unit distance.
void moveForward(GLfloat look[],GLfloat eye[]) {
    GLfloat dv[3];
    for(int i=0; i<3; i++) dv[i] = look[i] - eye[i];
    GLfloat magnitude = getMagnitude(dv);
    for(int i=0; i<3; i++) {
        look[i]+=dv[i]/magnitude;
        eye[i]+=dv[i]/magnitude;
    }
}

//Zoom in using field of view angle in y direction.
void zoomIn(GLfloat &fovy) {
    fovy = std::max(10.0,fovy-0.3);
}
void zoomOut(GLfloat &fovy) {
    fovy = std::min(175.0,fovy+0.3);
}
