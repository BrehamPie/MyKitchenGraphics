void initialize() {
    //turn on light0
    for(int i=0; i<1; i++) {
        ambientOn[i]=1;
        specularOn[i]=1;
        turnOn[i]=1;
        diffuseOn[i]=1;
    }
    numberOfLights = 2;
    eye[0]= 100;
    eye[1]= 20;
    eye[2]= 40;
    look[0]= 0;
    look[1]= 20;
    look[2]= 40;
    up[0]= 0;
    up[1]= 1;
    up[2]= 0;
    fovy=90;
}
void toggleLight() {
    currentLight = (currentLight+1)%numberOfLights;
    cout<<"current :"<<currentLight<<endl;
}
void lightSwitch() {
    turnOn[currentLight] = !turnOn[currentLight];
}
void ambientSwitch() {
    ambientOn[currentLight] = !ambientOn[currentLight];
}
void diffuseSwitch() {
    diffuseOn[currentLight] = !diffuseOn[currentLight];
}

void specularSwitch() {
    specularOn[currentLight] = !specularOn[currentLight];
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
    case 'f':
        rotate_fan = !rotate_fan;
        break;
    case 'q':
        toggleLight();
        break;
    case 'a':
        ambientSwitch();
        break;
    case 's':
        specularSwitch();
        break;
    case 'd':
        diffuseSwitch();
        break;
    case 'e':
        lightSwitch();
        break;
    case '5':
        initialize();
    }
}
