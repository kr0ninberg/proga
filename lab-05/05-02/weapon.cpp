#include "weapon.h"
#include <iostream>
#include <string>

Characteristic::Characteristic(int strenght) : strenght(strenght) {}

int Characteristic::GetDamage(Weapon& a) {
	return a.strength + this->strenght;
}

std::string Weapon::get_name() const {
	return name;
}

int Weapon::get_strength() const {
	return strength;
}

int Weapon::get_weight() const {
	return weight;
}

WeaponEnum Weapon::get_enum() const {
	return some_val;
}

void Weapon::set_name(std::string name) {
	this->name = name;
	return;
}

void Weapon::set_strength(int strength) {
	this->strength = strength;
	return;
}

void Weapon::set_weight(int weight) {
	this->weight = weight;
	return;
}


Weapon::Weapon(std::string name, int strength, int weight, WeaponEnum val) : some_val(val) {
	set_name(name);
	set_strength(strength);
	set_weight(weight);
}
Weapon::Weapon() : Weapon("knife", 1, 1, WeaponEnum::ONEHANDED) {}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called\n";
	describe();
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

void Weapon::describe() {
	std::cout << "\tname: " << name << '\n';
	std::cout << "\tstrength: " << strength << '\n';
	std::cout << "\tweight: " << weight << '\n';
	if (some_val == WeaponEnum::ONEHANDED) std::cout << "\tEnum: ONEHANDED \n";
	else if (some_val == WeaponEnum::TWOHANDED) std::cout << "\tEnum: TWOHANDED \n";
	else if (some_val == WeaponEnum::BOW) std::cout << "\tEnum: BOW \n";
	else if (some_val == WeaponEnum::CROSSBOW) std::cout << "\tEnum: CROSSBOW \n";
	return;
}