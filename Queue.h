#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// global const for maximum queue entries
const int MAX_QUEUE = 10;

// a queue
template<class ItemType>
class Queue
{
private:
    // an array to hold MAX_QUEUE entries + 1
    ItemType entries[MAX_QUEUE + 1];
    // properties to hold current front, back
    int front;
    int back;
public:
    Queue()
    { front = 0; back = 0; };
    bool enqueue(ItemType newEntry);
    bool dequeue();
    char peekFront();
    bool isEmpty();
};  // End queue class
