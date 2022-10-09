void drawShelves(){
    GLfloat color[]={.4,.2,.21};
    GLfloat color2[] = {.04,.93,.05};

    // Front side Shelf.
    glPushMatrix();
    glTranslatef(5,35,5);
    glScalef(5,5,12);
    drawCube(color);
    glPopMatrix();
    // Partitions
    glPushMatrix();
    glTranslatef(10,35,9);
    glScalef(.4,5,.4);
    drawCube(color2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,35,13);
    glScalef(.4,5,.4);
    drawCube(color2);
    glPopMatrix();

    // Right Side Shelfs.
    glPushMatrix();
    glTranslatef(15,40,5);
    glScalef(10,5,5);
    drawCube(color);
    glPopMatrix();

    // Partitions.
    glPushMatrix();
    glTranslatef(18,40,10);
    glScalef(.4,5,.4);
    drawCube(color2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(22,40,10);
    glScalef(.4,5,.4);
    drawCube(color2);
    glPopMatrix();
}
