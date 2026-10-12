#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;
    if(rem==0){
        std::cout<<"this number is a multiple of 3"<<std::endl;
        //if() is the condition. and must contain 
        //something that represents yes or no
    }
    else{
        std::cout<< "the number isn't a multiple of 3";
    }
} 