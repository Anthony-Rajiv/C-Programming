#ifndef _GPOINT_H_
#define _GPOINT_H_

enum Quadrant 
{
  Q1 = 1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class MyPoint 
{
    private:
        T m_x;
        T m_y;
    public:
        MyPoint();
        MyPoint(T x,T y);
  
        void distanceFromOrigin();
        Quadrant quadrant();
        void display();
};

#endif