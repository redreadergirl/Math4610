**Routine Name:**       secant

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the roots of a function using the Secant Method

**Input:** 
        
        x0 = first initial guess
        x1 = second initial guess
        fOfX = pointer to the function to evaluate f(x)

**Output:** The function will output a double of one of the functions roots.

**Usage/Example:**

        secant(1.2, 1.3, sinpix)
       
Output from the lines above:

        0.999949
  
**Implementation/Code:** The following is the code for secant()

    double secant(double x0, double x1, double(*fOfX)(double)) {
	    int iterations = 10;
	    double xkm1 = x0;
	    double xk = x1;
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

    f(x) = x^2 - 3 produced 1.73214 as a root after 3 iterations.
    Absolute Error = 8.91924e-5
    Relative Error = 5.14953e-5
    f(x) = sin(pi * x) produced 0.999949 as a root after 3 iterations.
    Absolute Error = 5.1e-5
    Relative Error = 5.1e-5


**Functions for evaluating f(x):**
[sinpix()](../resources/sinpix.cpp)
[xsqrd()](../resources/xsqrd.cpp)
