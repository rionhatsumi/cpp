// strngbad.cpp -- StringBad class methods
#include "strngbad.h"
#include <cstring>

using std::cout;

// initializing stastic class member
int StringBad::num_strings = 0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" default object created\n"; // FYI
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, "; // FYI
    --num_strings;                                // required
    cout << num_strings << " left\n";             // FYI
    delete[] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
