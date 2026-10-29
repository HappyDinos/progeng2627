#include <iostream>

int main(){
    double n1=1.0,avg=0.0,n=0.0,sum=0.0;

    while(n1!=0){
        std::cout<<"enter a number"<<std::endl;
        std::cin>>n1;
    if(n1!=0){
        sum=sum+n1;
        n=n+1.0;
        avg= sum/n;
        std::cout<<"the average so far is"<<avg<<std::endl;
    }
    }

}