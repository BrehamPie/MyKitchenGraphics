GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
void light0() {
    GLfloat light_ambient[]  = {.5, .3, .2, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 1.0,0.3, 1.0 };
    GLfloat light_specular[] = { 0.1, 0.6, 0.8, 1.0 };
    GLfloat light_position[] = { 0.0, 50.0, 0.0, 1.0 };

    glEnable( GL_LIGHT0);
    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv( GL_LIGHT0, GL_POSITION, light_position);

}
