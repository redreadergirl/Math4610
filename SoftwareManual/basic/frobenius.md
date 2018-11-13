**Routine Name:**       forbenius

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the frobenius norm of a matrix

**Input:** 
        
        matrix = the matrix of which the norm is calculated
        
        
**Output:** The function will output the norm as a double

**Usage/Example:**

        frobenius({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}})
       
Output from the lines above:

        12.49
  
**Implementation/Code:** The following is the code for frobenius()

    double frobenius(vector<vector<double>> matrix) {
	    double norm = 0;
	    for (vector<double> vec : matrix) {
		    for (double value : vec) {
			    norm += (value * value);
		    }
	    }
	    return sqrt(norm);
    }
