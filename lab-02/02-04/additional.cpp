#include <iostream>
#include "additional.h"
using namespace std;

namespace TestNspc {
    void func(int a) {
        static int n = 0;
        cout << n + a << "\n";
        n = a;
        return;
    }
}