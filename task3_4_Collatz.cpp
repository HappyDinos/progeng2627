#include <iostream>

int main(){
    int n,t=1,max;
    std::cin>> n ;
    max=n;
   while(n!=1){
    if((n%2)==0){
    n=n/2;
    std::cout<<"the next number from the sequence is "<< n <<" and the steps taken is "<< t <<std::endl;
        if(n>max){
            max=n;
                }
                 std::cout<<"current maximum is "<< max << std::endl;
    }
    else{
        n=3*n+1;
        std::cout<<"the next number from the sequence is "<< n <<" and the steps taken is "<< t <<std::endl;
        if(n>max){
            max=n;
                }
                 std::cout<<"current maximum is "<< max << std::endl;
    }
    t++;
}
}