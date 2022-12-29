#include <iostream>

int item_11(int n);

void item_12(int a , int b , int& c , int& d){
    c = a + b;
    d = a * b;
    return;
}

int main(){
    int row = 2;
    int col = 3;
    int a[row][col] = {{1 , 2 , 3} , {4 , 5 , 6}};
    int sum = 0;
    for (int i = 0 ; i < col * row ; ++i) sum += *(*a + i);
    std::cout << sum << '\n';
    int a2[col];
    for (int i = 0 ; i < col ; ++i){
        int sum = 0;
        for (int j = 0 ; j < row ; ++j) sum += a[j][i];
        a2[i] = sum;
        std::cout << a2[i] << ' ';
    }
    // ---
    float val = 20.84f;
    float *p1, *p2;
    p1 = p2 = &val;
    std::cout << "val = " << val << " | p->" << *p1 << '\n';
    val = -val + 2;
    std::cout << "val = " << val << " | p->" << *p1 << '\n';
    // ---
    int n1 , n2 , n3 , n4;
    n1 = 1; n2 = 2; n3 = 3; n4 = 4;
    std::cout << "n1 " << n1 << "\nn2 " << n2 << "\nn3 " << n3 << "\nn4 " << n4 << "\n";
    item_12(n1 , n2 , n3 , n4); 
    std::cout << "n1 " << n1 << "\nn2 " << n2 << "\nn3 " << n3 << "\nn4 " << n4 << "\n";
    // ---
    int one_more = 24234;
    std::cout << one_more << '\n';
    for(int i = 0 ; i < 3 ; ++i){
        int one_one_more = 10000;
        std::cout << one_more << ' ';
        std::cout << one_one_more << ' ';
    }
    //std::cout << one_one_more << ' ';
    std::cout << '\n';
    return 0;
}

int item_11(int n = 1){
    if (n <= 0) return 0;
    for (int i = n ; i > 0 ; --i) n += i;
    return n;
}
