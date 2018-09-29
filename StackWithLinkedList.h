#ifndef STACKWITHLINKEDLIST_H
#define STACKWITHLINKEDLIST_H
#include "Node.h"

class StackWithLinkedList
{
private:
    Node* head;
public:
    void pushNode(Node* n);
    void popNode();
    Node* topNode();
    bool isStackEmpty();
};

#endif
