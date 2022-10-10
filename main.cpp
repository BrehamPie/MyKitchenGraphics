#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<bits/stdc++.h>
#include "geometry.h"
#include "primitives.h"
#include "linearMotion.h"
#include "angularMotion.h"
#include "Room.h"
#include "Refrigerator.h"
#include "Oven.h"
#include "Cabinet.h"
#include "Window.h"
#include "Stove.h"
#include "Dining.h"
#include "Shelf.h"

float deg,fan_deg;

#include "fan.h"
using namespace std;
const float eps = 1e-6;
/*------Global Variables------*/
//Eye Positions
GLfloat eye[3]= {100,20,40};

//Look At Positions
GLfloat look[3]= {0,20,40};

//view up vector
GLfloat up[3]= {0,1,0};
float fovy=90;
float alpha,bita,theta;

//Misc
int currentLight,numberOfLights;
bool turnOn[3],ambientOn[3],diffuseOn[3],specularOn[3];
// Lights
GLfloat noLight[] = {0,0,0,1};
//Light0
GLfloat light0_ambient[][4]  = {{0,0,0,1},{.1, .1, .1, 1.0}};
GLfloat light0_diffuse[2][4]  = {{0,0,0,1},{ 1, 1,0.7, 1.0 }};
GLfloat light0_specular[2][4] = {{0,0,0,1},{ 0.5, 1, 0.3, 1.0 }};
GLfloat light0_position[] = { 25.0, 50.0, 45.0, 1.0 };

GLfloat light1_ambient[][4]  = {{0,0,0,1},{1, 0, 0, 1.0}};
GLfloat light1_diffuse[][4]  = {{0,0,0,1},{0, 1, 0, 1.0}};
GLfloat light1_specular[][4] = {{0,0,0,1},{0, 0, 1, 1.0}};
GLfloat light1_position[] = { 47.5,45.0, 67.50, 1.0 };
#include "light.h"
void displayFunction() {
    GLfloat U[3],V[3],N[3];
    // getUVN(eye,look,up,U,V,N);
    // for(int i=0;i<3;i++)up[i] = V[i];
    // Clear Current Buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Select Matrix for Operation
    glMatrixMode(GL_PROJECTION);

    // Load identity matrix
    glLoadIdentity();

    // Choose frustum - Further the near plane bigger the object.
    // glFrustum(-6,6,-6,6,nearP,farP);//left right bottom top

    gluPerspective(fovy,1,5,500);
    // Select Matrix for Operation
    glMatrixMode(GL_MODELVIEW);

    // Load identity matrix
    glLoadIdentity();

    // Set Camera Definition.
    gluLookAt(eye[0],eye[1],eye[2],look[0],look[1],look[2],up[0],up[1],up[2]);

    //lower corner and height,width of view port.
    glViewport(0,0,1100,700);
    drawMainAxis();
    //glRotatef(deg,0,0,1);
    // Draw Main Axis for better understanding
    drawFloor();
    drawSideWalls();
    drawRefrigerator();
    drawOvens();
    drawCabinets();
    drawWindows();
    drawStove();
    drawDining();
    drawShelves();
    glPushMatrix();
    drawFan();
    glTranslatef(25,7,45);
    GLfloat shine[]= {127};
    glMaterialfv(GL_FRONT,GL_SHININESS,shine);
    glutSolidSphere(2.5,100,100);
    glPopMatrix();

    GLfloat light_ambient[]  = {.1, .1, .1, 1.0};
    GLfloat light_diffuse[]  = { 0.5, 1.0,0.3, 1.0 };
    GLfloat light_specular[] = { 0.5, 1.0, 0.3, 1.0 };
    GLfloat light_position[] = { 25.0, 50.0, 45.0, 1.0 };
    glPushMatrix();
    glTranslatef(20,50,40);
    glMaterialfv( GL_FRONT, GL_AMBIENT, light_ambient);
    glMaterialfv( GL_FRONT, GL_DIFFUSE, light_diffuse);
    glMaterialfv( GL_FRONT, GL_SPECULAR, light_specular);
//    glMaterialfv( GL_FRONT, GL_SHININESS, mat_shininess);
    glutSolidSphere(1,100,100);
    glPopMatrix();
    // execute all issued command quickly.
    glFlush();

    //Swap front and back buffer for smooth viewing.
    glutSwapBuffers();


}
bool rotate_fan;
#include "misc.h"
void idleFunction() {
    if(rotate_fan==true) {
        fan_deg = fmod(fan_deg+16,360);
    }
    light0();
    light1();
    glutPostRedisplay();
}

int main(int argc,char **argv) {

    // Reset Global Variables
    initialize();

    // Initialize GLUT Library.
    glutInit(&argc,argv);

    // Determine OpenGL Display mode for the to-be-created window.
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB| GLUT_DEPTH);
    // Double Buffer, RGB color, Depth Buffer

    // Specify Upper Left Corner of to-be-created Window.
    glutInitWindowPosition(100,0);

    // Specify the size of to-be-created window in pixels.
    glutInitWindowSize(1100,700);

    // Select Mode of Shading - Flat or Smooth. Need Lighting to see difference.
    glShadeModel(GL_SMOOTH);

    // Create Window with title.
    glutCreateWindow("Kitchen Room");

    // Enable Necessary Capabilities.
    glEnable(GL_DEPTH_TEST );
    glEnable(GL_LIGHTING);
    glEnable(GL_NORMALIZE);

    // Specify Keyboard function.
    glutKeyboardFunc(keyBoardFunction);
    //light0();
    //light1();
    // Specify display function.
    glutDisplayFunc(displayFunction);

    // Specify idle function.
    glutIdleFunc(idleFunction);

    // Start event processing.
    glutMainLoop();
}





