#include <app.h>

static Metadata M = Metadata()
    .title("Sifteo Chemistry Lab")
    .package("moleque.lab.quimica", "0.1")
    .cubeRange(2);

void main()
{
    App app;
	    app.init();
    while (1) {
	    app.run();
	}
}

