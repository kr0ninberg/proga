#include <iostream>
#include <string>
#include "weapon.h"
#include "MagicWeapon.h"
#include "SingleUseWeapon.h"
#include "Inhand.h"

int main() {
	setlocale(LC_ALL, "");
	//Weapon p;                 || ERROR
	MagicWeapon a;
	a.set_name("a");
	a.Attack();
	SingleUseWeapon b;
	b.set_name("b");
	b.Attack();
	b.Attack();

	Inhand<MagicWeapon, int> c(MagicWeapon(), 123);
	c.get_left().describe();
	std::cout << c.get_right() << "\n";
	return 0;
}