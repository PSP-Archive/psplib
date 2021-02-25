#include "pg.h"
#include "japanese.h"

unsigned short rgb2col(unsigned char r,unsigned char g,unsigned char b) {
	return ((((b>>3) & 0x1F)<<10)+(((g>>3) & 0x1F)<<5)+(((r>>3) & 0x1F)<<0)+0x8000);
}

int xmain(void) {

	// Initialize
	pgInit();
	pgScreenFrame(2,0);

	while(1) {
		pgFillvram(0);
		print_japanese(40, 80,"ƒtƒ@ƒCƒ‹‚ð"   ,rgb2col(200,200,200),0,0);
		pgScreenFlipV();
	}

	return 0;
}

