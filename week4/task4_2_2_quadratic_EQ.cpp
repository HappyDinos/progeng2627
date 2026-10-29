#include <iostream>
#include <cmath>
bool quad_solve (double a, double b, double c, double&x1, double&x2){
     double det;
     bool solution;
     det=b*b-4*a*c;
    if(det<0){
        solution=false;
    }
    else{
        solution=true;
        x1=(-b + std::sqrt (det))/(2*a);
        x2=(-b - std::sqrt (det))/(2*a);

    }
return solution;
}
int main(){
    double a,b,c,s1,s2;
    std::cout<< "input values a,b,c for ax^2+bx+c"<<std::endl;
    std::cin>> a >> b >> c;

    if(quad_solve(a,b,c,s1,s2)){
        if(s1==s2){
            std::cout<< s1 << " is a repeated solution"<<std::endl;
        }
        else{
        std::cout<< s1 <<" "<< s2 << " are the solutions"<< std::endl;
        }
    }
    else{
    std::cout << "the equation has no real solutions"<<std::endl;
    }
}