#include <iostream>
#include <string>
#include <regex>

int main() {
	setlocale(LC_ALL, "");
	name:
	std::cout << "Enter your name :\n";
	std::string name;
	std::cin >> name;
	std::regex reg("^[A-Z][a-z]{1,31}$");
	if (std::regex_search(name, reg)) std::cout << "Ok\n";
	else {
		std::cout << "Incorrect name\n";
		goto name;
	}
	std::string emails = "awlefla aaaaaa@gmaaail.raau adlf111 2 * ed@ggg.er fgdfgd1gd141";
	std::regex reg2("[a-z0-9_][a-z0-9_\\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\\.)+[a-z0-9]{2,}", std::regex_constants::icase);
	
	std::smatch matches;
	
	/*while (std::regex_search(emails, matches, reg2)) {
		std::cout << "#" << matches[0] << "#\n";
		std::cout << "#" << matches[1] << "#\n";
		std::cout << "\n";
		emails = matches.suffix().str();
		std::cout << emails << "\n";
		std::cout << matches[0] << "\n";
		emails = matches.suffix().str();
	}*/
	/*std::cout << emails << "\n";
	while (std::regex_search(emails, matches, reg2)) {
		std::cout << "#" << matches[0] << "#\n";
		std::cout << "#" << matches[1] << "#\n";
		std::cout << "\n";
		emails = matches.suffix().str();
		std::cout << emails << "\n";
	}*/
	while (std::regex_search(emails, matches, reg2)) {
		std::cout << matches[0] << "\n";
		emails = matches.suffix().str();
	}
	return 0;
}