#include<iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* next;
        Node* prev;

        Node(int val){
            this->data=val;
            this->next=NULL;
            this->prev=NULL;
        }
        ~Node(){
          int value=this->data;
          cout<<"Memory free with value"<<value<<endl;
        }
};

  void insertAtHead(Node*&head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

  }

    void insertAtTail(Node*&tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

  }

  void insertAtAnyPosition(Node*&head,int d,int position){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
      Node* nodetoInsert=new Node(d);
      nodetoInsert->next=temp->next;
      temp->next->prev=nodetoInsert;
      temp->next=nodetoInsert;
      nodetoInsert->prev=temp;
    
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
          prev->next=curr->next;
        curr->prev=NULL;
      
        curr->next=NULL;
        delete curr;
        
    }
    
    
}

  void print(Node*&head){
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cout<<temp->data<<" " ;
        temp=temp->next;
    }
  }
int main()

{
    Node* head=new Node(10);
    Node* tail=head;
    insertAtHead(head,20);
    insertAtHead(head,2130);
    insertAtTail(tail,34);
    insertAtAnyPosition(head,90,4);
    Delete(head,3);
    print(head);
    return 0;
}