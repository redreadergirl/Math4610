**Routine Name:**       kronecker

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the kronecker product of 2 matrices

**Input:** 
        
        a = the first matrix
        b = the second matrix
        
        
**Output:** The function will output the product as a vector of vectors of doubles

**Usage/Example:**

        kronecker({{1, 3}, {-2, 4}}, {{5, 9}, {0, -3}})
       
Output from the lines above:

        {{5, 9, 15, 27}, {0, -3, 0, -9}, {-10, -18, 20, 36}, {0, 6, 0, -12}}
  
**Implementation/Code:** The following is the code for kronecker()

    vector<vector<double>> kronecker(vector<vector<double>> a, vector<vector<double>> b) {
	    vector<vector<double>> product;
	    for (int arow = 0; arow < a.size(); arow++) {
		    for (int brow = 0; brow < b.size(); brow++) {
			    vector<double> row;
			    for (int acol = 0; acol < a[0].size(); acol++) {
				    for (int bcol = 0; bcol < b[0].size(); bcol++) {
					    row.push_back(a[arow][acol] * b[brow][bcol]);
				    }
			    }
			    product.push_back(row);
		    }
	    }
	    return product;
    }
