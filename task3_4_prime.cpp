#include <iostream>

int main(){

int n;
bool factorfound=false;
std::cout<<"input a number "<<std::endl;
std::cin>>n;

//stop as soon as a factor is found, and only test up to the square root of n
//(if n=a*b, one of a or b must be <= sqrt(n), so c*c<=n is enough)
for(int c=2; (c*c<=n) && (!factorfound); c++){
    if((n%c)==0){
        factorfound=true;
        std::cout<<"found factor "<<c<<std::endl;
    }
}
if(factorfound || n<2){
    std::cout<<"the number isn't prime"<<std::endl;

}
else{
    std::cout<<"number is prime"<<std::endl;
}
}
