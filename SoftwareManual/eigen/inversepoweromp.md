**Routine Name:** inversePowerOMP

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the smallest eigenvalue of a matrix using the inverse power method with OpenMP

**Input:**

	matrix = the matrix to compute the eigenvalue of
	
**Output:** The function will output the smallest eigenvalue as a double

**Usage/Example:**

    matrix = testMatrix(3)  (returned: {{1.835, .835, .969}, {.835, 1.835, .308}, {.969, .308, 1.969}})
    inversePowerOMP(matrix)

Output from the lines above:

	.732476
    
**Implementation/Code:** The following is the code for inversePowerOMP()

    double inversePower(vector<vector<double>> matrix) {
	    vector<double> v(matrix.size(), 1);
	    v = scalarVector(v, 1 / tnorm(v, v.size()));
	    int maxiter = 750;
	    int iter = 0;
	    double tol = .001;
	    double error = tol * 10;
	    double lambdaMin = 0.0;
	    while (error > tol && iter < maxiter) {
		    iter++;
		    vector<double> u = luSolutionOMP(matrix, v);
		    vector<double> y = u;
		    u = scalarVector(u, 1 / tnorm(u, u.size()));
		    double lambda = vecTransposeVecOMP(u, y);
		    error = fabs(lambda - lambdaMin);
		    lambdaMin = lambda;
		    v = u;
	    }
	    return 1 / lambdaMin;
    }

    vector<double> luSolutionOMP(vector<vector<double>> A, vector<double> b) {
	    vector<vector<vector<double>>> matrices = luFactorization(A);
	    b = mvomp(matrices[2], b);
	    vector<double> d = forwardSub(matrices[0], b);
	    return backSub(matrices[1], d);
    }
