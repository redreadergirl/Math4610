**Routine Name:** conjugateGradientOMP

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will solve a linear system of equations using conjugate gradient method with OpenMP

**Input:**

	A = the matrix formed from the system of equations
	b = the vector b from Ax = b
	
**Output:** The function will output the x vector as a vector of doubles

**Usage/Example:**

	vector<vector<double>> matrix = testMatrix(3);
	conjugateGradientOMP(matrix, testVector(vector));

Output from the lines above:

	{1, 1, 1}
    
**Implementation/Code:** The following is the code for conjugateGradientOMP()

    double vecTransposeVecOMP(vector<double> a, vector<double> b) {
	    double sum = 0;
	    int i;
    #pragma omp parallel shared(a, b) private(i) 
	    {
    #pragma omp for
		    for (i = 0; i < a.size(); i++) {
			    sum += a[i] * b[i];
		    }
	    }
	    return sum;
    }

    vector<double> conjugateGradientOMP(vector<vector<double>> A, vector<double> b) {
	    double tol = .0001;
	    int maxiter = 750;
	    int iter = 0;
	    vector<double> u(A.size(), 0);
	    vector<double> r = vectorSubtraction(b, mvomp(A, u));
	    vector<double> p = r;
	    vector<double> w;
	    while (iter < maxiter) {
		    w = mvomp(A, p);
		    double alpha = vecTransposeVecOMP(r, r) / vecTransposeVecOMP(p, w);
		    vector<double> uTemp = vectorAddition(u, scalarVector(p, alpha));
		    vector<double> rTemp = vectorSubtraction(r, scalarVector(w, alpha));
		    if (tnorm(r, r.size()) < tol) return u;
		    double beta = vecTransposeVecOMP(rTemp, rTemp) / vecTransposeVecOMP(r, r);
		    p = vectorAddition(scalarVector(p, beta), rTemp);
		    u = uTemp;
		    r = rTemp;
	    }
	    return u;
    }
