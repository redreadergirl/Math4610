**Routine Name:**       orthonormal

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute an orthonormal basis from a general basis of two vectors

**Input:** 
        
        v1 = the first vector
        v2 = the second vector
        
        
**Output:** The function will output a pair containing two vectors of doubles

**Usage/Example:**

        orthonormal({1, 0, 1, 1}, {0, 1, 1, 1})
       
Output from the lines above:

        <{.57735, 0, .57735, .57735}, {-.516398, .774597, .258199, .258199}>
  
**Implementation/Code:** The following is the code for orthonormal()

    pair<vector<double>, vector<double>> orthonormal(vector<double> v1, vector<double> v2) {
	    vector<double> u1 = v1;
	    double scalar = (dotProduct(v2, u1) / dotProduct(u1, u1));
	    vector<double> projection = scalarVector(u1, scalar);
	    vector<double> u2 = vectorSubtraction(v2, projection);
	    u1 = scalarVector(u1, (1 / tnorm(u1, u1.size())));
	    u2 = scalarVector(u2, (1 / tnorm(u2, u2.size())));

	    pair<vector<double>, vector<double>> basis(u1, u2);
	    return basis;
    }
