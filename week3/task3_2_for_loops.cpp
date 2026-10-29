#include <iostream>

int main(){
    //consider 3 elements of loops,
    // initialisation, condition and increment/update
 int n;
 std::cin >> n;

 //while(counter<n);
 //std::cout<<"hello"<<std::endl;
 //counter=counter+1;

//    initialisatoin    condition   increment/update
// everything is now in one line, compact and easy to rememeber
//for (int counter =0; counter < n; counter= counter +1){
  //  std::cout << "hello" << std::endl;

for(int i=0; i<7; i++){
    std::cout << i <<std::endl;
    //the order is i=0, checks i<7, prints, then i++, goes to step 2
}




}