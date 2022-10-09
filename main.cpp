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
#include "fan.h"
#include "light.h"
using namespace std;
const float eps = 1e-6;
/*------Global Variables------*/
//Eye Positions
GLfloat eye[3]={100,20,40};

//Look At Positions
GLfloat look[3]={0,20,40};

//
GLfloat up[3]={0,1,0};
float fovy=90;
float deg;
float alpha,bita,theta;
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
    drawFan();
    // execute all issued command quickly.
    glFlush();

    //Swap front and back buffer for smooth viewing.
    glutSwapBuffers();


}

void keyBoardFunction(unsigned char key,int x,int y) {
    switch(key) {
    case 'g':
        moveForward(look,eye);
        break;
    case '+':
        zoomIn(fovy);
        break;
    case '-':
        zoomOut(fovy);
        break;
    case '4':
        Yaw(eye,look,up,bita);
        break;
    case '6':
        Yaw(eye,look,up,bita,false);
        break;
    case '8':
        Pitch(eye,look,up,theta);
        break;
    case '2':
        Pitch(eye,look,up,theta,false);
        break;
    case '7':
        Roll(eye,look,up,alpha);
        break;
    case '9':
        Roll(eye,look,up,alpha,false);
        break;
    }
}
void idleFunction() {
    deg++;
    glutPostRedisplay();
}
void initialize(){}

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
    light0();
    // Specify display function.
    glutDisplayFunc(displayFunction);

    // Specify idle function.
    glutIdleFunc(idleFunction);

    // Start event processing.
    glutMainLoop();
}





