#include <iostream>
#define SUM(a,b) a+b
using namespace std;

void func(int a){
    static int n = 0;
    cout << n + a << "\n";
    n = a;
    return;
}

int main(){
    func(5);
    func(4);
    func(10);
    return 0;
}
