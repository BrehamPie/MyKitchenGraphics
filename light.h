GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
void light0() {
    if(turnOn[0]){
            glEnable( GL_LIGHT0);
    }
    else glDisable(GL_LIGHT0);
    glLightfv( GL_LIGHT0, GL_AMBIENT, light0_ambient[ambientOn[0]]);
    glLightfv( GL_LIGHT0, GL_DIFFUSE, light0_diffuse[diffuseOn[0]]);
    glLightfv( GL_LIGHT0, GL_SPECULAR, light0_specular[specularOn[0]]);
    glLightfv( GL_LIGHT0, GL_POSITION, light0_position);
}

/*void light1() {
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
}*/

void light1() {
    if(turnOn[1]){
            glEnable( GL_LIGHT1);
    }
    else glDisable(GL_LIGHT1);
    glLightfv( GL_LIGHT1, GL_AMBIENT, light0_ambient[ambientOn[1]]);
    glLightfv( GL_LIGHT1, GL_DIFFUSE, light0_diffuse[diffuseOn[1]]);
    glLightfv( GL_LIGHT1, GL_SPECULAR, light0_specular[specularOn[1]]);
    glLightfv( GL_LIGHT1, GL_POSITION, light0_position);

    GLfloat spot_direction[] = { 0.0, -1.0, 0 };
    glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, spot_direction);
    glLightf( GL_LIGHT1, GL_SPOT_CUTOFF, 25.0);
}
