#include <iostream>
using namespace std;
//Date.h ：类定义
class Date
{
public:
    void set(int, int, int);
    int getleap();
    void print();
private:
    int day, month, year;
};
//Date.C：成员函数实现
void Date::set(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
int Date::getleap()
{
    return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void Date::print()
{
    cout << month << " / " << day << " / " << year << endl;
}
void funca(Date *p)
{
    p->print(); // p是s对象的指针
    if(p->getleap())
        cout << "leap year\n";
    else
        cout << "not leap year\n";
}
int main()
{
    Date s;
    s.set(5, 3, 2002);
    funca(&s); //对象的地址传给指针
}
