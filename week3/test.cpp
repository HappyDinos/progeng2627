#include <iostream>
int main(){
    int n = 10;
    for(int i = 1; i != n; i++){
        i++;
        std::cout << "*" << std::endl;
    }
    std::cout << "x" << std::endl;
}
