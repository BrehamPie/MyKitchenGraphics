void drawRefrigerator() {

    GLfloat color[]= {.58,.9,.65};
    GLfloat linecolor[]= {0,0.04,0.01};
    GLfloat handleColor[]= {.08,.28,.12};
    glPushMatrix();
    glTranslatef(5,5,40);
    //Main Body.
    glPushMatrix();
    glScalef(12,30,10);
    drawCube(color);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12,5,0);
    glScalef(.3,.3,10);
    drawCube(linecolor);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12,10,0);
    glScalef(.3,.3,10);
    drawCube(linecolor);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12,10,5);
    glScalef(.2,20,.2);
    drawCube(linecolor);
    glPopMatrix();


    /// Small horizontal handles
    glPushMatrix();
    glTranslatef(12,2.5,2.5);
    glScalef(.5,.5,5);
    drawCube(handleColor);
    glTranslatef(0,10,0);
    drawCube(handleColor);
    glPopMatrix();

    /// Small Vertical Handles
    glPushMatrix();
    glTranslatef(12,17.5,4);
    glScalef(.5,8,.5);
    drawCube(handleColor);
    glTranslatef(0,0,3);
    drawCube(handleColor);
    glPopMatrix();

    ///refrigerator display
    glPushMatrix();
    GLfloat p[]= {0,0,0},q[]= {0,1,0},r[]= {0,1,1},s[]= {0,0,1};
    glTranslatef(12.1,21.5,7);
    glScalef(0,1.5,2.5);
    drawQuad(p,q,r,s,linecolor);
    glPopMatrix();

    glPopMatrix();

}
