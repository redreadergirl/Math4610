**Routine Name:**       scalarVector

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will multiply a scalar with a vector

**Input:** 
        
        x = the vector
        scalar = the scalar
        
        
**Output:** The function will output the product as a vector of doubles

**Usage/Example:**

        scalarVector({1, 2, 3}, 3)
       
Output from the lines above:

        {3, 6, 9}
  
**Implementation/Code:** The following is the code for scalarVector()

    vector<double> scalarVector(vector<double> x, double scalar) {
	    vector<double> newVec;
	    for (double num : x) {
		    newVec.push_back(num * scalar);
	    }
	    return newVec;
    }
