#include "iostream"
#include "MyTime.h"

int main() 
{
    MyTime t0;
    MyTime t1(1,2,3);
    MyTime t2(1,2);

    MyTime t3;
    t3 = t0 + t1;
    t3.display();

    MyTime t4;
    t4 = t1 - t0;
    t4.display();

    MyTime t5;
    t5 = t1 + 50;    
    t5.display();
    
    MyTime t6;
    t6 = t1 - 50;    //t1.operator+(50)
    t6.display();
  
    MyTime t7(1,2,3);
    t7++;
    t7.display();
  
    MyTime t8(1,2,3);
    t8 = t0++;
    t8.display();
  
    MyTime t9(1,2,3);
    t9 += t0;
    t9.display();
  
    MyTime t10(1,2,3);
    if(t10 == t1)
    {
        std::cout << "Equal" << std::endl;
    }

    MyTime t11(2,2,3);
    if(t11 > t1)
    {
        std::cout << "Greater"<< std::endl;
    }
  
    MyTime t12(0,0,0);
    if(t12 < t1)
    {
        std::cout << "Lesser" << std::endl;
    }
  
    return 0;
}