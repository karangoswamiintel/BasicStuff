#include "MinStackLinkedList.h"
using namespace std;

MinStackLinkedList::MinStackLinkedList()
{
    head = nullptr;
    minHead = nullptr;
}

void MinStackLinkedList::push(int x)
{
    if(!head)
    {
        head = new IntNode(x);
        minHead = new IntNode(x);
    }
    else
    {
        IntNode* tmp = new IntNode(x);
        tmp->next = head;
        head = tmp;
        if(x <= minHead->val)
        {
            IntNode* t = new IntNode(x);
            t->next = minHead;
            minHead = t;
        }
    }
}

void MinStackLinkedList::pop()
{
    if(!head) return;
    else
    {
        if(minHead && head->val == minHead->val) minHead=minHead->next;
        head = head->next;
    }
}

int MinStackLinkedList::top()
{
    if(!head) return -1;
    else return head->val;
}

int MinStackLinkedList::getMin()
{
    if(!minHead) return -1;
    return minHead->val;
}
