GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
void light0() {
    GLfloat light_ambient[]  = {.1, .1, .1, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 1.0,0.3, 1.0 };
    GLfloat light_specular[] = { 0.5, 1.0, 0.3, 1.0 };
    GLfloat light_position[] = { 25.0, 50.0, 45.0, 1.0 };
    glPushMatrix();
    glTranslatef(20,40,80);
    glMaterialfv( GL_FRONT, GL_AMBIENT, light_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, light_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, light_specular);
    //glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    glutSolidSphere(2,100,100);
    glPopMatrix();
    glEnable( GL_LIGHT0);
    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
}

void light1() {
    glPushMatrix();
    GLfloat no_mat[] = {0,0,0};
    GLfloat light_ambient[]  = {1, 0, 0, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 0,0, 1.0 };
    GLfloat light_specular[] = { 0.5, 0, 0, 1.0 };
    GLfloat light_position[] = { 20.0, 40.0, 80.0, 1.0 };
    glEnable( GL_LIGHT1);
    glLightfv( GL_LIGHT1, GL_AMBIENT, no_mat);
    glLightfv( GL_LIGHT1, GL_DIFFUSE, light_specular);
    glLightfv( GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT1, GL_POSITION, light_position);
    glLightf(GL_LIGHT1,GL_CONSTANT_ATTENUATION,2);
    glPopMatrix();
}

void light2() {
    GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat light_ambient[]  = {1, 1, 1, 1.0};
    GLfloat light_diffuse[]  = {1, 1, 1, 1.0};
    GLfloat light_specular[] = {1, 1, 1, 1.0};
    GLfloat light_position[] = { 37.5,45.0, 57.50, 1.0 };
    //GLfloat light_position[] = { 30,10.0, 30, 1.0 };

    glEnable( GL_LIGHT2);
    glLightfv( GL_LIGHT2, GL_AMBIENT, no_light);
    glLightfv( GL_LIGHT2, GL_DIFFUSE, light_diffuse);
    glLightfv( GL_LIGHT2, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT2, GL_POSITION, light_position);

    GLfloat spot_direction[] = { 0.0, -1.0, 0 };
    glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, spot_direction);
    glLightf( GL_LIGHT2, GL_SPOT_CUTOFF, 35.0);
}
