#include "IntNode.h"
using namespace std;

IntNode::IntNode()
{
    val = 0;
    next = nullptr;
}

IntNode::IntNode(int _n)
{
    val = _n;
    next = nullptr;
}

void IntNode::printNode()
{
    cout << val;
}
