#include <iostream>
#include "SingleUseWeapon.h"

void SingleUseWeapon::Attack(){
	if (used) std::cout << "������ ��� ���� ������������\n";
	else std::cout << "������� ����������� �������\n";
	used = true;
	return;
}