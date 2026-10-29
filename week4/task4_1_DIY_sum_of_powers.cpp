#include <iostream>

double mypow (double base, int exp){
double original,result;
original=base;
result=base;
    for(int i=1; i<exp; i++){
        base=base*original;
        result=base+result;
    }
    return result;
}
int main(){
    double x;
    int n;
    std::cout<<"please type in x and n for sum of x^i from i=1 to i=n"<<std::endl;
    std::cin>> x >> n;
    std::cout<< mypow(x,n)<<std::endl;
}