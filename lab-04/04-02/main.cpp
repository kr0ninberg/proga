#include <iostream>
#include <string>

class Weapon {
public:
	std::string name;
	int strength;
	int weight;

	Weapon(std::string name, int strength, int weight) : name(name), strength(strength), weight(weight) {}
	Weapon() : Weapon("knife", 1, 1) {}

	~Weapon() {
		std::cout << "Weapon destructor called\n";
		std::cout << name << " " << strength << " " << weight << "\n";
	}

	bool weight_check(int max_weight = 1) {
		if (max_weight < weight) return true;
		return false;
	}

	int sum_weight(Weapon& a) {
		return sum_weight(a.weight);
	}

	int sum_weight(int weight) {
		return this->weight + weight;
	}
};

int main() {
	Weapon first;
	std::cout << first.name << ' ' << first.strength << ' ' << first.weight << '\n';
	Weapon *second = new Weapon("rifle", 4, 3);
	std::cout << second->name << ' ' << second->strength << ' ' << second->weight << '\n';

	std::cout << first.weight_check(2) << '\n';
	std::cout << second->weight_check(2) << '\n';
	std::cout << first.sum_weight(*second) << '\n';
	std::cout << first.sum_weight(5) << '\n';
	delete second;
	return 0;
}