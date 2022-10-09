void drawOvenBox() {

    GLfloat color[] = {.05,.2,.05};

    ///Vertical disks
    glPushMatrix();
    glTranslatef(5,10,5);
    glTranslatef(0,0,19);
    glScalef(9,35,1);
    drawCube(color);
    glTranslatef(0,0,12);
    drawCube(color);
    glPopMatrix();

    ///Horizontal Disks
    glPushMatrix();
    glTranslatef(5,10,25);
    glScalef(10,1,11);
    drawCube(color);
    glTranslatef(0,12,0);
    drawCube(color);
    glTranslatef(0,10,0);
    drawCube(color);
    glTranslatef(0,12,0);
    drawCube(color);
    glPopMatrix();
}
void drawOvens() {
    drawOvenBox();
    GLfloat color[]={.81,.47,.76};
    GLfloat color2[]={.2,.1,.19};
    GLfloat color3[]={.65,.77,.93};

    glPushMatrix();
    // Positioning.
    glTranslatef(7,22,24);

    //Main Box
    glPushMatrix();
    glScalef(5,8,10);
    drawCube(color);
    glPopMatrix();

    //Switches
    glPushMatrix();
    glScalef(5.2,8.2,3);
    drawCube(color2);
    glPopMatrix();

    //Glass
    glPushMatrix();
    glTranslatef(0,2,2);
    glScalef(5.1,4.5,7.9);
    drawCube(color3);
    glPopMatrix();

    glPopMatrix();
}
