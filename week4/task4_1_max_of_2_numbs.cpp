#include <iostream>

double max_of_two (double n1,double n2){
    double result;
    if(n1>n2){
        result=n1;
    }
    else{
        result=n2;
    }
    return result;
}
int main(){
    double a,b;
    std::cout<< "input two numbers"<<std::endl;
    std::cin>> a >> b;
    std::cout<< max_of_two(a,b) << " is the biggest of the two numbers"<<std::endl;
}