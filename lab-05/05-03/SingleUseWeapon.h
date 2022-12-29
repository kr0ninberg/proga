#pragma once
#include "weapon.h"

class SingleUseWeapon : public Weapon{
private:
	bool used = false;
public:
	void Attack();
};

