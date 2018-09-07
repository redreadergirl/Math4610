#include <math.h>
#include "mylib.h"
#include <complex>

using namespace std;

complex<double>* quadpoly(double a, double b, double c) {
	complex<double> *roots = new complex<double>[2];
	if ((b * b) - (4 * a * c) < 0.0) {
		complex<double> temp1(-b / (2 * a), sqrt(abs((b * b) - (4 * a * c))) / (2 * a));
		complex<double> temp2(-b / (2 * a), sqrt(abs((b * b) - (4 * a * c))) / (-2 * a));
		roots[0] = temp1;
		roots[1] = temp2;
	}
	else {
		complex<double> temp1((-b + sqrt((b * b) - (4 * a * c))) / (2 * a), 0);
		complex<double> temp2((-b - sqrt((b * b) - (4 * a * c))) / (2 * a), 0);
		roots[0] = temp1;
		roots[1] = temp2;
	}

	return roots;
}
