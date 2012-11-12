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

    String<10> name;

    VideoBuffer vid;
    TiltShakeRecognizer motion;


    void init();
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

class CubeB{
public:
    CubeB(CubeID cube, App* app);

    CubeID mCube;
    App* mApp;

    String<10> name;

    VideoBuffer vid;
    TiltShakeRecognizer motion;

    void init();
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

class CubeC{
public:
    CubeC(CubeID cube, App* app);

    CubeID mCube;
    App* mApp;

    String<10> name;

    VideoBuffer vid;
    TiltShakeRecognizer motion;

    void init();
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

class CubeD{
public:
    CubeD(CubeID cube, App* app);

    CubeID mCube;
    App* mApp;

    String<10> name;

    TiltShakeRecognizer motion;
    VideoBuffer vid;

    void init();
    void onTouch(unsigned id);
    void onAccelChange(unsigned id);

};

#endif

