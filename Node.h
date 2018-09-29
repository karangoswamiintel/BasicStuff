#ifndef NODE_H
#define NODE_H
#include <iostream>
class Node
{
public:
    void *data;
    Node *next;
    Node();
    Node(void* _d);
    void printNode();
};
#endif
