void drawFan() {
    glPushMatrix();
    glColor3f(.01,.85,.34);
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    glScalef(1,1,2.5);
    gluCylinder(quadratic,1.5,1.5,1.0f,1000,1000);
    gluDisk(quadratic,0,1.5,1000,1000);
    glPopMatrix();
    glPushMatrix();
    float color[]= {.01,.85,.34};
    GLfloat blade[][3]= {{-1,0,0},{-.5,-2,0},{0.5,-2,0},{1,0,0},{0,2,0}};
    for(int i=0; i<360; i+=60) {
        glRotatef(60,0,0,1);
        glTranslatef(0,3.3,0);
        drawPolygon(blade,5,color);
        glTranslatef(0,-3.3,0);
    }
    glPopMatrix();
}
