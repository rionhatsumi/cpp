// 10.12
// stacker.cpp -- testing the Stack class
#include "stack.h"
#include <cctype>
#include <iostream>

int main(int argc, char const * argv[])
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to Add a purchase order,\nP to process a PO, or Q "
            "to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po << "popped\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\np to process a PO, "
                "or Q "
                "to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
