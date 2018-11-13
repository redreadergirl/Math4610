#include <omp.h>
#include "mylib.h"

using namespace std;

vector<vector<double>> mmomp(vector<vector<double>> a, vector<vector<double>> b) {
	vector<vector<double>> product;
	int i;
#pragma omp parallel shared(matrix, vec, product) private(i)
	{
#pragma omp for
		for (i = 0; i < a.size(); i++) {
			vector<double> row;
			for (int j = 0; j < b[0].size(); j++) {
				double value = 0;
				for (int k = 0; k < a[0].size(); k++) {
					value += (a[i][k] * b[k][j]);
				}
				row.push_back(value);
			}
			product[i] = row;
		}
	}
	return product;
}
