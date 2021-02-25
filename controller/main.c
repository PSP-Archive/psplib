#include "pg.h"
#include "controller.c"

int xmain(void) {
	
	// Initialize
	pgInit();
	pgScreenFrame(2,0);
	sceCtrlInit(0);
	sceCtrlSetAnalogMode(0);

	while(1) {
		switch(Control()) {
		case 1:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed square!");			
			pgScreenFlipV();			
			break;
		case 2:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed triangle!");			
			pgScreenFlipV();			
			break;
		case 3:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed circle!");			
			pgScreenFlipV();			
			break;
		case 4:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed cross!");			
			pgScreenFlipV();			
			break;
		case 5:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed up!");			
			pgScreenFlipV();			
			break;
		case 6:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed down!");			
			pgScreenFlipV();			
			break;
		case 7:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed left!");			
			pgScreenFlipV();			
			break;
		case 8:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed right!");			
			pgScreenFlipV();			
			break;
		case 9:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed start!");			
			pgScreenFlipV();			
			break;
		case 10:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed select!");			
			pgScreenFlipV();			
			break;
		case 11:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed left trigger!");			
			pgScreenFlipV();			
			break;
		case 12:
			pgFillvram(0);
			pgPrint(1,7,0xffff,"You pressed right trigger!");			
			pgScreenFlipV();			
			break;
	}
	}
	return 0;
}
