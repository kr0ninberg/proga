#include <iostream>
#include <string>
#include <vector>
#include <map>

void print(std::vector<float> v){
	for (float n : v) std::cout << n << " ";
	std::cout << "\n-------------\n";
}

class Settings {
public:
	static std::map<std::string, int> map_1;
	static void Add(std::string s, int n) {
		map_1[s] = n;
		return;
	}
	static int Get(std::string s) {
		return map_1[s];
	}
	static void print() {
		for (auto i = map_1.begin(); i != map_1.end(); i++) {
			std::cout << i->first << " = " << i->second << "\n";
		}
		return;
	}
};

std::map<std::string, int> Settings::map_1;

int main() {
	std::vector<float> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	print(v1);
	std::vector<float>::iterator i = v1.begin();
	i += 3;
	v1.insert(i, 50);
	print(v1);
	i = v1.end() - 1;
	v1.erase(i);
	print(v1);

	/*Settings set_1;
	set_1.Add("a", 1);
	set_1.Add("b", 3);
	set_1.Add("c", 2);
	set_1.print();
	std::cout << set_1.Get("a") << '\n';*/

	std::cout << "/-----------------/";
	
	Settings::Add("a", 1);
	Settings::Add("b", 3);
	Settings::Add("c", 2);
	Settings::print();
	std::cout << Settings::Get("a") << '\n';
	return 0;
}