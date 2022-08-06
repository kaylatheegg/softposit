//placeholder for testing the library, will be removed at a later date and replaced with unit testing
#include "softposit.h"

int main() {
	posit p;
	p = iToP(123456);
	positPrint(p);
	printf("wee!!\n");
	return 0;
}

//helper functions
posit newtonRhapson(posit (*f)(posit p), posit (*fPrime)(posit p), posit root) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
void positPrint(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//start of posit functions

//basic functions of one posit value argument
posit negate(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit abs(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit sign(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit nearestInt(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit ceil(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit floor(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit next(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit prior(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//comparison functions of two posit value arguments
int compareEqual(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int compareNotEqual(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int compareGreater(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int compareGreaterEqual(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int compareLess(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int compareLessEqual(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//arithmetic functions of two posit value arguments
posit addition(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit subtraction(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit multiplication(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit division(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//elementary functions of one posit value argument
posit sqrt(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit rSqrt(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit exp(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit expMinus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit exp2(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit exp2Minus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit exp10(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit exp10Minus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit log(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); } //ln
posit logPlus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit log2(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit log2Plus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit log10(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit log10Plus1(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit sin(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit sinPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit cos(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit cosPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit tan(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit tanPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit arcSin(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcSinPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcCos(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcCosPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcTan(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcTanPi(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit sinH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit cosH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit tanH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcSinH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcCosH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcTanH(posit p1) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//elementary functions of two posit value arguments
posit hypot(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit pow(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcTan2(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit arcTan2Pi(posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//functions of three posit value arguments
posit fMM(posit p1, posit p2, posit p3) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//functions of one posit value argument and one integer argument
posit compound(posit p, int i) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit rootN(posit p, int i) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//special (extra) functions go here. analysis functions maybe?

//functions involving quire value arguments
quire pToQ(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qNegate(quire q) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qAbs(quire q) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qAddP(quire q, posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qSubP(quire q, posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qAddQ(quire q1, quire q2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qSubQ(quire q1, quire q2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qMulAdd(quire q, posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
quire qMulSub(quire q, posit p1, posit p2) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit qToP(quire q) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//conversion functions
posit pMtoN(posit p, int m, int n) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

//library conversion functions
posit strToP(char* s) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
char* pToStr(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit sToP(short i) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit lToP(long i) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

short pToS(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
int pToI(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
long pToL(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

posit fToP(float f) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
posit dtoP(double f) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }

float pToF(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }
double pToD(posit p) { printf("UNIMPLEMENTED! line: %d\n", __LINE__); }