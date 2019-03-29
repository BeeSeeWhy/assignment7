#include <iostream>
#include <string>
#include "LinkStack.h"
#include "Queue.h"
#include "StackInterface.h"
using namespace std;

bool isPalindrome(string s)
{
    bool palindrome = true;
    // Create an empty queue and an empty stack
    Queue<char>* aQueue = new Queue<char>();
    StackInterface<char>* aStack = new LinkStack<char>();

    // Load character by character of s into aQueue and aStack
    for (int i = 0; i < s.size(); i++)
    {
        char nextChar = s[i];
        aQueue->enqueue(nextChar);
        aStack->push(nextChar);
    }

    //compare aQueue & aStack
    while (!aQueue->isEmpty())
    {
        char queueFront = aQueue->peekFront();
        char stackTop = aStack->peek();
        if (queueFront == stackTop)
        {
            aQueue->dequeue();
            aStack->pop();
        }

        else
        {
            palindrome = false;
            aQueue->dequeue();
            aStack->pop();
        }
    }

    return palindrome;
} // End isPalindrome

void results(string s)
{
    if (isPalindrome(s))
        cout << s << " is a palindrome." << endl << endl;
    else
        cout << s << " is not a palindrome." << endl << endl;
}

void testing(string s)
{
    cout << "Testing string: " << s << endl;
}

int main ()
{
    string s = "racecar";
    testing(s);
    results(s);

    string t = "koala";
    testing(t);
    results(t);
    return 0;
} // End int main
