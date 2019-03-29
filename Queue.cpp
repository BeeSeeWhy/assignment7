#include "Queue.h"

template<class ItemType>
bool Queue<ItemType>::enqueue(ItemType newEntry)
{
    bool ableToAdd = false;
    if (front == ((back + 1) % (MAX_QUEUE + 1)))
        cout << "Circular array is full, unable to add" << endl;

    else
    {
        back = (back + 1) % (MAX_QUEUE + 1);
        entries[back] = newEntry;
        ableToAdd = true;
    }
    return ableToAdd;
}

template<class ItemType>
bool Queue<ItemType>::dequeue()
{
    bool ableToDQ = false;
    if (isEmpty())
    {
        cout << "Circular array is empty, unable to dequeue." << endl;
    }
    else
    {
      front = (front + 1) % (MAX_QUEUE + 1);
      ableToDQ = true;
    }
    return ableToDQ;
}

template<class ItemType>
char Queue<ItemType>::peekFront()
{
    return entries[(front + 1) % (MAX_QUEUE + 1)];
}

template<class ItemType>
bool Queue<ItemType>::isEmpty()
{
    bool empty = false;
    if (front == back)
        empty = true;

    return empty;
}

template class Queue<char>;
