**Routine Name:**       crossProduct

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the cross product of two vectors of size 3

**Input:** 
        
        x = the first vector
        y = the second vector
        
        
**Output:** The function will output the product as a vector of doubles

**Usage/Example:**

        crossProduct({1, 2, 3}, {3, 2, 6})
       
Output from the lines above:

        {6, 3, -4}
  
**Implementation/Code:** The following is the code for dotProduct()

    vector<double> crossProduct(vector<double> x, vector<double> y) {
	    vector<double> product;
	    product.push_back((x[1] * y[2]) - (x[2] * y[1]));
	    product.push_back((x[2] * y[0]) - (x[0] * y[2]));
	    product.push_back((x[0] * y[1]) - (y[0] * x[1]));
	    return product;
    }
