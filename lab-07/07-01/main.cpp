#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "");
	std::cout << "Enter a string\n";
	std::string s1;
	std::getline(std::cin, s1);
	std::cout << s1.substr(2, 2) << "\n";
	int index = s1.find("a");
	if (index != -1) std::cout << index << "\n";
	else std::cout << "Символа a не найдено\n";
	return 0;
}