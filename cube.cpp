#include "cube.h"
#include "app.h"

CubeA::CubeA(CubeID cube, App* app) {
    mCube = cube;
    mApp = app;
    vid.attach(cube);

   name << "Sensacional\n";
}

void CubeA::init(){
    vid.initMode(BG0_ROM);

    String<32> str;
    str << "I am cube\n";
    str << "A\n\n";
    vid.bg0rom.text(vec(1,2), str);
}

CubeB::CubeB(CubeID cube, App* app) {
    mCube = cube;
    mApp = app;
    vid.attach(cube);
   name << "Fantastico\n";
}

void CubeB::init(){
    vid.initMode(BG0_ROM);

    CubeA* cA = mApp->cubeA;

    String<32> str;
    str << "I am cube\n";
    str << "B\n\n";
    vid.bg0rom.text(vec(1,2), str);
}

void CubeB::onTouch(unsigned id) {
    if(mCube.isTouching()) {
        String<20> str;
        str <<  mApp->cubeA->name;
        vid.bg0rom.text(vec(1,6), str);
    }
}

void CubeA::onTouch(unsigned id) {
    vid.bg0rom.text(vec(1,5), mApp->cubeB->name);
void CubeA::onAccelChange(unsigned id) {
    unsigned changeFlags = motion.update();
    auto tilt = motion.tilt;

    if( changeFlags ) {
        LOG("Accel A \n");
        if (tilt.x) {
            LOG("Tilt A \n");
            name << "Mudei o A :)";
        }
    }
}

void CubeB::onAccelChange(unsigned id) {
}
