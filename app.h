#ifndef _APP_H
#define _APP_H

#include <sifteo.h>
#include "cube.h"

using namespace Sifteo;

class CubeA;
class CubeB;

class App {
public:
    App();

    CubeA *cubeA;
    CubeB *cubeB; 

    void init();
    void run();

    void onTouch(unsigned id);    
};


#endif
