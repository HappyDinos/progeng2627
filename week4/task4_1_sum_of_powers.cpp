#include <iostream>
#include <cmath>

int main(){
    double x, ans=0; // x should work for any number,
                    // ans too as it will be a sum from x

    int n;          // n should be an integer, as sum of...

    std::cout<< "please type in x and n for the sum of x to the power of i from i=1 to i=n"<<std::endl;
    std::cin>> x >> n;

    for(int i=1; i<=n; i++){
        ans = ans + std::pow(x,i);
            // 0+x^1
            // x^1+x^2...
    }
    std::cout<< ans << std::endl;
}