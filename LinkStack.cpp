#include "LinkStack.h"


template<class ItemType>
LinkStack<ItemType>::LinkStack() : topPtr(nullptr)
{
} // End default constructor

template<class ItemType>
LinkStack<ItemType>::LinkStack(const LinkStack<ItemType>& aStack)
{

} // End copy constructor

template<class ItemType>
LinkStack<ItemType>::~LinkStack()
{
    while(!isEmpty())
      pop();
} // End destructor

template<class ItemType>
bool LinkStack<ItemType>::isEmpty() const
{
    return topPtr == nullptr;
} // End isEmpty

template<class ItemType>
bool LinkStack<ItemType>::push(const ItemType& entry)
{
    bool result = true;
    Node<ItemType> *newNode = new Node<ItemType>;

    newNode->setItem(entry);
    newNode->setNext(topPtr);
    topPtr = newNode;

    return result;
} // End push

template<class ItemType>
bool LinkStack<ItemType>::pop()
{
    bool result = false;
    if (!isEmpty())
    {
        Node<ItemType>* temp = new Node<ItemType>;
        topPtr = topPtr->getNext();
        delete temp;
    }
    return result;
} // End pop

template<class ItemType>
ItemType LinkStack<ItemType>::peek() const
{
    return topPtr->getItem();
} // End peek

template class LinkStack<char>;
