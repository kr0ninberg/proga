#pragma once
#include <iostream>
#include <string>

enum class WeaponEnum {
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon {
	friend class Characteristic;
private:
	std::string name;
	int strength;
	int weight;
	WeaponEnum some_val;
public:
	std::string get_name() const;
	virtual int get_strength() const;
	int get_weight() const;
	WeaponEnum get_enum() const;
	void set_name(std::string name);
	void set_strength(int strength);
	void set_weight(int weight);

	Weapon(std::string name, int strength, int weight, WeaponEnum val);
	Weapon();
	~Weapon();

	bool weight_check(int max_weight);
	int sum_weight(Weapon& a);
	int sum_weight(int weight);

	virtual void describe();

	virtual void Attack() = 0;
};

class Characteristic {
	int strenght;
public:
	Characteristic(int strenght = 1);
	int GetDamage(Weapon& a);
};