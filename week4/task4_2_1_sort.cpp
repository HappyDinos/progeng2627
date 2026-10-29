#include <iostream>

void sort_two (double&n1, double&n2, double&n3){
    double temp, temp1;
    if(n1<n2){
        if(n2<n3){
        }
        //n2>n3
        else{ 
            temp=n3;
            n3=n2;
            n2=temp;
            //n1<n3
        if(n2<n1){
            temp1=n1;
            n1=n2;
            n2=temp1;

        }
        }

    }
    else{ // n2<n1
        temp=n1;
        n1=n2;
        n2=temp; //now n1<n2
     if(n2<n3){
        }
        else{ //n3<n2
            temp1=n3;
            n3=n2;
            n2=temp1;
            //n2<n3
            if(n1>n2){
                temp=n1;
                n1=n2;
                n2=temp;
            }

        }
    }
}
int main(){
    double N1,N2,N3;
    std::cout<< "please enter three numbers "<<std::endl;
    std::cin>> N1 >> N2 >> N3;
    sort_two(N1,N2,N3);
    std::cout<< N1 <<" "<< N2<< " " << N3 << std::endl;

}