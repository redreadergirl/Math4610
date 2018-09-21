**Routine Name:**       siniter

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute a root of a function using function iteration for f(x)=sin(pi*x)

**Input:** 
        
        x0 = initial guess

**Output:** The function will output a root of the function as a double

**Usage/Example:**

        siniter(1.3)
       
Output from the lines above:

        .996636
  
**Implementation/Code:** The following is the code for siniter()

    double siniter(double x0) {
	    int i = 20;
	    double temp;
	    double x = x0;
	    while (i-- > 0) {
		    temp = x + (sin(pi * x) / 2);
		    if (abs(x - temp) < .01) {
			    break;
		    }
		    x = temp;
	    }
	    return temp;
    }

**Evaluation of Results:**

    the function returned .996636 as a root after 7 iterations
    Absolute Error = .003364
    Relative Error = .003364
