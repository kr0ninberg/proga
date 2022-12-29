#include <iostream>
#include <string>
#pragma once

class Weapon {
public:
	std::string name;
	int strength;
	int weight;

	Weapon(std::string name, int strength, int weight);
	Weapon();
	~Weapon();
	bool weight_check(int max_weight);
	int sum_weight(Weapon& a);
	int sum_weight(int weight);
};