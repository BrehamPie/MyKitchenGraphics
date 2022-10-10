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
}
void snowMan(){
    GLfloat at_ambient[] = { .2,.2,.2, 1.0 };
    GLfloat at_diffuse[] = { .6,.3,.4, 1.0 };
    GLfloat at_specular[] = { .6,.3,.4, 1.0 };
    GLfloat at_shininess[] = {60};
    glMaterialfv( GL_FRONT, GL_AMBIENT, at_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, at_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, at_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, at_shininess);

    glPushMatrix();
    glTranslatef(23+ball_move,8,23);
    glRotatef(ball_deg,0,1,0);

    glPushMatrix();
    glutSolidSphere(3,30,30);
    glTranslatef(0,2.8,0);
    glutSolidSphere(1.5,100,100);
    glPopMatrix();

    glPushMatrix();
    glScalef(1,1,4);
    drawCube(at_diffuse);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-4);
    glScalef(1,1,4);
    drawCube(at_diffuse);
    glPopMatrix();

    glPopMatrix();
}
