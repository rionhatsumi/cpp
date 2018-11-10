// strngbad.h -- flawed string class definition
#include <iostream>
#ifndef STRNGBAD_H
#define STRNGBAD_H

class StringBad
{
private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};

#endif
