**Routine Name:**       matrixMultiplication

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the product of two matrices.

**Input:** 
        
        x = the first matrix
        y = the second matrix
        
        
**Output:** The function will output the product as vector of vectors of doubles

**Usage/Example:**

        matrixMultiplication({{1, 2, 3}, {3, 7, 5}}, {{4, 6}, {4, 2}, {9, -4}})
       
Output from the lines above:

        {{39, -2}, {85, 12}}
  
**Implementation/Code:** The following is the code for matrixMultiplication()

    vector<vector<double>> matrixMultiplication(vector<vector<double>> x, vector<vector<double>> y) {
	    vector<vector<double>> product;
	    for (int xrow = 0; xrow < x.size(); xrow++) {
		    vector<double> newRow;
		    for (int ycol = 0; ycol < y[0].size(); ycol++) {
			    double newValue = 0;
			    for (int unit = 0; unit < x[0].size(); unit++) {
				    newValue += (x[xrow][unit] * y[unit][ycol]);
			    }
			    newRow.push_back(newValue);
		    }
		    product.push_back(newRow);
	    }
	    return product;
    }
