#include <iostream>

class MyException {
	int number;
public:
	MyException(int number=1) : number(number) {}
	std::string message() {
		switch (number) {
		case 1:
			return "Incorrect number\n";
			break;
		case 2:
			return "���-�� �� �������...\n";
			break;
		case 3:
			return "�� ��� �� ��������\n";
			break;
		case 4:
			return "�� ����� ������������� �����!\n";
			break;
		}
	}
};

int main(){
	setlocale(LC_ALL, "");
	bool has_incorrect_segment = false;
	try {
		std::cout << "Enter number 1 to 3: ";
		int n;
		std::cin >> n;
		if (n != 1 && n != 2 && n != 3) throw 1;
		else {
			switch (n){
			case 1:
				std::cout << "����\n";
				break;
			case 2:
				std::cout << "���\n";
				break;
			case 3:
				std::cout << "���\n";
				break;
			}
		}
	}
	catch (int n) {
		std::cout << "Incorrect number\n";
		has_incorrect_segment = true;
	}
	catch (...) {
		std::cout << "Something went wrong :(\n";
		return 0;
	}

	try {
		std::cout << "Enter your birth year: ";
		int n;
		std::cin >> n;
		if (n < 0) throw 4;
		if (n < 1850) throw 2;
		if (n > 2022) throw 3;
	}
	catch (int n) {
		if (n == 2) std::cout << "���-�� �� �������...\n";
		if (n == 3) std::cout << "�� ��� �� ��������\n";
		if (n == 4) std::cout << "�� ����� ������������� �����!\n";
		has_incorrect_segment = true;
	}
	catch (...) {
		std::cout << "Something went wrong :(\n";
		return 0;
	}
	if (!has_incorrect_segment) std::cout << "�������!\n";

	try {
		std::cout << "Enter your birth year: ";
		int n;
		std::cin >> n;
		if (n < 0) throw MyException(4);
		if (n < 1850) throw MyException(2);
		if (n > 2022) throw MyException(3);
	}
	catch (MyException n) {
		std::cout << n.message();
		has_incorrect_segment = true;
	}
	catch (...) {
		std::cout << "Something went wrong :(\n";
		return 0;
	}
	return 0;
}