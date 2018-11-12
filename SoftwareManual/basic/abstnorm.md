**Routine Name:**       abstnorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the absolute error of an approximation using the two norm.

**Input:** 
        
        x = the approximation of an "exact" vector
        y = the vector used to approximate the exact vector
        xLength = length of vector x
        yLength = length of vector y
        
**Output:** The function will output the two norm of the absolute error.

**Usage/Example:**

        abstnorm({6, 5, 4}, {5, 3, 1}, 3, 3)
       
Output from the lines above:

        3.74166
  
**Implementation/Code:** The following is the code for abstnorm()

  double abstnorm(vector<double> x, vector<double> y, int xLength, int yLength) {
	  if (xLength != yLength) {
		  throw exception();
	  }
	  vector<double> error;
	  for (int i = 0; i < xLength; i++) {
		  error.push_back(abserr(x[i], y[i]));
	  }
	  return tnorm(error, xLength);
  }
    
**Link to abserr:**
  [abserr()](abserr.md)
