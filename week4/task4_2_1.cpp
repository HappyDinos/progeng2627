#include <iostream>

int main(){
    int n1,n2;
    std::cout << "please enther two values" <<std::endl;
    std::cin >> n1 >>n2;
    std::cout << "you entered:" <<std::endl;
    std::cout << "n1: " << n1 <<std::endl;
    std::cout << "n2: " << n2 << std::endl;

    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}