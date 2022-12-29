#include <iostream>
#include "SingleUseWeapon.h"

void SingleUseWeapon::Attack(){
	if (used) std::cout << "Оружие уже было использовано\n";
	else std::cout << "Атакуем одноразовым оружием\n";
	used = true;
	return;
}