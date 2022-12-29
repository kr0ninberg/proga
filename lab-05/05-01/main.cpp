#include <iostream>
#include <string>
#include "weapon.h"
#include "MagicWeapon.h"

struct player {
	int id;
	std::string login;
	std::string password;
	void printer() {
		std::cout << "id: " << id << "\n";
		std::cout << "login: " << login << "\n";
		std::cout << "password: " << password << "\n";
	}
};

int main() {
	setlocale(LC_ALL, "");
	Weapon *a = new Weapon();
	if (a->get_enum() == WeaponEnum::ONEHANDED) std::cout << "Одноручное оружие\n";
	else if (a->get_enum() == WeaponEnum::TWOHANDED) std::cout << "Двуручное оружие\n";
	else if (a->get_enum() == WeaponEnum::BOW) std::cout << "Лук\n";
	else if (a->get_enum() == WeaponEnum::CROSSBOW) std::cout << "Арбалет\n";
	delete a;
	player first{ 2423, "kron", "1392" };
	first.printer();

	MagicWeapon b;
	std::cout << b.get_magic_strength() << "\n";
	b.set_magic_strength(2);
	std::cout << b.get_magic_strength() << "\n";

	std::cout << b.get_strength() << "\n";
	b.set_strength(2);
	std::cout << b.get_strength() << "\n";

	std::cout << b.get_weight() << "\n";
	b.set_weight(2);
	std::cout << b.get_weight() << "\n";

	b.describe();
	return 0;
}