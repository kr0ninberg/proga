#include <iostream>

int main()
{
    int i , j;
    std::cin >> i >> j;
    std::cout << (i + j) / 2. << '\n';
    std::cout << "Введите знак операции: ";
    char s;
    std::cin >> s;
    /*
    if(s == '+') std::cout << i + j << '\n';
    if(s == '-') std::cout << i - j << '\n';
    if(s == '*') std::cout << i * j << '\n';
    if(s == '/') std::cout << i / j << '\n';
    */
    switch(s)
    {
        case '+': std::cout << i + j << '\n';
        break;
        case '-': std::cout << i - j << '\n';
        break;
        case '*': std::cout << i * j << '\n';
        break;
        case '/': std::cout << i*1. / j << '\n';
        break;
    }
    return 0;
}
