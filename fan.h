void drawFan() {
    glPushMatrix();
    glTranslatef(33.5,37,4);
    glScalef(0.7,0.7,0.7);
    /*glPushMatrix();
    GLfloat colors[] = {0.21,.10,.46};
    GLfloat mat_ambient[] = { colors[0], colors[1],colors[2], 1.0 };
    GLfloat mat_diffuse[] = { colors[0], colors[1],colors[2], 1.0 };
    GLfloat mat_specular[] = { colors[0], colors[1],colors[2], 1.0 };
    GLfloat mat_shininess[] = {60};
    glMaterialfv( GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    glScalef(1,1,0.4);
    glutWireSphere(6,7,7);
    glPopMatrix();*/
    glPushMatrix();

    glRotatef(fan_deg,0,0,1);
    glPushMatrix();
    //glColor3f(.16,.5,.34);
//    GLUquadricObj *quadratic;
//    quadratic = gluNewQuadric();
//    glScalef(1,1,2.2);
//    gluCylinder(quadratic,1.5,1.5,0.1f,1000,1000);
//    gluDisk(quadratic,0,1.5,1000,1000);
    glutSolidSphere(1.5,100,100);
    glPopMatrix();
    glPushMatrix();
    float color[]= {.19,.85,.49};
    GLfloat blade[][3]= {{-1,0,0},{-.5,-2,0},{0.5,-2,0},{1,0,0},{0,2,0}};
    GLfloat at_ambient[] = { color[0], color[1],color[2], 1.0 };
    GLfloat at_diffuse[] = { color[0], color[1],color[2], 1.0 };
    GLfloat at_specular[] = { color[0], color[1],color[2], 1.0 };
    GLfloat at_shininess[] = {60};
    glMaterialfv( GL_FRONT, GL_AMBIENT, at_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, at_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, at_specular);
    glMaterialfv( GL_FRONT, GL_SHININESS, at_shininess);
    for(int i=0; i<360; i+=60) {
        glRotatef(60,0,0,1);
        glTranslatef(0,3.3,0);
        drawPolygon(blade,5,color);
        glTranslatef(0,-3.3,0);
    }
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}
