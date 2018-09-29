#ifndef QUEUEWITHLINKEDLIST_H
#define QUEUEWITHLINKEDLIST_H

typedef struct node_s
{
    void *data;
    struct node_s *next;
    node_s()
    {
        data = nullptr;
        next = nullptr;
    }
    node_s(void* _d)
    {
        data = _d;
        next = nullptr;
    }
} Node;

void printNode(Node* n);

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
