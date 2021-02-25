#include "pg.h"
#include "colors.h"

int xmain(void) {
	// Initialize
	pgInit();
	pgScreenFrame(2,0);
	sceCtrlInit(0);
	sceCtrlSetAnalogMode(0);

	while(1) {

			pgFillvram(0);
			pgPrint(1,7,red,"I am RED");
			pgPrint(1,8,black,"I am BLACK");
			pgPrint(1,9,yellow,"I am YELLOW");
			pgPrint(1,10,peru,"I am PERU");
			pgPrint(1,11,white,"I am WHITE");
			pgPrint(1,12,gray,"I am GRAY");
			pgScreenFlipV();			
}
	return 0;
}

