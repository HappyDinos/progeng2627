#include <iostream>
#include <string>

int main (){
    std::string word;

    while((std::cin>>word)&&(word!="stop") && (word!="STOP")){
        
            std::cout<<word<<std::endl;
    }
        

    }