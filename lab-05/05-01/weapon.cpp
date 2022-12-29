#include "weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon(std::string name, int strength, int weight, WeaponEnum val) : 
	name(name), 
	strength(strength), 
	weight(weight), 
	some_val(val){}

Weapon::Weapon() : Weapon("knife", 1, 1, WeaponEnum::ONEHANDED) {}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called\n";
	describe();
}

// task 04-04
bool Weapon::weight_check(int max_weight = 1) {
	if (max_weight < weight) return true;
	return false;
}

int Weapon::sum_weight(Weapon& a) {
	return sum_weight(a.weight);
}

int Weapon::sum_weight(int weight) {
	return this->weight + weight;
}
//

void Weapon::describe() {
	std::cout << "\tname: " << name << '\n';
	std::cout << "\tstrength: " << strength << '\n';
	std::cout << "\tweight: " << weight << '\n';
	return;
}