#include <iostream>
#include <string>
#pragma once

enum class WeaponEnum {
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon {
public:
	std::string name;
	int strength;
	int weight;
	WeaponEnum some_val;

	Weapon(std::string name, int strength, int weight, WeaponEnum val);
	Weapon();
	~Weapon();

	// task 04-04
	bool weight_check(int max_weight);
	int sum_weight(Weapon& a);
	int sum_weight(int weight);
	//

	void describe();
};