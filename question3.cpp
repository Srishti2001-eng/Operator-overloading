#include<iostream>
using namespace std;
class Time 
{
    int hr, min, sec;
    public:
    
    Time()
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }

    Time operator++();
    Time operator++(int);

    void show()
    {
        cout<< hr<< ":"<< min<< ":"<< sec;
    }
};

Time Time:: operator++()
{
    ++hr;
    ++min;
    ++sec;
    return *this;
}




int main()
{
    Time t1(3,10,30),t;
    t=++t1;
    t.show();
    return 0;
}






