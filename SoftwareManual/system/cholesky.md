**Routine Name:**       luSolution

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform cholesky decomposition on a symmetric matrix

**Input:** 
        
        matrix = symmetric matrix

**Output:** The function will output the matrix L as a vector of vectors of doubles

**Usage/Example:**

        cholesky({ {2.3, .36, 1.82, 2.51, -0.81}, {.36, 2.14, -1.19, 0.45, -2.6}, {1.82, -1.19, 3.40, 2.25, 2.09}, {2.51, .45, 2.25, 5.12, -2.59}, {-.81, -2.6, 2.09, -2.59, 8.91 } })
       
Output from the lines above:

        {{1.52, 0, 0, 0, 0}, {0.24, 1.44, 0, 0, 0}, {1.2, -1.02, .96, 0, 0}, {1.66, 0.04, 0.32, 1.51, 0}, {-.53, -1.71, 1.02, -1.301, 1.72} }
  
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
