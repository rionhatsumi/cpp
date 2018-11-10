#include <iostream>
using namespace std;
//Date.h ���ඨ��
class Date
{
public:
    void set(int, int, int);
    int getleap();
    void print();
private:
    int day, month, year;
};
//Date.C����Ա����ʵ��
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
    p->print(); // p��s�����ָ��
    if(p->getleap())
        cout << "leap year\n";
    else
        cout << "not leap year\n";
}
int main()
{
    Date s;
    s.set(5, 3, 2002);
    funca(&s); //����ĵ�ַ����ָ��
}
