
void drawSideWindow(){

    GLfloat in_color[] = {.4,.58,.94};
    GLfloat out_color[] ={.12,0.01,0.05};

    //Glass Cube.
    glPushMatrix();
    glTranslatef(28,28,0);
    glScalef(12,15,5.5);
    drawCube(in_color);
    glPopMatrix();

    // Border Cube.
    glPushMatrix();
    glTranslatef(27,27,0);
    glScalef(14,17,5.4);
    drawCube(out_color);
    glPopMatrix();

    // Inner Partiion
    glPushMatrix();
    glTranslatef(33,28,0);
    glScalef(1,15,5.6);
    drawCube(out_color);
    glPopMatrix();
}
void drawBigWindow(){

    GLfloat in_color[] = {.4,.58,.94};
    GLfloat out_color[] ={.12,0.01,0.05};
    //Glass Cube
    glPushMatrix();
    glTranslatef(0,20,53);
    glScalef(5.5,17,22);
    drawCube(in_color);
    glPopMatrix();

    //Border Cube
    glPushMatrix();
    glTranslatef(0,19,52);
    glScalef(5.4,19,23.7);
    drawCube(out_color);
    glPopMatrix();

    //Inner Partition
    glPushMatrix();
    glTranslatef(0,20,63);
    glScalef(5.6,17,1);
    drawCube(out_color);
    glPopMatrix();
}

void drawWindows(){
    drawBigWindow();
    //drawSideWindow();
}
