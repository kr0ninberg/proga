#pragma once
#include <iostream>
#include <string>
#include "weapon.h"

class MagicWeapon : public Weapon{
private:
	int magic_strength;
public:
	int get_magic_strength();
	void set_magic_strength(int);

	MagicWeapon(std::string name, int strength, int weight, WeaponEnum val, int magic_strength);
	MagicWeapon();
};

