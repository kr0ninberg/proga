#include <iostream>

const int SIZE = 1000000;

int main()
{
    int i = 0;
    int *p = &i;
    std::cout << p << ' ' << *p << '\n';
    *p = 1;
    std::cout << i << '\n';
    int a[SIZE];
    for(p = a ; p < a + SIZE ; ++p)
        std::cout << '%' << *p << '\n';
    int j = 5;
    int * const p1 = &j;
    // p1 = &i; error: assignment of read-only variable ‘p1’
    return 0;
}
