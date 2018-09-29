#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
    data = nullptr;
    next = nullptr;
}

Node::Node(void* _d)
{
    data = _d;
    next = nullptr;
}

void Node::printNode()
{
    if(!data)
        printf("NULL");
    else
    {
        int *x = (int *)data;
        cout<<*x;
    }
}
