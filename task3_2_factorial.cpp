#include <iostream>

int main(){
    int a;
std::cin>>a;

   
    if(a==0||a==1){
        std::cout<< "1";
    }

    for (int i=a-1; i>0; i=i-1){
        a=i*a;

    }
   std::cout<<a<<std::endl;
    

}