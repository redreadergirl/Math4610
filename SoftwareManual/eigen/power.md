**Routine Name:** power

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the largest eigenvalue of a matrix using the power method

**Input:**

	matrix = the matrix to compute the eigenvalue of
	
**Output:** The function will output the largest eigenvalue as a double

**Usage/Example:**

    matrix = testMatrix(3)  (returned: {{1.835, .835, .969}, {.835, 1.835, .308}, {.969, .308, 1.969}})
    power(matrix)

Output from the lines above:

	3.31907
    
**Implementation/Code:** The following is the code for power()

    double power(vector<vector<double>> matrix) {
	    vector<double> v(matrix.size(), 1);
	    double tol = .001;
	    int maxiter = 50;
	    double error = 10 * tol;
	    int iter = 0;
	    v = scalarVector(v, 1 / tnorm(v, v.size()));
	    double lambdaMax = 0.0;
	    while (error > tol && iter < maxiter) {
		    iter++;
		    vector<double> u = matrixMultVec(matrix, v);
		    vector<double> y = u;
		    u = scalarVector(u, 1 / tnorm(u, u.size()));
		    double lambda = vecTransposeVec(u, y);
		    error = abs(lambda - lambdaMax);
		    lambdaMax = lambda;
		    v = u;
	    }
	    return lambdaMax;
    }
