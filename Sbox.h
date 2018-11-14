#include "AES.h"

#ifndef __Sbox__

void originMatrix(uchar m[16][16]);
void printMatrix(uchar m[16][16]);
uchar figureRev(uchar a);
void genSbox(uchar m[16][16]);
uchar maptranf(uchar a);
uchar invmaptranf(uchar a);
void geninvSbox(uchar m[16][16]);

#endif

#define __Sbox__