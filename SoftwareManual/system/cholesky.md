**Routine Name:**       luSolution

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform cholesky decomposition on a symmetric matrix

**Input:** 
        
        matrix = symmetric matrix

**Output:** The function will output the matrix L as a vector of vectors of doubles

**Usage/Example:**

        cholesky({{25, 15, -5}, {15, 18, 0}, {-5, 0, 11}})
       
Output from the lines above:

        {{5, 0, 0}, {3, 3, 0}, {-1, 1, 3}}
  
**Implementation/Code:** The following is the code for cholesky()

    vector<vector<double>> cholesky(vector<vector<double>> matrix) {
	    vector<double> zeroVec(matrix.size(), 0);
	    vector<vector<double>> l(matrix.size(), zeroVec);

	    for (int i = 0; i < matrix.size(); i++) {
		    for (int j = 0; j < i + 1; j++) {
			    double sum = 0;
			    for (int k = 0; k < j; k++) {
				    sum += l[i][k] * l[j][k];
			    }
			    if (i == j) {
				    l[i][j] = sqrt(matrix[i][i] - sum);
			    }
			    else {
				    l[i][j] = 1 / l[j][j] * (matrix[i][j] - sum);
			    }
		    }
	    }
	    return l;
    }
