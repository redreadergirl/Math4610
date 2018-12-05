**Routine Name:** steepestDescent

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will solve a linear system of equations using Steepest Descent method

**Input:**

	A = the matrix formed from the system of equations
	b = the vector b from Ax = b
	
**Output:** The function will output the x vector as a vector of doubles

**Usage/Example:**

	vector<vector<double>> matrix = testMatrix(3);
	steepestDescent(matrix, testVector(vector));

Output from the lines above:

	{1.00008, .99997, .999967}
    
**Implementation/Code:** The following is the code for steepestDescent()

    vector<double> steepestDescent(vector<vector<double>> A, vector<double> b) {
	    double tol = .0001;
	    double error = tol * 10;
	    int maxiter = 730;
	    int iter = 0;
	    vector<double> x(A.size(), 0);
	    vector<double> r;
	    vector<double> temp;
	    double a;
	    while (tol < error && iter < maxiter) {
		    iter++;
		    r = vectorSubtraction(b, matrixMultVec(A, x));
		    a = vecTransposeVec(r, r) / vecTransposeVec(r, matrixMultVec(A, r));
		    temp = vectorAddition(x, scalarVector(r, a));
		    vector<double> errorVec = vectorSubtraction(temp, x);
		    error = tnorm(errorVec, errorVec.size());
		    x = temp;
	    }
	    return x;
    }

    double vecTransposeVec(vector<double> a, vector<double> b) {
	    double sum = 0;
	    for (int i = 0; i < a.size(); i++) {
		    sum += a[i] * b[i];
	    }
	    return sum;
    }
