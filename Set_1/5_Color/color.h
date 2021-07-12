#ifndef _COLOR_H_
#define _COLOR_H_

#include "iostream"

typedef enum 
{
  RED=0xFF0000,
  GREEN=0x00FF00,
  BLUE=0x0000FF,
  YELLOW=0x0FF000,
  WHITE=0xFFFFFF,
  BLACK=0x0
  
}color_t;

class Color 
{
    private:
        int m_r;
        int m_g;
        int m_b;
    public:
        Color();
        Color(int red,int green,int blue);       
        Color(int color);               
        Color(std::string);       
        Color(color_t);           
  
        void invert();
        void display() const;
};

#endif