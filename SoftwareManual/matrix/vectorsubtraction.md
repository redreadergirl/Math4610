**Routine Name:**       vectorSubtraction

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the difference between two vectors

**Input:** 
        
        x = the first vector
        y = the second vector
        
**Output:** The function will output the difference between the vectors as a vector of doubles

**Usage/Example:**

        vectorSubtraction({1, 2, 3}, {3, 2, 6})
       
Output from the lines above:

        {-2, 0, -3}
  
**Implementation/Code:** The following is the code for vectorSubtraction()

    vector<double> vectorSubtraction(vector<double> x, vector<double> y) {
	    for (int i = 0; i < x.size(); i++) {
		    x[i] -= y[i];
	    }
	    return x;
    }
