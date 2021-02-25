c:\ps2dev\gcc\ee\bin\ee-gcc -march=r4000 -g -mgp32 -mlong32 -c main.c
c:\ps2dev\gcc\ee\bin\ee-gcc -march=r4000 -g -mgp32 -mlong32 -c pg.c
c:\ps2dev\gcc\ee\bin\ee-gcc -march=r4000 -g -mgp32 -c -xassembler -O -o startup.o startup.s
c:\ps2dev\gcc\ee\bin\ee-ld -O0 startup.o main.o pg.o -M -Ttext 8900000 -q -o out > main.map
c:\ps2dev\share\outpatch
patch outp "Japanese Demo"
del *.o
del *.map
del out
del outp
