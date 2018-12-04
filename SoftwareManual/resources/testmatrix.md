**Routine Name:** testMatrix

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will create a symmetric, diagonally dominant matrix with uniformly distributed numbers to test routines

**Input:**

	n = the size of the desired matrix
	
**Output:** The function will output the matrix as a vector of vectors of doubles

**Usage/Example:**

	testMatrix(4)

Output from the lines above:

	{{3.02491, .835009, .968868, .221034}, {.835009, 1.83501, .547221, .188382}, {.968868, .547221, 2.51609, .996461}, {.221034, .188382, .996461, 2.40588}}
    
**Implementation/Code:** The following is the code for testMatrix()

    vector<vector<double>> testMatrix(double n) {
	    default_random_engine generator;
	    uniform_real_distribution<double> distribution(0, 1);

	    vector<double> vec(n, 0);
	    vector<vector<double>> matrix(n, vec);
	    for (int i = 0; i < n; i++) {
		    for (int j = i; j < n; j++) {
			    matrix[i][j] = distribution(generator);
		    }
	    }

	    for (int i = 1; i < n; i++) {
		    for (int j = 0; j < i; j++) {
			    matrix[i][j] = matrix[j][i];
		    }
	    }

	    for (int i = 0; i < n; i++) {
		    double sum = 0;
		    for (int j = 0; j < n; j++) {
			    if (j != i) {
				    sum += fabs(matrix[i][j]);
			    }
			    if (fabs(matrix[i][i]) < sum) {
				    matrix[i][i] = sum + 1;
			    }
		    }
	    }

	    return matrix;
    }
