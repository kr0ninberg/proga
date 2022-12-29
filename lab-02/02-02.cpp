#include <iostream>

int main(){
    int n;
    A:
    std::cout << "Введите целое положительное число\n";
    std::cin >> n;
    if(n < 0) goto A;
    for (int i = n - 1 ; i > 0 ; --i) n += i;
    std::cout << n << '\n';
    int a[10] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    for (int i = 0 ; i < 10 ; ++i) std::cout << a[i] << ' ' ;
    std::cout << '\n';
    for (int i = 0 ; i % 2 == 0 && i < 10 ; i += 2) std::cout << a[i] << ' ' ;
    std::cout << '\n';
    for (int i = n = 1 ; i % 2 == 1 && i < 10 ; i += 2) n += a[i];
    std::cout << --n << '\n';
    return 0;
}
