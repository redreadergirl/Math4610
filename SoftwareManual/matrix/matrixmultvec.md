**Routine Name:**       matrixMultVec

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute product of a matrix and a vector

**Input:** 
        
        A = the matrix
        x = the vector
        
        
**Output:** The function will output the product as a vector of doubles

**Usage/Example:**

        matrixMultVec({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}}, {1, 4, -2})
       
Output from the lines above:

        {22, 26, 5}
  
**Implementation/Code:** The following is the code for matrixMultVec()

    vector<double> matrixMultVec(vector<vector<double>> A, vector<double> x) {
	    vector<double> b;
	    for (vector<double> row : A) {
		    b.push_back(dotProduct(row, x));
	    }
	    return b;
    }
