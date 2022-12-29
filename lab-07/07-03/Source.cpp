#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#ifndef M_PI
	#define M_PI 3.14159265358979323846
#endif
#include <fstream>

int main() {
	setlocale(LC_ALL, "");
	double r;
	std::cout << "¬ведите радиус окруности\n";
	std::cin >> r;
	std::cout << round(2 * M_PI * r * 1000) / 1000 << "\n";

	std::string s;
	std::getline(std::cin, s);

	std::ifstream fin;
	std::ofstream fout;
	fout.open("C:\\Users\\kroninberg\\Documents\\a.txt", std::ios_base::out);
	while (true) {
		std::cout << "¬ведите произвольную строку\n";
		std::string t;
		std::getline(std::cin, t);
		if (t == "exit") break;
		else if (t == "read") {
			fout.close();
			fin.open("C:\\Users\\kroninberg\\Documents\\a.txt", std::ios_base::in);
			while (fin) {
				std::string t2;
				std::getline(fin, t2);
				std::cout << t2 + '\n';
			}
			fin.close();
			fout.open("C:\\Users\\kroninberg\\Documents\\a.txt", std::ios_base::app);
		}
		else if (t == "erase") {
			fout.close();
			fout.open("C:\\Users\\kroninberg\\Documents\\a.txt", std::ios_base::out);
		}
		else {
			fout << t + '\n';
		}
	}
	fin.close();
	fout.close();
	return 0;
}