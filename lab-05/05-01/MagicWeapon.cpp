#include "MagicWeapon.h"
#include <iostream>
#include <string>

int MagicWeapon::get_magic_strength() {
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