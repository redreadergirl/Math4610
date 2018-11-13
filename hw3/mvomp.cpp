#include <omp.h>
#include "mylib.h"

using namespace std;

vector<double> mvomp(vector<vector<double>> matrix, vector<double> vec) {
	vector<double> product;
	int i;
#pragma omp parallel shared(matrix, vec, product) private(i)
	{
#pragma omp for
		for (i = 0; i < vec.size(); i++) {
			product[i] = dotProduct(matrix[i], vec);
		}
	}
	return product;
}
