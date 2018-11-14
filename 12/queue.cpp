// 12.11
// queue.cpp -- Queue and Customer methods
#include "queue.h"
#include <cstdlib> //(or stdlib.h) for rand()

// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL; // or nullptr
    items        = 0;
}

Queue::~Queue()
{
    Node * temp;

    while (front != NULL) // while queue is not yet empty
    {
        temp  = front;       // save address of front item
        front = front->next; // reset pointer to next item
        delete temp;         // delete former front
    }
}

bool Queue::isempty() const
{
    return items == 0;
}
bool Queue::isfull() const
{
    return items == qsize;
}
int Queue::queuecout() const
{
    return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node; // create node
    // of failure, new throws std::bad_alloc exception
    add->item = item; // set node pointers
    add->next = NULL; // or nullptr
    items++;
    if (front == NULL) // if queue is empty
        front = add;   // place item at front
    else
        rear->next; // else place at rear
    return true;    // have rear point to new node
}
// time set to a random value in the rang 1 - 3
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive      = when;
}