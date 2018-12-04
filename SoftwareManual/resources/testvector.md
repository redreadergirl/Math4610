**Routine Name:** testVector

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will create vector of solutions for testing a routine

**Input:**

	matrix = the matrix to form a solution for
	
**Output:** The function will output the test vector as a vector of doubles

**Usage/Example:**

	testVector(testMatrix(3))

Output from the lines above:

	{3.63888, 2.97818, 3.2459}
    
**Implementation/Code:** The following is the code for testVector()

    vector<double> testVector(vector<vector<double>> matrix) {
	    vector<double> vec(matrix.size(), 1);
	    return matrixMultVec(matrix, vec);
    }
