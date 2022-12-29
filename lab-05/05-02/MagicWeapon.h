#pragma once
#include <iostream>
#include <string>
#include "weapon.h"

class MagicWeapon : public Weapon{
private:
	int magic_strength;
public:
	int get_strength() const override;
	int get_magic_strength() const;
	void set_magic_strength(int);

	MagicWeapon(std::string name, int strength, int weight, WeaponEnum val, int magic_strength);
	MagicWeapon();

	bool operator>(Weapon& a) const;
	bool operator<(Weapon& a) const;
};

