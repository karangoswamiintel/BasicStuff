#ifndef MINSTACKLINKEDLIST_H
#define MINSTACKLINKEDLIST_H
#include "IntNode.h"

class MinStackLinkedList
{
public:
    IntNode* head;
    // minHead holds the minimum elements in order of insertion in Stack.
    // It is also a linked list
    IntNode* minHead;
    MinStackLinkedList();
    void push(int x);
    void pop();
    int top();
    int getMin();
};
#endif
