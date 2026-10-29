#include <iostream>
#include <string>

void damn (std::string &w1,std::string&w2){
    std::string temp;

    temp=w1;
    w1=w2;
    w2=temp;
}
int main(){
    std::string word1, word2;
    std::cout<< "please type in two words"<<std::endl;
    std::cin>> word1 >> word2;
      damn(word1,word2);
    std::cout<< word1 <<" "<< word2<< std::endl;
}