**Routine Name:**       choleskySolution

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will calculate the solution to a system of equations using cholesky decomposition

**Input:** 
        
        A = symmetric matrix
        b = the vector b in Ax=b

**Output:** The function will output the solution as a vector of doubles

**Usage/Example:**

        choleskySolution({ {25, 15, -5}, {15, 18, 0}, {-5, 0, 11} }, { 7, -3, 5 })
       
Output from the lines above:

        {1.15111, -1.12593, 0.97778}
  
**Implementation/Code:** The following is the code for choleskySolution()

    vector<double> choleskySolution(vector<vector<double>> A, vector<double> b) {
	    vector<vector<double>> L = cholesky(A);
	    vector<double> d = forwardSub(L, b);
	    return backSub(matrixTranspose(L), d);
    }
