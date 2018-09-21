**Routine Name:**       xsqrditer

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute a root of a function using function iteration for f(x)=x^2 - 3

**Input:** 
        
        x0 = initial guess

**Output:** The function will output a root of the function as a double

**Usage/Example:**

        xsqrditer(1)
       
Output from the lines above:

        -1.71939
  
**Implementation/Code:** The following is the code for xsqrditer()

    double xsqrditer(double x0) {
	    int i = 30;
	    double temp;
	    double x = x0;
	    while (i-- > 0) {
		    temp = x + ((x * x - 3) / 10);
		    if (abs(x - temp) < .01) {
			    break;
		    }
		    x = temp;
	    }
	    return temp;
    }

**Evaluation of Results:**

    the function returned -1.71939 as a root after 18 iterations
    Absolute Error = .01266
    Relative Error = .00731
