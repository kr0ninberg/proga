#include <iostream>
#include <string>
#include "weapon.h"



int main() {
	Weapon first;
	std::cout << first.name << ' ' << first.strength << ' ' << first.weight << '\n';
	Weapon* second = new Weapon("rifle", 4, 3);
	std::cout << second->name << ' ' << second->strength << ' ' << second->weight << '\n';

	std::cout << first.weight_check(2) << '\n';
	std::cout << second->weight_check(2) << '\n';
	std::cout << first.sum_weight(*second) << '\n';
	std::cout << first.sum_weight(5) << '\n';
	delete second;
	return 0;
}