#include "app.h"
#include "cube.h"

App::App() {
    CubeA cA = CubeA(0,this);
    this->cubeA = &cA;

    CubeB cB = CubeB(1,this);
    this->cubeB = &cB;

    CubeC cC = CubeC(2,this);
    this->cubeC = &cC;

    CubeD cD = CubeD(3,this);
    this->cubeD = &cD;
}

void App::init() {
    cubeA->init();
    cubeB->init();
    cubeC->init();
    cubeD->init();

    Events::cubeTouch.set(&App::onTouch, this);
    Events::cubeAccelChange.set(&App::onAccelChange, this);

}

void App::run() {
    TimeStep ts;
    ts.next();
    System::paint();
}

void App::onTouch(unsigned id) {
    switch(id) {
        default: ; break ;
        case 0: cubeA->onTouch(id); break ;
        case 1: cubeB->onTouch(id); break ;
    };
}

void App::onAccelChange(unsigned id) {
    switch(id) {
        default: ; break ;
        case 0: cubeA->onAccelChange(id); break ;
        case 1: cubeB->onAccelChange(id); break ;
    };
}
