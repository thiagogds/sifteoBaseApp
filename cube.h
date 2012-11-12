#ifndef _CUBE_H
#define _CUBE_H

#include "app.h"

using namespace Sifteo;

class App;

class CubeA{
public:
    CubeA(CubeID cube, App* app);

    CubeID mCube;
    App* mApp;

    String<20> name; 
    
    VideoBuffer vid;
    void init(); 
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

class CubeB{
public:
    CubeB(CubeID cube, App* app);

    CubeID mCube;
    App* mApp;

    String<20> name; 
    
    VideoBuffer vid;
    void init();
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

#endif

