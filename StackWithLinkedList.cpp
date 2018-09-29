#include "StackWithLinkedList.h"
using namespace std;

void StackWithLinkedList::pushNode(Node* n)
{
    if(!head)
        head = n;
    else
    {
        Node* tmp = head;
        n->next = tmp;
        head = n;
    }
}

void StackWithLinkedList::popNode()
{
    if(!head) return;
    else
    {
        Node* tmp = head;
        head = head->next;
        tmp->next = NULL;
    }
}

Node* StackWithLinkedList::topNode()
{
    return head;
}

bool StackWithLinkedList::isStackEmpty()
{
    return head?false:true;
}
