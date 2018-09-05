#include <math.h>
#include <iostream>
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

int main() {
	complex<double>* temp = quadpoly(1, 0, 2);
	cout << temp[0].real() << "+" <<temp[0].imag() << "i" << endl;
	cout << temp[1].real() << temp[1].imag() << "i" << endl;
	return 0;
}
