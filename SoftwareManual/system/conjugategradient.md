**Routine Name:** conjugateGradient

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will solve a linear system of equations using conjugate gradient method

**Input:**

	A = the matrix formed from the system of equations
	b = the vector b from Ax = b
	
**Output:** The function will output the x vector as a vector of doubles

**Usage/Example:**

	vector<vector<double>> matrix = testMatrix(3);
	conjugateGradient(matrix, testVector(vector));

Output from the lines above:

	{1, 1, 1}
    
**Implementation/Code:** The following is the code for conjugateGradient()

    vector<double> conjugateGradient(vector<vector<double>> A, vector<double> b) {
	    double tol = .0001;
	    int maxiter = 750;
	    int iter = 0;
	    vector<double> u(A.size(), 0);
	    vector<double> r = vectorSubtraction(b, matrixMultVec(A, u));
	    vector<double> p = r;
	    vector<double> w;
	    while (iter < maxiter) {
		    w = matrixMultVec(A, p);
		    double alpha = vecTransposeVec(r, r) / vecTransposeVec(p, w);
		    vector<double> uTemp = vectorAddition(u, scalarVector(p, alpha));
		    vector<double> rTemp = vectorSubtraction(r, scalarVector(w, alpha));
		    if (tnorm(r, r.size()) < tol) return u;
		    double beta = vecTransposeVec(rTemp, rTemp) / vecTransposeVec(r, r);
		    p = vectorAddition(scalarVector(p, beta), rTemp);
		    u = uTemp;
		    r = rTemp;
	    }
	    return u;
    }
