#include <iostream>

int main(){
    int a=0,b=0,r=0,q=0,s=0; //we represent a=b*q+r, s is a-b
std::cout<< "choose a number "<<std::endl;
std::cin>>a;
std::cout<<"choose a number to divide it by"<<std::endl;
std::cin>>b;
    while(a>b){
 if(a>b){
    s=a-b;
    std::cout<< a << " is greater than "<< b << " so we subtract "<< b << " from "<< a << " we get " << s << std::endl;
    q=q+1;
    a=s;
 }
 if(a<b){
     r=a;
    std::cout<<r<<" is not greater than "<< b << "so we terminate loop "<<std::endl;
    std::cout<<"the quotient is the number of subtractions "<< q <<std::endl;
    std::cout<<"the remainder is the number we have left at the end "<< r << std::endl;
 }
    }
}