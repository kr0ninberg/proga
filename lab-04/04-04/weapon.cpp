#include "weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon(std::string name, int strength, int weight) : name(name), strength(strength), weight(weight) {}
Weapon::Weapon() : Weapon("knife", 1, 1) {}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called\n";
	std::cout << name << " " << strength << " " << weight << "\n";
}

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