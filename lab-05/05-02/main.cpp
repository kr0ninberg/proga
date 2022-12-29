#include <iostream>
#include <string>
#include "weapon.h"
#include "MagicWeapon.h"

int main() {
	setlocale(LC_ALL, "");
	MagicWeapon a;
	std::cout << a.get_strength() << "\n";

	MagicWeapon b("", 3, 1, WeaponEnum::ONEHANDED, 1);
	MagicWeapon c("", 2, 1, WeaponEnum::ONEHANDED, 3);
	MagicWeapon d("", 10, 1, WeaponEnum::ONEHANDED, -3);
	std::cout << (b > c) << "\n";
	std::cout << (b < d) << "\n";
	return 0;
}