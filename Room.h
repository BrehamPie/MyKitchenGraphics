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
    glTranslatef(40,0,0);
    glScalef(10,50,5);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,80);
    glScalef(50,50,5);
    drawCube(color);
    glPopMatrix();
}
