#include <iostream>

void rectangle (double W, double H, double&P, double&A){
    A=W*H;
    P=2*W+2*H;
}
int main(){
    double w,h;
    std::cout<< "please enter inputs for the width and height for the rectangle"<<std::endl;
    std::cin>> w >> h;
    double a,p;
    rectangle(w,h,p,a);
    std::cout<< "area of rectangle is "<< a << " and the perimeter of the recatngle is "<< p << std::endl;
}