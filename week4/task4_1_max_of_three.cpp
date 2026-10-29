#include <iostream>

double max_of_three(double n1, double n2, double n3)
{
    double result;
    if (n1 >= n2){
        result = n1;
        if (n3 >= n1){
            result = n3;
        }
    }
    if (n2 >= n1){
        result = n2;
        if (n3 >= n2)
        {
            result = n3;
        }
    }
    return result;
}
int main(){
    double a,b,c;
    std::cout<<"input three numbers "<< std::endl;
    std::cin>> a >> b >> c;
    std::cout<< max_of_three(a,b,c)<<std::endl;
}