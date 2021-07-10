#ifndef _BOX_H_
#define _BOX_H_

class box
{
    private : 
        int m_length;
        int m_breadth;
        int m_height;
    public:
        box();
        box(int length,int breadth,int height);
        box(int value);
        box(const box& ref);

        int length() const;
        int breadth() const;
        int height() const;
        int volume() const;
        /*void dispay() const;*/
        
        ~box();
};

#endif