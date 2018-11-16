**Routine Name:**       luFactorization

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform LU Factorization on a square matrix

**Input:** 
        
        matrix = square matrix

**Output:** The function will output a vector containing L, U, and a pivot matrix, all as vectors of vectors of doubles

**Usage/Example:**

        luFactorization({{0, 5, 5}, {2, 9, 0}, {6, 8, 8}})
       
Output from the lines above:

        { {{1,0,0},{.333333,1,0},{0,.789474,1}}, {{6,8,8},{0,6.33333,-2.66667},{0,0,7.10526}}, {{0,0,1},{0,1,0},{1,0,0}} }
  
**Implementation/Code:** The following is the code for luFactorization()


    vector<vector<vector<double>>> luFactorization(vector<vector<double>> matrix) {
	    int n = matrix.size();
	    vector<vector<double>> pivot;
	    for (int i = 0; i < n; i++) {
		    vector<double> row;
		    for (int j = 0; j < n; j++) {
			    if (i == j) {
				    row.push_back(1);
			    }
			    else {
				    row.push_back(0);
			    }
		    }
		    pivot.push_back(row);
	    }
      
	    for (int i = 0; i < n; i++) {
		    double max = matrix[i][i];
		    int maxRow = i;
		    for (int j = i; j < n; j++) {
			    if (matrix[j][i] > max) {
				    max = matrix[j][i];
				    maxRow = j;
			    }
		    }
		    if (i != maxRow) {
			    vector<double> temp = pivot[i];
			    pivot[i] = pivot[maxRow];
			    pivot[maxRow] = temp;
		    }
	    }
      
	    vector<double> zeroVec(n, 0);
	    vector<vector<double>> L(n, zeroVec);
	    vector<vector<double>> U = L;
	    matrix = matrixMultiplication(pivot, matrix);
      
	    for (int j = 0; j < n; j++) {
		    L[j][j] = 1;
		    for (int i = 0; i < j + 1; i++) {
			    double sum1 = 0;
			    for (int k = 0; k < i; k++) {
				    sum1 += U[k][j] * L[i][k];
			    }
			    U[i][j] = matrix[i][j] - sum1;
		    }
		    for (int i = j; i < n; i++) {
			    double sum2 = 0;
			    for (int k = 0; k < j; k++) {
				    sum2 += U[k][j] * L[i][k];
			    }
			    L[i][j] = (matrix[i][j] - sum2) / U[j][j];
		    }
	    }
	    return { L, U, pivot };
    }
