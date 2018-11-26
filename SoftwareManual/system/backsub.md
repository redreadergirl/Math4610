**Routine Name:**       backSub

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will perform back substitution on a square upper triangular matrix.

**Input:** 
        
        A = upper triangular matrix
        b = the vector b in Ax=b

**Output:** The function will output x as a vector of doubles

**Usage/Example:**

        backSub({{-2, 1, -4}, {0, -9, 2}, {0, 0, 1}}, {1, -3, 2})
       
Output from the lines above:

        {-4.11111, .777778, 2}
  
**Implementation/Code:** The following is the code for backSub()


    vector<double> backSub(vector<vector<double>> A, vector<double> b) {
	    vector<double> x;
	    for (int i = b.size() - 1; i >= 0; i--) {
		    double sum = 0;
		    for (int j = b.size() - 1; j >= i; j--) {
			    if (j != i) {
				    sum += A[i][j] * x[j];
			    }
			    else {
				    double xVal = (b[i] - sum) / A[i][j];
				    x[i] = xVal;
			    }
		    }
	    }
	    return x;
    }
