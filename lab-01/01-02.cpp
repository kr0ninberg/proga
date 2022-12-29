#include <iostream>

template<typename t1 , typename t2>
void print(t1 a, t2 b){
    std::cout << b << " = " << a << '\n';
    return;
}

int main(){
    int i = 150;
    float j = 15.933;
    uint8_t w = 250;
    print(i, 'i');
    print(j, 'j');
    print(w, 'w');
    int day = 13;
    char month[12] = " September ";
    int year = 2003;
    std::cout << "Моя дата рождения: " << day <<
              month << year << '\n';
    const float a = 2.3;
    const char win[20] = "WINDOWS";
    std::cout << a << ' ' << win << '\n';
    return 0;
}
