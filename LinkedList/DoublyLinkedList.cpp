#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val=this->data;
        if (!next==NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data"<<val<<endl;
        
    }
};

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
void insertAtHead(Node *&head, int data, Node *&tail)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&tail, int data, Node *&head)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);

        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtAnyPosition(Node *&tail, Node *&head, int data, int Position)
{
    if (Position == 1)
    {
        insertAtHead(head, data, tail);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < Position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data, head);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


void Delete(Node* &head,int Position){
    if (Position==1)
    {
      Node*temp=head;
      temp->next->prev=NULL;
      head=temp->next;
      temp->next=NULL;
      delete temp;
    }else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while (cnt<Position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    
    
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, 34, tail);

    insertAtTail(tail, 32, head);
    print(head);

    insertAtAnyPosition(tail, head, 234, 3);
    print(head);
    
    Delete(head,3);
    print(head);
    return 0;
}