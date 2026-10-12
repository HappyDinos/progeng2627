#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c= a + b;

    std::cout<< c << std::endl;
    // prints 3
    a = 2;
    std::cout << c << std::endl;
    //expect 4
    c = a + b;
    std::cout << c << std::endl;
    //expect 4





}