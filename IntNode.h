#ifndef INTNODE_H
#define INTNODE_H
#include <iostream>

class IntNode
{
public:
    int val;
    IntNode *next;
    IntNode();
    IntNode(int _n);
    void printNode();
};
#endif
