**Routine Name:**       luSolution

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will calculate the solution to a system of equations using LU Factorization

**Input:** 
        
        A = upper triangular matrix
        b = the vector b in Ax=b

**Output:** The function will output the solution as a vector of doubles

**Usage/Example:**

        luSolution({{-2, 1, -4}, {0, -9, 2}, {2, 4, 3}}, {1, -3, 2})
       
Output from the lines above:

        {-23, 3, 12}
  
**Implementation/Code:** The following is the code for luSolution()

    vector<double> luSolution(vector<vector<double>> A, vector<double> b) {
	    vector<vector<vector<double>>> matrices = luFactorization(A);
	    b = matrixMultVec(matrices[2], b);
	    vector<double> d = forwardSub(matrices[0], b);
	    return backSub(matrices[1], d);
    }
