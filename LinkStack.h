#ifndef _LINK_STACK
#define _LINK_STACK

#include "LinkedList.h"
#include "ListInterface.h"
#include "Node.h"
#include "StackInterface.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class LinkStack : public StackInterface<ItemType>
{
private:
    Node<ItemType>* topPtr; // Holds index of top of stack
public:
   LinkStack();
   LinkStack(const LinkStack<ItemType>& aStack);
   virtual ~LinkStack();

   bool isEmpty() const;
   bool push(const ItemType& newEntry);
   bool pop();
   ItemType peek() const;
}; // end LinkStack


#endif
