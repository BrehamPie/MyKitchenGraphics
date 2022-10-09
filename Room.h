void drawFloor() {
    glPushMatrix();
    glTranslatef(5,0,5);
    glScalef(45,5,75);
    GLfloat color[]= {.63,.63,.62};
    drawCube(color);
    glPopMatrix();
}

void drawSideWalls() {
    glPushMatrix();
    glScalef(5,50,80);
    GLfloat color[]= {.8,.86,.86};
    drawCube(color);
    glPopMatrix();
    // Making Space for exhaust fan.
    // lower part
    glPushMatrix();
    glScalef(50,33,5);
    drawCube(color);
    glPopMatrix();

    //upper part
    glPushMatrix();
    glTranslatef(0,43,0);
    glScalef(50,7,5);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glScalef(30,50,5);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37,0,0);
    glScalef(13,50,5);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,80);
    glScalef(50,50,5);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_ambient[] = { 1,0,0, 1.0 };
    GLfloat mat_diffuse[] = {1, 0,0, 1.0 };
    GLfloat mat_specular[] = { 1,1,0, 1.0 };
    GLfloat mat_shininess[] = {60};

    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT,GL_EMISSION,mat_diffuse);
    glTranslatef(20,45,80);
    glutSolidSphere(1,100,100);
    glMaterialfv(GL_FRONT,GL_EMISSION,no_mat);

    glPopMatrix();

}
