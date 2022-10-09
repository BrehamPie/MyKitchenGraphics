GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
void light0() {
    GLfloat light_ambient[]  = {.1, .1, .1, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 1.0,0.3, 1.0 };
    GLfloat light_specular[] = { 0.5, 1.0, 0.3, 1.0 };
    GLfloat light_position[] = { 0.0, 50.0, -20.0, 1.0 };

    glEnable( GL_LIGHT0);
    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
}

void light1(){
    glPushMatrix();
    GLfloat no_mat[] ={0,0,0};
    GLfloat light_ambient[]  = {1, 0, 0, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 0,0, 1.0 };
    GLfloat light_specular[] = { 0.5, 0, 0, 1.0 };
    GLfloat light_position[] = { 20.0, 45.0, 79.0, 1.0 };
    glEnable( GL_LIGHT1);
    glLightfv( GL_LIGHT1, GL_AMBIENT, no_mat);
    glLightfv( GL_LIGHT1, GL_DIFFUSE, light_specular);
    glLightfv( GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT1, GL_POSITION, light_position);
    glLightf(GL_LIGHT1,GL_CONSTANT_ATTENUATION,1.5);
    glPopMatrix();
}
