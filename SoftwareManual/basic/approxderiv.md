**Routine Name:**       approxderiv

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the approximate derivative of f(x) at some x.

**Input:** 
        
        h = size of h
        x = value to evaluate at
        fOfX = pointer to a function to solve f(x)

**Output:** The function will output a double of the approximate derivative

**Usage/Example:**

        approxderiv(.01, 4.8, sinpix)
       
Output from the lines above:

        -2.57019
  
**Implementation/Code:** The following is the code for approxderiv()

    double approxderiv(double h, double x, double(*fOfX)(double)) {
	    double approx = fOfX(x + h) - fOfX(x);
	    return approx / h;
    }
    
**Evaluation of Results:**

    The function returned f'(4.8) = -2.57019 when f(x) = sin(pi*x)
    Absolute Error = .00029
    Relative Error = .0001141
