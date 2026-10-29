#include <iostream>

double myabs(double in);
int main(){
    double n;
    std::cout<<"please enter a number "<< std::endl;
    std::cin >> n;
    std::cout<< "|" << n << "| = "<< myabs(n)<< std::endl;

}
double myabs(double in){
//return type (double)
//name of function (abs)
// input parameter type (double)
// input parameter name (in)

    double abs;

    if(in<0){
        abs=-in;

    }
    else{
        abs=in;
}
    return abs;
    //the function returns the result
}