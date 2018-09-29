#ifndef QUEUEWITHLINKEDLIST_H
#define QUEUEWITHLINKEDLIST_H
#include "Node.h"

class QueueWithLinkedList
{
private:
    Node* head;
    Node* tail;
public:
    QueueWithLinkedList();
    QueueWithLinkedList(Node* n);
    QueueWithLinkedList(void* _d);
    void enqueueNode(Node* n);
    void enqueueData(void* d);
    void enqueueInt(int n);
    Node* dequeueNode();
    void popNode();
    Node* topNode();
    int topNodeInt();
    void printQueue();
};
#endif
