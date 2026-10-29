#include <iostream>

double mypow (double base, int exp){
    double result=1;
    if(exp>0){
        for(int i=0; i<exp; i++ ){
            result= base * result;
        }
    }
    else if (exp<0){
        for( int i=0; i<-exp; i++){
            result = (base)*(result);
        }
        result=1/result;
    }

    return result;
}
int main(){
    double x, ans=0;
    int n;
    std::cout<< "please type in x and n for the sum of x^i from i=1 to i=n"<<std::endl;
    std::cin>> x >> n;

    for(int a=1; a<=n; a++){
        ans=ans + mypow(x,a);
    }
    std::cout<<"the sum of "<< x <<" to the power of i from i=1 to i="<< n << " is "<< ans <<std::endl;
}