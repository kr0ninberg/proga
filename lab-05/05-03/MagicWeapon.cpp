#include "MagicWeapon.h"
#include <iostream>
#include <string>

int MagicWeapon::get_strength() const {
	return this->magic_strength + this->Weapon::get_strength();
}

int MagicWeapon::get_magic_strength() const {
	return magic_strength;
}

void MagicWeapon::set_magic_strength(int magic_strength){
	this->magic_strength = magic_strength;
	return;
}

MagicWeapon::MagicWeapon(std::string name, int strength, int weight, WeaponEnum val, int magic_strength) :
	Weapon(name, strength, weight, val) {
	set_magic_strength(magic_strength);
}
MagicWeapon::MagicWeapon() : MagicWeapon("knife", 1, 1, WeaponEnum::ONEHANDED, 1) {}

bool MagicWeapon::operator>(Weapon& a) const {
	return get_strength() > a.get_strength();
}
bool MagicWeapon::operator<(Weapon& a) const {
	return get_strength() < a.get_strength();
}

void MagicWeapon::Attack() {
	std::cout << "Атакуем магическим оружием\n";
	return;
}

void MagicWeapon::describe() {
	std::cout << "MagicWeapon descripton\n";
	Weapon::describe();
	std::cout << "\tmagic strength: " << this->get_magic_strength() << '\n';
}