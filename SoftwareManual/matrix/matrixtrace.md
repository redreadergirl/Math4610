**Routine Name:**       matrixTrace

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the trace of a matrix

**Input:** 
        
        x = the matrix
        
        
**Output:** The function will output the trace as a double

**Usage/Example:**

        matrixTrace({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}})
       
Output from the lines above:

        4
  
**Implementation/Code:** The following is the code for matrixTrace()

    double matrixTrace(vector<vector<double>> x) {
	    double trace = 0;
	    for (int i = 0; i < x.size(); i++) {
		    trace += x[i][i];
	    }
	    return trace;
    }
