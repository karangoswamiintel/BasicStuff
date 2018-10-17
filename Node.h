#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node
{
public:
    void *data;  //why declared as pointer? Is it because u can allocate any type of data type. How can you identify what type of data type is st
                 //stored in this. do you wanna allocate generalised Node?
    Node *next;
    Node();
    Node(void* _d);
    void printNode();
};
#endif
