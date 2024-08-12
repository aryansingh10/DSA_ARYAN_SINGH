#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
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
          cout<<"Memory free for node with data  " <<value<<endl;
    }

    
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node* &head,int data,int position){
    Node * temp=head;
    int cnt =1;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    Node* newNodetoInsert=new Node(data);
      newNodetoInsert->next=temp->next;
    temp->next=newNodetoInsert;
  

}

void deletion(Node* &head,int position){
    if (position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
    
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;                                          
    insertAtHead(head, 20);
    insertAtHead(head, 100);
    insertAtTail(tail, 30);
    insertAtAnyPosition(head,32,3);
    deletion(head,3);
    print(head);
    return 0;
}     