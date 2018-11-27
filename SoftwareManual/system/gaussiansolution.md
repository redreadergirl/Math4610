**Routine Name:**       gaussianSolution

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will calculate the solution to a system of equations using Gaussian Elimination

**Input:** 
        
        A = a matrix
        b = the vector b in Ax=b

**Output:** The function will output the solution as a vector of doubles

**Usage/Example:**

        gaussianSolution({{-2, 1, -4}, {0, -9, 2}, {2, 4, 3}}, {1, -3, 2})
       
Output from the lines above:

        {-23, 3, 12}
  
**Implementation/Code:** The following is the code for gaussianSolution()


    vector<double> gaussianSolution(vector<vector<double>> A, vector<double> b) {
	    for (int i = 0; i < b.size(); i++) {
		    A[i].push_back(b[i]);
	    }

	    A = rectGauss(A);
	    for (int i = 0; i < b.size(); i++) {
		    b[i] = A[i][b.size()];
		    A[i].erase(A[i].begin() + b.size());
	    }

	    return backSub(A, b);
    }
