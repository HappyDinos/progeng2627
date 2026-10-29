#include <iostream>

bool leap_year(int year)
{
    bool ly;
    if (year % 4 == 0)
    {
        ly = true;
        if (year % 100 == 0)
        {
            ly = false;
        }
        if (year % 400 == 0)
        {
            ly = true;
        }
  
    }
      else{
        ly = false;
    }

    return ly;
}
int main(){
    int y;
    std::cout<< "input a year" <<std::endl;
    std::cin>> y;
    if(leap_year(y)){
        std::cout<< y<< " is a leap year" <<std::endl;

    }
    else{
        std::cout<< y << " is not a leap year" <<std::endl;
    }

}