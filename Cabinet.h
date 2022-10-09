void drawFoot() {

    //Footer of Drawers
    GLfloat color[]= {.85,.81,.76};

    //Front Drawers foot
    glPushMatrix();
    glTranslatef(5,5,5);
    glScalef(9,5,32);
    drawCube(color);
    glPopMatrix();

    //Right Side Drawers foot.
    glPushMatrix();
    glTranslatef(14,5,5);
    glScalef(35,5,9);
    drawCube(color);
    glPopMatrix();
}
void drawPartition(){

    //Drawer Partitions. Separated function(Drawn Later).

    //Front horizontal partition
    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(10,11.5,10);
    glScalef(.51,.31,9);
    GLfloat color[] = {1,0,0};
    drawCube(color);
    glPopMatrix();

    //Right side vertical
    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(20,5,9.5);
    glScalef(.65,13,.65);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(35,5,9.5);
    glScalef(.65,13,.65);
    drawCube(color);
    glPopMatrix();

    // Right side Horizontal
    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(20,10,9.5);
    glScalef(15,.41,.61);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(35,13.5,9.5);
    glScalef(9,.41,.61);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(35,8.5,9.5);
    glScalef(9,.41,.61);
    drawCube(color);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(11,13.5,10);
    glScalef(9,.41,.61);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,5,5);
    glTranslatef(11,8.5,10);
    glScalef(9,.41,.61);
    drawCube(color);
    glPopMatrix();

}
void drawDrawers() {
    //Draw Front Drawers
    glPushMatrix();
    glTranslatef(5,10,5);
    glScalef(10,13,19);
    GLfloat color[] = {.64,.57,.5};
    drawCube(color);
    glPopMatrix();
    //Draw Upper Layer
    glPushMatrix();
    glTranslatef(5,23,5);
    glScalef(10,1,19);
    GLfloat ucolor[] = {.32,.28,.25};
    drawCube(ucolor);
    glPopMatrix();


    //Draw Side Drawers
    glPushMatrix();
    glTranslatef(14,10,5);
    glScalef(35,13,10);
    drawCube(color);
    glPopMatrix();

    //Draw Upper Layer
    glPushMatrix();
    glTranslatef(14,23,5);
    glScalef(35,1,10);
    drawCube(ucolor);
    glPopMatrix();
}
void drawCabinets(){
    drawFoot();
    drawDrawers();
    drawPartition();
}

