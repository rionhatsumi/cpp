// 12.12
// bank.cpp -- using the Queue interface
#include "queue.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
const int MIN_PER_HR = 60;

bool newcustomer(double x);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    //  setting things up
    std::srand(std::time(0)); // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs); // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours; // hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; //# of cycles

    return 0;
}
