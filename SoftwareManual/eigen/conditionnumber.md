**Routine Name:** conditionNumber

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the 2-condition number of a matrix

**Input:**

	matrix = the matrix to compute the condition number of
	
**Output:** The function will output the condition number as a double

**Usage/Example:**

    matrix = testMatrix(3)  (returned: {{1.835, .835, .969}, {.835, 1.835, .308}, {.969, .308, 1.969}})
    conditionNumber(matrix)

Output from the lines above:

	4.5313
    
**Implementation/Code:** The following is the code for conditionNumber()

    double conditionNumber(vector<vector<double>> matrix) {
	    double max = power(matrix);
	    double min = inversePower(matrix);
	    return fabs(max) / fabs(min);
    }
