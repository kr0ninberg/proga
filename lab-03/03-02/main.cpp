#include <iostream>

int func(int* p1, int* p2) {
	int sum = 0;
	while (p1 != p2) {
		sum += *p1;
		p1++;
	}
	sum += *p1;
	return sum;
}

int sum_1(int a, int b) {
	return a + b;
}

int dif_1(int a, int b) {
	return a - b;
}

int (*function(char a))(int , int) {
	if (a == '+') return sum_1;
	return dif_1;
}

int main() {
	int list1[5] = { 2 , 4 , 6 , 8 , 0 };
	std::cout << func(list1, list1 + 4) << '\n';
	int (*fp)(int , int);
	fp = function('+');
	std::cout << fp(1 , 1) << '\n';
	fp = function('-');
	std::cout << fp(1, 1) << '\n';
	float* var = new float();
	*var = 5;
	delete var;
	return 0;
}