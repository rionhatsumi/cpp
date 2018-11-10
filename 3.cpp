#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double amount = 22.0 / 7;
    cout << amount << endl;
    cout << setprecision(0) << amount << endl
         << setprecision(1) << amount << endl
         << setprecision(2) << amount << endl
         << setprecision(3) << amount << endl;
    cout << setiosflags(ios::fixed) << amount << endl;
    cout << setprecision(8) << amount << endl;
    cout << setiosflags(ios::scientific) << amount << endl;
    cout << setprecision(6) << amount << endl;
    return 0;
}
