#include <stdio.h>
#include <math.h>
#include "hellomake.h"

#define PI 3.14

int main() {
	// call a function in another file
	myPrintHelloMake();

	// math
	double x, ret, val;
	x = 0.9;
	val = 180.0 / PI;
	ret = acos(x) * val;
	printf("The arc cosine of %lf is %lf degrees\n", x, ret);

	return(0);
}
