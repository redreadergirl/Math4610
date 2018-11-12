**Routine Name:**       dotProduct

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the inner product/dot product of 2 vector

**Input:** 
        
        x = the first vector
        y = the second vector
        
        
**Output:** The function will output the product as a double

**Usage/Example:**

        dotProduct({1, 2, 3}, {3, 2, 6})
       
Output from the lines above:

        25
  
**Implementation/Code:** The following is the code for dotProduct()

    double dotProduct(vector<double> x, vector<double> y) {
	    if (x.size() != y.size()) {
		    throw exception();
	    }

	    double product = 0;

	    for (int i = 0; i < x.size(); i++) {
		    product += (x[i] * y[i]);
	    }

	    return product;
    }
