**Routine Name:**       inorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the infinity norm of a vector.

**Input:** 
        
        e = the vector to compute the norm of
        length = the size of the vector
        
**Output:** The function will output the infinity norm as a double

**Usage/Example:**

        inorm({1, 2, 3}, 3)
       
Output from the lines above:

        3
  
**Implementation/Code:** The following is the code for inorm()

    double inorm(vector<double> e, int length) {
	    double norm = 0;
	    for (int i = 0; i < length; i++) {
		    if (abs(e[i]) > norm) {
			    norm = abs(e[i]);
		    }
	    }
	    return norm;
    }
