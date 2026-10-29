#include <iostream>

int main(){
    int low,high,guess,n=4;
    std::cout<<"type the range for the number you're thinking of "<<std::endl;
    std::cin>>low>>high;
    guess= (low+high)/2;
    
    while(n!=3){
        std::cout<<"current guess is "<< guess <<std::endl;
        std::cout<<"is the guess high (1), low (2) or correct (3)"<<std::endl;
        std::cin>>n;
        if(n==1){
            high=guess-1;
        }
        else if(n==2){
            low=guess+1;
        }
        guess=(low+high)/2;
    }
}