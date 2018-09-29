#include <iostream>
#include "QueueWithLinkedList.h"
using namespace std;

int main() {
	// your code goes here
	cout << "This is a queue implementation \n";
	Node* c = new Node();
	void* dataB = new int(3);
	void* dataA = new int(40);
	Node* a = new Node(dataA);

	QueueWithLinkedList* q = new QueueWithLinkedList(a);

	q->enqueueData(dataB);
	q->enqueueNode(c);
    q->enqueueInt(4);
    q->printQueue();

    int topNumber = q->topNodeInt();
    cout<< "TOPNUMBER: "<< topNumber<<endl;
    q->popNode();
    q->printQueue();

	return 0;
}
