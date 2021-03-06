#include <iostream>
#include "Node.h"
#include "IntNode.h"
#include "QueueWithLinkedList.h"

using namespace std;

int main()
{
    cout << "This is a queue implementation \n";
    Node *c = new Node();

    void* dataB = new int(3);
    void* dataA = new int(40);
    Node* a = new Node(dataA);

    QueueWithLinkedList *q = new QueueWithLinkedList(a);

    q->enqueueData(dataB);
    q->enqueueNode(c);
    q->enqueueInt(4);
    q->printQueue();

    int topNumber = q->topNodeInt();
    cout<< "Queue tail: "<< topNumber<<endl;
    cout<< "Popping "<<topNumber<<" from queue tail \n";
    q->popNode();
    q->printQueue();
    cout<<"end program \n";
    return 1;
}
