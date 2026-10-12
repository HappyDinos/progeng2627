#include <iostream>

int main(){
    int year;
std::cout<<"Enter the year to check if it's a leap year."<<std::endl;
std::cin>> year;

if((year%4)==0){

    if((year%100)==0){
        if((year%400)==0){
        std::cout<< "leap year";
        }
        else{
            std::cout<<"not leap year";
        }
    }
    else{
        std::cout<<" leap year";
    }
  

}
else{
    std::cout<<" not leap year";
}
}