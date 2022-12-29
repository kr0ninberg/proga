#include <iostream>
#include "additional.h"
#define SUM(a,b) a+b
using namespace std;

int main() {
    TestNspc::func(5);
    TestNspc::func(4);
    TestNspc::func(10);
    std::string wait;
    std::cin >> wait;
    return 0;
}
