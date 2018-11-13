**Routine Name:**       matrixAddition

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the sum of two matrices.

**Input:** 
        
        x = the first matrix
        y = the second matrix
        
        
**Output:** The function will output the sum as a vector of vectors of doubles

**Usage/Example:**

        matrixAddition({{1, 2}, {3, 7}}, {{4, 6}, {9, -4}})
       
Output from the lines above:

        {{5, 8}, {12, 3}}
  
**Implementation/Code:** The following is the code for matrixAddition()

    vector<vector<double>> matrixAddition(vector<vector<double>> x, vector<vector<double>> y) {
	    for (int i = 0; i < x.size(); i++) {
		    for (int j = 0; j < x[0].size(); j++) {
			    x[i][j] += y[i][j];
		    }
	    }
	    return x;
    }
