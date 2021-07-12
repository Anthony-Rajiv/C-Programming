#ifndef _POINT_H_
#define _POINT_H_

#include "iostream"

enum Quadrant 
{
  Q1,
  Q2,
  Q3,
  Q4
};

class point 
{
    private:
        int m_x;
        int m_y;
    public:
        point();
        point(int x,int y);
        point(const point& ref);
  
        double distanceFromOrigin()  const;
        Quadrant quadrant() const;
        bool isOrigin() const;
        bool isOnXAxis() const;
        bool isOnYAxis() const;
        void display() const;
};

#endif