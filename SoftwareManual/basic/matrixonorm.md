**Routine Name:** matrixonorm

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the one norm of a matrix

**Input:**

	A = the matrix as a vector of vectors of doubles
	
**Output:** The function will output the one norm as a double

**Usage/Example:**

	matrixOneNorm({ {1, 2, 3}, {8, 4, 7}, {2, 1, 5} })

Output from the lines above:

	15
    
**Implementation/Code:** The following is the code for matrixonorm()

    double matrixonorm(vector<vector<double>> A) {
	    double max = 0;
	    for (int j = 0; j < A[0].size(); j++) {
		    double sum = 0;
		    for (int i = 0; i < A.size(); i++) {
			    sum += A[i][j];
		    }
		    if (sum > max) {
			    max = sum;
	    	}
	    }
	    return max;
    }
