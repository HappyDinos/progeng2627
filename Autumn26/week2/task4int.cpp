#include <iostream>

int main(){
    int n, rem;
    std::cout << "please enter a numner"<< std::endl;
    std::cin >> n;
    rem = n % 2;
    // % is not percentage, it computes
    //the remainder of the integer division
    // here between n and 2
    // 0 if even
    // 1 if odd

    std::cout<< "in the following line 0 means even and 1 means odd"<< std::endl;
    std::cout << rem << std::endl;

}