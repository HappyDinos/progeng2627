#include <iostream>

int main(){
    int s=1, a, b;

std::cout<<"input numbers a and b for a^b "<<std::endl;
std::cin>> a >> b;
    for(int i=1; i<b+1; i++){
    s=s*a;
    std::cout<< a <<"^"<< i << "is "<< s << std::endl;
}
}