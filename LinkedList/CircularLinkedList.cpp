#include<iostream>
using namespace std;

 class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        while (this->next!=NULL)
        {
            delete next;
        }
        cout<<"Memory free for node with data  " <<val<<endl;
        
    }
 };

 void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode=new  Node(d);
        tail=newNode;
        newNode->next=newNode;
    }else
    {
        //If list is  not empty
        Node* curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }
    
 }

 void DeleteNode(Node*&tail,int value){

     if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    Node* prev=tail;
    Node* curr=prev->next;
    while (curr->data!=value)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
   //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;


 }

 void print(Node *&tail){

      if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    Node *temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
 }

int main()
{
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);

    DeleteNode(tail,5);
    print(tail);
    return 0;
}