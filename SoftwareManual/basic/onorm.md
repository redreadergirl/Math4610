**Routine Name:**       onorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the one norm of a vector.

**Input:** 
        
        e = the vector to compute the norm of
        length = the size of the vector
        
**Output:** The function will output the one norm as a double

**Usage/Example:**

        onorm({1, 2, 3}, 3)
       
Output from the lines above:

        6
  
**Implementation/Code:** The following is the code for onorm()

    double onorm(vector<double> e, int length) {
	    double norm = 0;
	    for (int i = 0; i < length; i++) {
		    norm += abs(e[i]);
	    }
	    return norm;
    }
