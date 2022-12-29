#include <iostream>
#include <string>
#pragma once

class Weapon {
	friend class Characteristic;
private:
	std::string name;
	int strength;
	int weight;

public:
	std::string get_name();
	int get_strength();
	int get_weight();
	void set_name(std::string name);
	void set_strength(int strength);
	void set_weight(int weight);

	Weapon(std::string name, int strength, int weight);
	Weapon();
	~Weapon();
	bool weight_check(int max_weight);
	int sum_weight(Weapon& a);
	int sum_weight(int weight);
};

class Characteristic {
	int strenght;
public:
	Characteristic(int strenght = 1);
	int GetDamage(Weapon& a);
};