void drawFan() {
    glPushMatrix();
    glTranslatef(33,37,4);
    glScalef(0.7,0.7,0.7);
    glPushMatrix();
    glColor3f(.16,.5,.34);
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    glScalef(1,1,2.2);
    gluCylinder(quadratic,1.5,1.5,0.1f,1000,1000);
    gluDisk(quadratic,0,1.5,1000,1000);
    glPopMatrix();


    glPushMatrix();
    glScalef(1,1,0.4);
    glutWireSphere(6,5,5);
    glPopMatrix();

    glPushMatrix();
    float color[]= {.19,.85,.49};
    GLfloat blade[][3]= {{-1,0,0},{-.5,-2,0},{0.5,-2,0},{1,0,0},{0,2,0}};
    for(int i=0; i<360; i+=60) {
        glRotatef(60,0,0,1);
        glTranslatef(0,3.3,0);
        drawPolygon(blade,5,color);
        glTranslatef(0,-3.3,0);
    }
    glPopMatrix();

    glPopMatrix();
}
