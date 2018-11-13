**Routine Name:**       determinant

**Author:** Claire Romney

**Language:** C++

**Description/Purpose:** This function will compute the determinant of a matrix

**Input:** 
        
        matrix = the matrix to compute the determinant of
        
        
**Output:** The function will output the determinant of the matrix

**Usage/Example:**

        determinant({{2, 6, 2}, {4, 7, 3}, {3, -2, -5}})
       
Output from the lines above:

        58
  
**Implementation/Code:** The following is the code for determinant()

    double determinant(vector<vector<double>> matrix) {
	    if (matrix.size() == 2) {
		    return ((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]));
	    }

	    double sum = 0;
	    for (int i = 0; i < matrix.size(); i++) {
		    vector<vector<double>> modified;
		    for (vector<double> row : matrix) {
			    vector<double> vec = row;
			    vec.erase(vec.begin() + i);
			    modified.push_back(vec);
		    }
		    modified.erase(modified.begin());
		    if (i % 2 == 0) {
			    sum += (matrix[0][i] * determinant(modified));
		    }
		    else {
			    sum -= (matrix[0][i] * determinant(modified));
		    }
	    }
	    return sum;
    }
