#include <iostream>

using namespace std;

double dmaceps() {
	double num = 1.0;
	while (num + 1.0 != 1.0) {
		num /= 2;
	}
	return num;
}

int main() {
	cout << dmaceps();
	return 0;
}
