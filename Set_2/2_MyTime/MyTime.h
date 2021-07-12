#ifndef _TIME_H_
#define _TIME_H_

#include "iostream"

class MyTime 
{
    private:
        int m_hours;
        int m_minutes;
        int m_seconds;
    public:
        MyTime();
        MyTime(int,int,int);
        MyTime(int,int);

        MyTime operator+(const MyTime& ref);
        MyTime operator-(const MyTime& ref);
        MyTime operator+(int number_of_minutes);
        MyTime operator-(int number_of_minutes);
        MyTime& operator++();
        MyTime operator++(int dummy);
        MyTime& operator+=(const MyTime& ref);
        bool operator==(const MyTime& ref);
        bool operator<(const MyTime& ref);
        bool operator>(const MyTime& ref);
        void display() const;
        friend std::ostream& operator<<(const std::ostream&, const MyTime&);
};
#endif