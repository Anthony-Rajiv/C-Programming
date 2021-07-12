#include "iostream"
#include "MyTime.h"

MyTime::MyTime(): m_hours(0),m_minutes(0),m_seconds(0) { }
MyTime::MyTime(int hours, int minutes,int seconds) : m_hours(hours), m_minutes(minutes),m_seconds(seconds) {}
MyTime::MyTime(int hours, int minutes) : m_hours(hours), m_minutes(minutes) {}

MyTime MyTime::operator+(const MyTime& ref)
{
    int hours = m_hours + ref.m_hours;
    int minutes = m_minutes + ref.m_minutes;
    int seconds = m_seconds + ref.m_seconds;
    return MyTime(hours,minutes,seconds);
}

MyTime MyTime::operator-(const MyTime& ref)
{
    int hours = m_hours + ref.m_hours;
    int minutes = m_minutes + ref.m_minutes;
    int seconds = m_seconds + ref.m_seconds;
    return MyTime(hours,minutes,seconds);
}

MyTime MyTime::operator+(int number_of_minutes) 
{
    int minutes = (m_hours*60 + m_minutes) + number_of_minutes; 
    int hours = minutes / 60;
    minutes = minutes % 60;
    int seconds = m_seconds;
    return MyTime(hours,minutes,seconds);
}

MyTime MyTime::operator-(int number_of_minutes) 
{
    int minutes = (m_hours*60 + m_minutes) - number_of_minutes; 
    int hours = minutes / 60;
    minutes = minutes % 60;
    int seconds = m_seconds;
    return MyTime(hours,minutes,seconds);
}

MyTime& MyTime::operator++()
{
    ++m_hours;
    ++m_minutes;
    ++m_seconds;
    return *this;
}

MyTime MyTime::operator++(int dummy)
{
    MyTime original(*this);
    ++m_hours;
    ++m_minutes;
    ++m_seconds;
    return original;
}

MyTime& MyTime::operator+=(const MyTime& ref)
{
    m_hours += ref.m_hours;
    m_minutes += ref.m_minutes;
    m_seconds+= ref.m_seconds;
    return *this;
}

bool MyTime::operator==(const MyTime& ref)
{
    return (m_hours == ref.m_hours && m_minutes == ref.m_minutes && m_seconds == ref.m_seconds);
}

bool MyTime::operator<(const MyTime& ref)
{
    if (m_hours < ref.m_hours) return true;
    if (m_minutes < ref.m_minutes)return true;
    if (m_seconds < ref.m_seconds) return true;
    else return false;
}
  
bool MyTime::operator>(const MyTime& ref)
{
    if (m_hours > ref.m_hours) return true;
    if (m_minutes > ref.m_minutes)return true;
    if (m_seconds > ref.m_seconds) return true;
    else return false;
}

void MyTime::display() const 
{
    std::cout << m_hours << ":" << m_minutes << ":" << m_seconds << std::endl;
}