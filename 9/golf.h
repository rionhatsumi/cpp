// golf.h -- for pe9-1.cpp

const int Len = 40;

struct golf
{
    char fullname[Len];
    int hadicap;
};

void setgolf(golf & g, const char * name, int hc);

int setgolf(golf & g);

void hadicap(golf & g, int hc);

void showgolf(const golf & g);