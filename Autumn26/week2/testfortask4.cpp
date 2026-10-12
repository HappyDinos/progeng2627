#include <iostream>

int main(){
    int x,y;
    std::cout<< "what are the lengths of the rectangle x,y. Enter x and then y please."<<std::endl;
    std::cin>>x;
    std::cin>>y;
    int p=2*x+2*y;
    int a=x*y;
    std::cout<<" The perimeter is "<< p << " the area is "<< a;



}