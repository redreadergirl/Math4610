**Routine Name:**       relinorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the relative error of an approximation using the infinity norm.

**Input:** 
        
        x = the approximation of an "exact" vector
        y = the vector used to approximate the exact vector
        xLength = length of vector x
        yLength = length of vector y
        
**Output:** The function will output the infinity norm of the relative error.

**Usage/Example:**

        relinorm({6, 5, 4}, {5, 3, 1}, 3, 3)
       
Output from the lines above:

        3
  
**Implementation/Code:** The following is the code for relinorm()

    double relinorm(vector<double> x, vector<double> y, int xLength, int yLength) {
	    if (xLength != yLength) {
		    throw exception();
	    }
	    vector<double> error;
	    for (int i = 0; i < xLength; i++) {
		    error.push_back(relerr(x[i], y[i]));
	    }
	    return inorm(error, xLength);
    }
    
**Link to relerr:**
  [relerr()](../resources/relerr.md)
