#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }

    // Insert Element at HEAD
    void insertAtHead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    // Insert Element at TAIL
    void insertAtTail(Node *&tail, int d)
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }

    // Insert at Any Position

    void insertAtAnyPosition(Node *&head, Node *&tail, int Position, int d)
    {

        // two conditions 1 Insert at start
        if (Position == 1)
        {
            insertAtHead(head, d);
            return;
        }

        Node *temp = head;
        int count = 1;
        while (count < Position - 1)
        {
            temp = temp->next;
            count++;
        }
        // INSETING AT LAST POSITION

        if (temp->next == NULL)
        {
            insertAtTail(tail, d);
            return;
        }

        Node *nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }

    void print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void Delete(int Position, Node *&head)
    {
        // Deleting at starting Position
        if (Position == 1)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }else
        {
            Node *Curr=head;
            Node*prev=NULL;
            int cnt=1;
            while(cnt<Position){
                   prev=Curr;
                   Curr=Curr->next;
                   cnt++;
            }
            prev->next=Curr->next;
            Curr->next=NULL;
            delete Curr;

        }
        
    }
};

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // head->print(head);
    // head->insertAtHead(head, 12);
    // head->print(head);
    head->print(head);
    tail->insertAtTail(tail, 22);
    tail->print(head);

    tail->insertAtAnyPosition(head, tail, 2, 32);
    tail->print(head);
    tail->insertAtAnyPosition(head, tail, 4, 33);
    tail->print(head);
    
    tail->Delete(4,head);
 tail->print(head);

    return 0;
}
