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
};

int main() {
	Weapon first;
	Weapon second("rifle", 4, 3);
	std::cout << first.name << ' ' << first.strength << ' ' << first.weight << '\n';
	std::cout << second.name << ' ' << second.strength << ' ' << second.weight << '\n';
	return 0;
}