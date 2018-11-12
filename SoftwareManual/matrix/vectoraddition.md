**Routine Name:**       vectorAddition

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the sum of two vectors

**Input:** 
        
        x = the first vector
        y = the second vector
        
**Output:** The function will output the sum of the vectors as a vector of doubles

**Usage/Example:**

        vectorAddition({1, 2, 3}, {3, 2, 6})
       
Output from the lines above:

        {4, 4, 9}
  
**Implementation/Code:** The following is the code for vectorAddition()

    vector<double> vectorAddition(vector<double> x, vector<double> y) {
	    for (int i = 0; i < x.size(); i++) {
		    x[i] += y[i];
	    }
	    return x;
    }
