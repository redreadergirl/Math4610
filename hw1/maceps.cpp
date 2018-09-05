#include <iostream>

using namespace std;

float maceps() {
	float num = 1;
	while (num + 1 != 1) {
		num /= 2;
	}
	return num;
}

int main() {
	cout << maceps();
	return 0;
}
