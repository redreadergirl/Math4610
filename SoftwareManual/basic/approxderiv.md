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

I ran the code on several different equations. Each continued to get better until about the 20th iteration. After the first 5 or so iterations the function was barely improving by anything. Here are the graphs of the results of [5x^3 + sin(x)](../hw2/graph1.png) and [3x^2](../hw2/graph2.png)
