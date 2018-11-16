**Routine Name:**       forwardSub

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform forward substitution on a square lower triangular matrix.

**Input:** 
        
        A = lower triangular matrix
        b = the vector b in Ax=b

**Output:** The function will output x as a vector of doubles

**Usage/Example:**

        forwardSub({{1, 0, 0}, {2, -9, 0}, {-4, 1, -2}}, {2, -3, 1})
       
Output from the lines above:

        {2, .777778, -4.11111}
  
**Implementation/Code:** The following is the code for forwardSub()


    vector<double> forwardSub(vector<vector<double>> A, vector<double> b) {
	    vector<double> x;
	    for (int i = 0; i < b.size(); i++) {
		    double sum = 0;
		    for (int j = 0; j <= i; j++) {
			    if (j != i) {
				    sum += (A[i][j] * x[j]);
			    }
			    else {
				    double xVal = (b[i] - sum) / A[i][j];
				    x.push_back(xVal);
			    }
		    }
	    }
	    return x;
    }
