#include <iostream>

int main(){
    double n=1,sum=0;
    
    while(n!=0){
        std::cout<<"type a number"<<std::endl;
        std::cin>> n;
        if(n!=0){
        sum=n+sum;
        std::cout<<"the current sum is "<<std::endl<< sum <<std::endl;
         }
    }
}