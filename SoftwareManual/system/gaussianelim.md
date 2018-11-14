**Routine Name:**       gaussianElim

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform Gaussian Elimination on a square matrix

**Input:** 
        
        matrix = the square matrix to perform elimination on

**Output:** The function will output the reduced matrix as a vector of vectors of doubles

**Usage/Example:**

        gaussianElim({ { 0, 2, 1},{ 1, -2, -3 },{ -1, 1, 2 } })
       
Output from the lines above:

        {{1, -2, -3}, {0, 2, 1}, {0, 0, -.5}}
  
**Implementation/Code:** The following is the code for gaussianElim()

    vector<vector<double>> gaussianElim(vector<vector<double>> matrix) {
	    for (int i = 0; i < matrix.size(); i++) {
		    double max = abs(matrix[i][i]);
		    int maxRow = i;
		    for (int j = i + 1; j < matrix.size(); j++) {
			    if (abs(matrix[j][i]) > max) {
				    max = abs(matrix[j][i]);
				    maxRow = j;
			    }
		    }
		    vector<double> temp = matrix[i];
		    matrix[i] = matrix[maxRow];
		    matrix[maxRow] = temp;
		    for (int k = i + 1; k < matrix.size(); k++) {
			    double num = -1 * matrix[k][i] / matrix[i][i];
			    for (int l = i; l < matrix.size(); l++) {
				    if (i == l) {
					    matrix[k][l] = 0;
				    }
				    else {
					    matrix[k][l] += num * matrix[i][l];
				    }
			    }
		    }
	    }
	    return matrix;
    }
