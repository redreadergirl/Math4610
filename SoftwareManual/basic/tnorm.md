**Routine Name:**       tnorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the two norm of a vector.

**Input:** 
        
        e = the vector to compute the norm of
        length = the size of the vector
        
**Output:** The function will output the two norm as a double

**Usage/Example:**

        tnorm({1, 2, 3}, 3)
       
Output from the lines above:

        3.74166
  
**Implementation/Code:** The following is the code for tnorm()

    double tnorm(vector<double> e, int length) {
	    double norm = 0;
	    for (int i = 0; i < length; i++) {
		    norm += pow(e[i], 2);
	    }
	    return sqrt(norm);
    }
