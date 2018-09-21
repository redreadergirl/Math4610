**Routine Name:**       newton

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the roots of a function using Newton's Method

**Input:** 
        
        x = initial guess
        fOfX = pointer to the function to evaluate f(x)
        fPrime = pointer to the function to evaluate f'(x)

**Output:** The function will output a double of one of the functions roots.

**Usage/Example:**

        newton(1.3, sinpix, sinpixPrime)
       
Output from the lines above:

        0.999997
  
**Implementation/Code:** The following is the code for newton()

    double newton(double x, double(*fOfX) (double), double(*fPrime)(double)) {
	    int iterations = 100;
	    double temp;
	    while (iterations-- > 0) {
		    temp = x - (fOfX(x) / fPrime(x));
		    if (abs(x - temp) < .01) {
			    break;
		    }
		    x = temp;
	    }
	    return temp;
    }
    
**Evaluation of Results:**

    f(x) = x^2 - 3 produced 1.73205 as a root after 4 iterations.
    Absolute Error = 8.07567e-7
    Relative Error = 4.6625e-7
    f(x) = sin(pi * x) produced 0.999997 as a root after 3 iterations.
    Absolute Error = 3e-6
    Relative Error = 3e-6


**Functions for evaluating f(x):**
[sinpix()](../resources/sinpix.cpp)
[sinpixPrime()](../resources/sinpixprime.cpp)
[xsqrd()](../resources/xsqrd.cpp)
[xsqrdPrime()](../resources/xsqrdprime.cpp)
