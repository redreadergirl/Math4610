**Routine Name:**       biNewtHybrid

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the roots of a function using a hybrid of Bisection to bracket the roots and Newton's method for faster convergence once the interval has been narrowed.

**Input:** 
        
        a = left bracket
        b = right bracket
        fOfX = pointer to the function to evaluate f(x)
        fPrime = pointer to the function to evaluate f'(x)

**Output:** The function will output a double of one of the functions roots.

**Usage/Example:**

        biNewtHybrid(.6, 1.8, sinpix, sinpixPrime)
       
Output from the lines above:

        1
  
**Implementation/Code:** The following is the code for biNewtHybrid()

    double biNewtHybrid(double a, double b, double(*fOfX)(double), double(*fPrime)(double)) {
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
	    double x = (a + b) / 2;
	    double temp;
	    while (iterations-- > 0) {
		    temp = x - (fOfX(x) / fPrime(x));
		    if (abs(x - temp) > .5) {
			    throw new exception();
		    }
		    if (abs(x - temp) < .01) {
			    break;
		    }
		    x = temp;
	    }
	    return temp;
    }
    
**Evaluation of Results:**

    f(x) = x^2 - 3 produced 1.73205 as a root after 3 iterations of bisection and 2 iterations of newton
    Absolute Error = 8.07567e-7
    Relative Error = 4.6625e-7
    f(x) = sin(pi * x) produced 1 as a root after 3 iterations of bisection and 2 iterations of newton
    Absolute Error = 0
    Relative Error = 0


**Functions for evaluating f(x) and f'(x):**
[sinpix()](../resources/sinpix.cpp)
[sinpixPrime()](../resources/sinpixprime.cpp)
[xsqrd()](../resources/xsqrd.cpp)
[xsqrdPrime()](../resources/xsqrdprime.cpp)
