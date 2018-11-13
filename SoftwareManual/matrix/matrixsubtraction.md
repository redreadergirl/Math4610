**Routine Name:**       matrixSubtraction

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the difference between two matrices.

**Input:** 
        
        x = the first matrix
        y = the second matrix
        
        
**Output:** The function will output the difference as a vector of vectors of doubles

**Usage/Example:**

        matrixSubtraction({{1, 2}, {3, 7}}, {{4, 6}, {9, -4}})
       
Output from the lines above:

        {{-3, -4}, {-6, 11}}
  
**Implementation/Code:** The following is the code for matrixSubtraction()

    vector<vector<double>> matrixSubtraction(vector<vector<double>> x, vector<vector<double>> y) {
	    for (int i = 0; i < x.size(); i++) {
		    for (int j = 0; j < x[0].size(); j++) {
			    x[i][j] -= y[i][j];
		    }
	    }
	    return x;
    }
