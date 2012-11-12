#ifndef _APP_H
#define _APP_H

#include <sifteo.h>
#include "cube.h"

using namespace Sifteo;

class CubeA;
class CubeB;
class CubeC;
class CubeD;

class App {
public:
    App();

    CubeA *cubeA;
    CubeB *cubeB;
    CubeC *cubeC;
    CubeD *cubeD;

    NOINLINE void init();
    NOINLINE void run();

    void onTouch(unsigned id);
    void onAccelChange(unsigned id);
};


#endif
