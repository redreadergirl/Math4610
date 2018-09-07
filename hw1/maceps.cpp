#include "mylib.h"

float maceps() {
	float num = 1;
	while (num + 1 != 1) {
		num /= 2;
	}
	return num;
}
