#include <iostream>
using namespace std;


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

void printNode(Node* n)
{
    if(!n->data)
    printf("EMPTY\n");
    else
    {
        int *x = (int *)n->data;
        cout<<*x<<endl;
    }
    
}

class QueueWithLinkedList
{   
    private:
    Node* head;
    Node* tail;
    public:
 
    QueueWithLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    QueueWithLinkedList(Node* n)
    {
        head = tail = n;
    }

    QueueWithLinkedList(void* _d)
    {
        Node* tmp = new Node(_d);
        head = tail = tmp;
    }

    void enqueueNode(Node* n)
    {
        if(!tail) 
            head = tail = n;
        else
        {
            tail->next = n;
            tail = tail->next;
        }
    }

    void enqueueData(void* d)
    {
        Node* tmp = new Node(d);
        if(!tail)
            head = tail = tmp;
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    Node* dequeueNode()
    {
        if(!head) return nullptr;
        else
        {
            // get head pointer
            Node* tmp = head;
            
            // move head one step up.
            head = head->next;
            tmp->next = nullptr;
            
            // que is empty so we make tail null too
            if(!head) tail = nullptr;
            return tmp;
        }
    }
};

int main() {
	// your code goes here
	cout << "This is a queue implementation \n";
	Node* c = new Node();
	void* dataB = new int(3);
	Node* b = new Node(dataB);
	void* dataA = new int(40);
	Node* a = new Node(dataA);
	QueueWithLinkedList* q = new QueueWithLinkedList(a);
	
	q->enqueueData(dataB);
	q->enqueueNode(c);
	Node* A = q->dequeueNode();
	Node* B = q->dequeueNode();
	Node* C = q->dequeueNode();
	printNode(A);
	printNode(B);
	printNode(C);
	return 0;
}
