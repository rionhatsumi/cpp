#include <iostream>
using namespace std;
float temp;
float fn1(float r)
{
    temp = r * r * 3.14;
    return temp;
}
float& fn2(float r)
{
    temp = r * r * 3.14;
    return temp;
}
int main()
{
    float a = fn1(5.0); //cond:1
    float x = fn1(5.0);
    float& b = x;
//  float& b = fn1(5.0); //cond:2(error)
    float c = fn2(5.0); //cond:3
    float& d = fn2(5.0); //cond:4
    cout << a << endl << b << endl << c << endl << d << endl;
    return 1;
}

