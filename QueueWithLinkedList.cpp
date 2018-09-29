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
    printf("NULL");
    else
    {
        int *x = (int *)n->data;
        cout<<*x;
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

    void enqueueInt(int n)
    {
        void *d = new int(n);
        Node *tmp = new Node(d);
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

    void popNode()
    {
        if(!head) return;
        else
        {
            Node *tmp = head;
            head = head->next;
            tmp->next = nullptr;
            if(!head) tail = nullptr;
            //if(tmp) delete tmp;
        }
    }

    Node* topNode()
    {
        return head;
    }

    int topNodeInt()
    {
        Node *tmp = head;
        if(tmp)
            return *(int*)tmp->data;
        else
            return -1;
    }

    void printQueue()
    {
        Node *pntr = head;
        cout<< "<== ";
        while(pntr)
        {
            printNode(pntr);
            if(pntr->next)
                cout<<"->";
            pntr = pntr->next;
        }
        cout<< " <== \n";
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
    q->enqueueInt(4);
    q->printQueue();

    int topNumber = q->topNodeInt();
    q->popNode();
    q->printQueue();


	//printNode(A);
	//printNode(B);
	//printNode(C);
	return 0;
}
