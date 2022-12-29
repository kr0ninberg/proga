#include <iostream>
#include <string>
#include "weapon.h"

class MyMath {
public:
	static int count;
	static double Add(double a, double b) {
		++count;
		return a + b;
	}
	static double Sub(double a, double b) {
		++count;
		return a - b;
	}
	static double Mult(double a, double b) {
		++count;
		return a * b;
	}
	static double Div(double a, double b) {
		++count;
		return a / b;
	}
};

int MyMath::count = 0;

int main() {
	Weapon first;
	std::cout << first.get_name() << ' ' << first.get_strength() 
		<< ' ' << first.get_weight() << '\n';
	first.set_name("winchester");
	first.set_strength(9);
	first.set_weight(9);
	std::cout << first.get_name() << ' ' << first.get_strength()
		<< ' ' << first.get_weight() << '\n';

	Characteristic a;
	std::cout << a.GetDamage(first) << "\n";

	std::cout << MyMath::Add(8, 2) << std::endl;
	std::cout << MyMath::Sub(8, 2) << std::endl;
	std::cout << MyMath::Mult(8, 2) << std::endl;
	std::cout << MyMath::Div(8, 2) << std::endl;
	std::cout << MyMath::count << std::endl;
	return 0;
}