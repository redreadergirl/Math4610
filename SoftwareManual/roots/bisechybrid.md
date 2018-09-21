**Routine Name:**       biSecHybrid

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the roots of a function using a hybrid of Bisection to bracket the roots and the Secant method for faster convergence once the interval has been narrowed.

**Input:** 
        
        a = left bracket
        b = right bracket
        fOfX = pointer to the function to evaluate f(x)

**Output:** The function will output a double of one of the functions roots.

**Usage/Example:**

        biSecHybrid(.6, 1.8, sinpix)
       
Output from the lines above:

        1
  
**Implementation/Code:** The following is the code for biSecHybrid()

    double biSecHybrid(double a, double b, double(*fOfX)(double)) {
	    double fa = fOfX(a);
	    while ((b - a) / 2 > .1) {
		    double p = (a + b) / 2;
		    double fp = fOfX(p);
		    if (fa * fp < 0) {
			    b = p;
		    }
		    else {
			    a = p;
			    fa = fp;
		    }
	    }
	    int iterations = 10;
	    double xkm1 = a;
	    double xk = b;
	    double fxk = fOfX(xk);
	    double fxkm1 = fOfX(xkm1);
	    double xkp1;
	    while (iterations-- > 0) {
		    xkp1 = xk - ((fxk * (xk - xkm1)) / (fxk - fxkm1));
		    if (abs(xk - xkp1) < .01) {
			    break;
		    }
		    xkm1 = xk;
		    xk = xkp1;
		    fxkm1 = fxk;
		    fxk = fOfX(xk);
	    }
	    return xkp1;
    }
    
**Evaluation of Results:**

    f(x) = x^2 - 3 produced 1.73205 as a root after 3 iterations of bisection and 2 iterations of newton
    Absolute Error = 8.07567e-7
    Relative Error = 4.6625e-7
    f(x) = sin(pi * x) produced 1 as a root after 3 iterations of bisection and 2 iterations of newton
    Absolute Error = 0
    Relative Error = 0


**Functions for evaluating f(x):**
[sinpix()](../resources/sinpix.cpp)
[xsqrd()](../resources/xsqrd.cpp)
