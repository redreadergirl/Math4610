**Routine Name:**       matrixTranpose

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the transpose of a matrix

**Input:** 
        
        x = the matrix
        
        
**Output:** The function will output the transpose as a vector of vectors of doubles

**Usage/Example:**

        matrixTranspose({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}})
       
Output from the lines above:

        {{2, 4, 3}, {6, 7, -2}, {2, 3, -5}}
  
**Implementation/Code:** The following is the code for matrixTranspose()

    vector<vector<double>> matrixTranspose(vector<vector<double>> x) {
	    vector<vector<double>> transpose;
	    for (int col = 0; col < x[0].size(); col++) {
		    vector<double> newRow;
		    for (int row = 0; row < x.size(); row++) {
			    newRow.push_back(x[row][col]);
		    }
		    transpose.push_back(newRow);
	    }
	    return transpose;
    }
