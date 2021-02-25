#include "pg.h"
#include "psptime.c"

int xmain(void) {
	// Initialize
	pgInit();
	pgScreenFrame(2,0);
	sceCtrlInit(0);
	sceCtrlSetAnalogMode(0);

	while(1) {

			//35years * 31536000 seconds in a year = 1103760000 seconds
			//new calc		including leap years   1104537600 seconds
			//take current time - 1104537600 = seconds passed in this year!
      		pgFillvram(0);
			pgPrint(1,7,0xffff,"This year is");
			pgPrint(1,8,0xffff,getYear());
			pgPrint(1,9,0xffff,"this month is");
			pgPrint(1,10,0xffff,getMonth());
			pgPrint(1,11,0xffff,"this day is");
			pgPrint(1,12,0xffff,getDay());
			pgScreenFlipV();			
}
	return 0;
}

