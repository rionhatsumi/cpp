// 9.8
// twofile2.cpp -- variables with internal and external kinkage
#include <iostream>
extern int tom;       // tom defined elsewhere
static int dick = 10; // overrides external dick
int harry = 200;      // external variable definiton, no confilict with twofile1
                      // harry

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:\n"
         << &tom << " = &tom " << &dick << " = &dick, " << &harry
         << " = &harry\n";
}