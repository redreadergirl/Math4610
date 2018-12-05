**Routine Name:** gaussSeidelOMP

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will solve a linear system of equations using Gauss-Seidel method with OpenMP

**Input:**

	A = the matrix formed from the system of equations
	b = the vector b from Ax = b
	
**Output:** The function will output the x vector as a vector of doubles

**Usage/Example:**

	vector<vector<double>> matrix = testMatrix(3);
	gaussSeidelOMP(matrix, testVector(vector));

Output from the lines above:

	{1.00003, .999994, .999988}
    
**Implementation/Code:** The following is the code for gaussSeidelOMP()

    vector<double> gaussSeidel(vector<vector<double>> A, vector<double> b) {
	    vector<double> x(A.size(), 0);
	    double tol = .0001;
	    double error = 10 * tol;
	    int maxiter = 750;
	    int iter = 0;
	    vector<double> temp(A.size(), 0);
	    while (error > tol && iter < maxiter) {
		    iter++;
		    int i;
		    int j;
    #pragma omp parallel shared(A, temp, x, b) private(i, j)
		    {
    #pragma for
			    for (i = 0; i < A.size(); i++) {
				    double sigma1 = 0;
				    double sigma2 = 0;
				    for (j = 0; j < A.size(); j++) {
					    if (j < i) {
						    sigma1 += A[i][j] * temp[j];
					    }
					    if (j > i) {
						    sigma2 += A[i][j] * x[j];
					    }
				    }
				    temp[i] = (b[i] - sigma1 - sigma2) / A[i][i];
			    }
		    }
		    vector<double> errorVec = vectorSubtraction(temp, x);
		    error = tnorm(errorVec, errorVec.size());
		    x = temp;
	    }
	    return x;
    }
