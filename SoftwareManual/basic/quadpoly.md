**Routine Name:**           quadpoly

**Author:** Claire Romney

**Language:** C++

The code can be compiled by running:

     g++ quadpoly.cpp -o quadpoly

**Description/Purpose:** This routine will compute the roots of a quadratic polynomial.

**Input:** Three doubles, a, b, and c.

**Output:** This routine returns an array containing the two roots of a quadratic polynomial as a complex double.

**Usage/Example:**

The routine takes three arguments, a, b, and c

     a = 1, b = 0, c = 2
     ./quadpoly.exe

Output from the lines above:

      -0+1.41421i
      -0-1.41421i

**Implementation/Code:** The following is the code for quadpoly()

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
