**Routine Name:** jacobiOMP

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will solve a linear system of equations with jacobi iteration using OpenMP

**Input:**

	A = the matrix formed from the system of equations
  b = the vector b from Ax = b
	
**Output:** The function will output the x vector as a vector of doubles

**Usage/Example:**

	vector<vector<double>> matrix = testMatrix(3);
  jacobi(matrix, testVector(vector));

Output from the lines above:

	{1.00002, 1.00002, 1.00002}
    
**Implementation/Code:** The following is the code for jacobi()

    vector<double> jacobi(vector<vector<double>> A, vector<double> b) {
	    vector<double> x(A.size(), 0);
	    double tol = .0001;
	    double error = 10 * tol;
	    int maxiter = 750; int iter = 0;
	    vector<double> temp(A.size(), 0);
	    while (error > tol && iter < maxiter) {
		    iter++;
		    int i, j;
    #pragma omp parallel shared(A, x, b, temp) private(i, j)
		    {
    #pragma omp for
			    for (i = 0; i < A.size(); i++) {
				    double sigma = 0;
				    for (j = 0; j < A.size(); j++) {
					    if (i != j) {
						    sigma += (A[i][j] * x[j]);
					    }
				    }
				    temp[i] = (1 / A[i][i]) * (b[i] - sigma);
			    }
		    }
		    vector<double> errorVec = vectorSubtraction(temp, x);
		    error = tnorm(errorVec, errorVec.size());
		    x = temp;
	    }
	    return x;
    }
