
void drawTable(){
     GLfloat color[] = {.77,.08,.19};
   // GLfloat color[] = {.16,.22,.13};
    // Positioning of Table.
    glTranslatef(5,0,30);

    //Table top
    glPushMatrix();
    glTranslatef(20,15,20);
    glScalef(25,2,15);
    drawCube(color);
    glPopMatrix();

    //Legs
    glPushMatrix();
    glTranslatef(20,5,20);
    glScalef(1,12,1);
    drawCube(color);
    glTranslatef(24,0,0);
    drawCube(color);
    glTranslatef(0,0,14);
    drawCube(color);
    glTranslatef(-24,0,0);
    drawCube(color);
    glPopMatrix();

    glTranslatef(-5,0,-30);
}
void drawChair(float dx,float dy,bool Rotate = false){
    GLfloat color[] = {.77,.08,.19};

    glPushMatrix();

    // Positioning of the Chair.
    glTranslatef(35+dx,5,47+dy);
    if(Rotate) glRotatef(180,0,1,0);

    // Top of chair
    glPushMatrix();
    glTranslatef(0,5,0);
    glScalef(4,1,5);

    // Legs and back.
    drawCube(color);
    glPopMatrix();
    glPushMatrix();
    glScalef(4,13,1);
    drawCube(color);
    glTranslatef(0,0,4);
    glScalef(1,5.0/13.0,1);
    drawCube(color);
    glPopMatrix();
    glPopMatrix();

}
void drawChairs(){
    // Draw four chairs around table.
    drawChair(0,0);
    drawChair(7,0);
    drawChair(4,22,true);
    drawChair(11,22,true);
}
void drawLamp(){
    GLfloat col[] = {.3,.6,.4};
    GLfloat mat_ambient[] = { .6,.7,.3, 1.0 };
    GLfloat mat_diffuse[] = {.1, .8,.6, 1.0 };
    GLfloat mat_specular[] = { .1,.31,.9, 1.0 };
    GLfloat mat_shininess[] = {60};

    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    //glMaterialfv(GL_FRONT,GL_EMISSION,mat_diffuse);

    glPushMatrix();
    glTranslatef(35,20,55);
    glRotatef(-90,1,0,0);
    glutSolidCone(1,1,100,100);

    glPushMatrix();
    glRotatef(-90,1,0,0);
    glScalef(.21,5,.21);
    drawCube(col);
    glPopMatrix();

    glPopMatrix();
}
void drawTeapot(){
    GLfloat mat_ambient[] = { .6,.7,.3, 1.0 };
    GLfloat mat_diffuse[] = {.1, .8,.6, 1.0 };
    GLfloat mat_specular[] = { .1,.31,.9, 1.0 };
    GLfloat mat_shininess[] = {60};

    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    glPushMatrix();
    glTranslatef(35,18.3,55);
    glutSolidTeapot(1);
    glPopMatrix();
}
void drawDining(){
    drawTable();
    drawChairs();
    //drawLamp();
    drawTeapot();
}
