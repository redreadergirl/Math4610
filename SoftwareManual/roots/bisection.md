**Routine Name:**       bisection

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the roots of a function using the Bisection Method

**Input:** 
        
        a = lower bracket
        b = upper bracket
        function = pointer of the function to evaluate f(x)

**Output:** The function will output a double of one of the functions roots.

**Usage/Example:**

        bisection(0.6, 1.8, sinpix)
        This will find a root of the equation f(x)=sin(pi*x)
        The function sinpix is located [here](/resources/sinpix.md)
       
Output from the lines above:

        0.998437
  
**Implementation/Code:** The following is the code for bisection()

    double bisection(double a, double b, double(*function)(double)) {
	    int iterations = 20;
	    double fa = function(a);
	    while (iterations-- > 0 && b - a > .01) {
		    double p = (a + b) / 2;
		    double fp = function(p);
		    if (fa * fp < 0) {
			    b = p;
		    }
		    else {
			    a = p;
			    fa = fp;
		    }
	    }
	    return (a + b) / 2;
    }
    
**Evaluation of Results:**

    f(x) = x^2 - 3 produced 1.73047 as a root after 8 iterations.
    Absolute Error = 0.00158081
    Relative Error = 0.00091268
    f(x) = sin(pi * x) produced 0.998437 as a root after 8 iterations.
    Absolute Error = 0.001563
    Relative Error = 0.001563
