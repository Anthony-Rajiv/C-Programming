#include "iostream"
#include "color.h"

Color::Color() :m_r(0), m_g(0), m_b(0) {}

Color::Color(int red, int green, int blue) :m_r(red), m_g(green), m_b(blue) {}

Color::Color(std::string color) 
{
    std::cout<<"Enter the desired color: ";
    std::cin>>color;
    std::cout<<color<<std::endl;
}

Color::Color(int hex) 
{
    std::cout<<"Enter the desired color in its Hexadecimal value: ";
    std::cin>>hex;
    switch(hex) 
    {
        case 0xFF0000:
            std::cout<<"Red" << std::endl;
            break;
        case 0x0000FF:
            std::cout<<"Blue" << std::endl;
            break;
        case 0x00FF00:
            std::cout<<"Green" << std::endl;
            break;
        case 0x0FF000:
            std::cout<<"Yellow" << std::endl;
            break;
        case 0xFFFFFF:
            std::cout<<"White" << std::endl;
            break;
        case 0x0:
            std::cout<<"Black" << std::endl;
            break;
        default:
            std::cout<<"Undefined Color" << std::endl;
            break;
    }
}

Color::Color(color_t color) 
{
    switch(color) 
    {
        case RED:
            std::cout<<"Red" << std::endl;
            break;
        case BLUE:
            std::cout<<"Blue" << std::endl;
            break;
        case GREEN:
            std::cout<<"Green" << std::endl;
            break;
        case YELLOW:
            std::cout<<"Yellow" << std::endl;
            break;
        case WHITE:
            std::cout<<"White" << std::endl;
            break;
        case BLACK:
            std::cout<<"Black" << std::endl;
            break;
        default:
            std::cout<<"Undefined Color" << std::endl;
            break;
    }
}

void Color::invert() 
{
    m_r=255-m_r;
    m_g=255-m_g;
    m_b=255-m_b;
    std::cout<<"The Color has been inverted "<< m_r << "," << m_g << "," << m_b <<std::endl;

}
void Color::display() const
{
    std::cout<<"The Color composition is as follows: "<<std::endl;
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<std::endl;
}