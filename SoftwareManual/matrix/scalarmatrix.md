**Routine Name:**       scalarMatrix

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute product of a matrix and a scalar

**Input:** 
        
        matrix = the matrix
        scalar = the scalar
        
**Output:** The function will output the product as a vector of vectors of doubles

**Usage/Example:**

        scalarMatrix({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}}, 3)
       
Output from the lines above:

        {{6, 18, 6}, {12, 21, 9}, {9, -6, -15}}
  
**Implementation/Code:** The following is the code for scalarMatrix()

    vector<vector<double>> scalarMatrix(vector<vector<double>> matrix, double scalar) {
	    vector<vector<double>> product;
	    for (vector<double> row : matrix) {
		    vector<double> newRow;
		    for (double unit : row) {
			    newRow.push_back(unit * scalar);
		    }
		    product.push_back(newRow);
	    }
	    return product;
    }
