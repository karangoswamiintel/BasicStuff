#ifndef MINSTACKLINKEDLIST_H
#define MINSTACKLINKEDLIST_H
#include "IntNode.h"

class MinStackLinkedList
{
public:
    IntNode* head;
    IntNode* minHead;
    MinStackLinkedList();
    void push(int x);
    void pop();
    int top();
    int getMin();
};
#endif
