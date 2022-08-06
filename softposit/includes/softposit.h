#pragma once
#define SOFTPOSIT_H

#include <stdio.h>

typedef void* posit;
typedef void* quire;

//helper functions
posit newtonRhapson(posit (*f)(posit p), posit (*fPrime)(posit p), posit root);
void positPrint(posit p);

//start of posit functions

//basic functions of one posit value argument
posit negate(posit p);
posit abs(posit p);
posit sign(posit p);
posit nearestInt(posit p);
posit ceil(posit p);
posit floor(posit p);
posit next(posit p);
posit prior(posit p);

//comparison functions of two posit value arguments
int compareEqual(posit p1, posit p2);
int compareNotEqual(posit p1, posit p2);
int compareGreater(posit p1, posit p2);
int compareGreaterEqual(posit p1, posit p2);
int compareLess(posit p1, posit p2);
int compareLessEqual(posit p1, posit p2);

//arithmetic functions of two posit value arguments
posit addition(posit p1, posit p2);
posit subtraction(posit p1, posit p2);
posit multiplication(posit p1, posit p2);
posit division(posit p1, posit p2);

//elementary functions of one posit value argument
posit sqrt(posit p1);
posit rSqrt(posit p1);

posit exp(posit p1);
posit expMinus1(posit p1);
posit exp2(posit p1);
posit exp2Minus1(posit p1);
posit exp10(posit p1);
posit exp10Minus1(posit p1);

posit log(posit p1); //ln
posit logPlus1(posit p1);
posit log2(posit p1);
posit log2Plus1(posit p1);
posit log10(posit p1);
posit log10Plus1(posit p1);

posit sin(posit p1);
posit sinPi(posit p1);
posit cos(posit p1);
posit cosPi(posit p1);
posit tan(posit p1);
posit tanPi(posit p1);

posit arcSin(posit p1);
posit arcSinPi(posit p1);
posit arcCos(posit p1);
posit arcCosPi(posit p1);
posit arcTan(posit p1);
posit arcTanPi(posit p1);

posit sinH(posit p1);
posit cosH(posit p1);
posit tanH(posit p1);
posit arcSinH(posit p1);
posit arcCosH(posit p1);
posit arcTanH(posit p1);

//elementary functions of two posit value arguments
posit hypot(posit p1, posit p2);
posit pow(posit p1, posit p2);
posit arcTan2(posit p1, posit p2);
posit arcTan2Pi(posit p1, posit p2);

//functions of three posit value arguments
posit fMM(posit p1, posit p2, posit p3);

//functions of one posit value argument and one integer argument
posit compound(posit p, int i);
posit rootN(posit p, int i);

//special (extra) functions go here. analysis functions maybe?

//functions involving quire value arguments
quire pToQ(posit p);
quire qNegate(quire q);
quire qAbs(quire q);
quire qAddP(quire q, posit p);
quire qSubP(quire q, posit p);
quire qAddQ(quire q1, quire q2);
quire qSubQ(quire q1, quire q2);
quire qMulAdd(quire q, posit p1, posit p2);
quire qMulSub(quire q, posit p1, posit p2);
posit qToP(quire q);

//conversion functions
posit pMtoN(posit p, int m, int n);

//library conversion functions
posit strToP(char* s);
char* pToStr(posit p);

posit sToP(short i);
posit iToP(int i);
posit lToP(long i);

short pToS(posit p);
int pToI(posit p);
long pToL(posit p);

posit fToP(float f);
posit dtoP(double f);

float pToF(posit p);
double pToD(posit p);