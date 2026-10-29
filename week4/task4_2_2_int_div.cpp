#include <iostream>

void div(int A, int B, int&Q, int&R){
    Q=A/B;
    R=A-Q*B;

}
int main(){
    int a,b;
    std::cout<<"input values for a/b"<<std::endl;
std::cin>> a>>b;
    int q,r;
    div(a,b,q,r);
    std::cout<< "quotient is "<< q << " remainder is "<< r <<std::endl;
}