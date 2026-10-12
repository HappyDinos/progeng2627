#include <iostream>

int main(){
 double n,absv;
    std::cout<<"Type a Number please"<<std::endl;
        std::cin>> n;

if(n<0){
    absv=-n;
}
else{
    absv=n;
}

std::cout<<"The absolue value of "<< n << " is "<< absv<<std::endl;


}