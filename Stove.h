
void drawStove(){
    //Positioning.
    glTranslatef(24,24,8);

    //Board.
    glPushMatrix();
    glScalef(16,2,6);
    GLfloat boxColor[]={.85,.34,.52};
    drawCube(boxColor);
    glPopMatrix();

    //Switches
    glPushMatrix();
    GLfloat switchC[]={0,0,0};
    glTranslatef(5,1.2,6.5);
    glScalef(.2,.4,.2);
    drawCube(switchC);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(13,1.2,6.5);
    glScalef(.2,.4,.2);
    drawCube(switchC);
    glPopMatrix();

    // Stoves.
    glPushMatrix();
    glColor3f(.78,.85,.34);
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    glTranslatef(5,2.5,3);
    glRotatef(90,1,0,0);
    gluCylinder(quadratic,1.5,1.5,1.0f,32,32);
    glPopMatrix();

    glPushMatrix();
    quadratic = gluNewQuadric();
    glTranslatef(13,2.5,3);
    glRotatef(90,1,0,0);
    gluCylinder(quadratic,1.5,1.5,1.0f,32,32);
    glPopMatrix();
    glTranslatef(-24,-24,-8);
}
