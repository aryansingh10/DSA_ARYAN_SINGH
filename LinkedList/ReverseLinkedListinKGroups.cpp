/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int getlength(Node*head){
    int length=0;
    Node*temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
Node* kReverse(Node* head, int k) {
    
    int length=getlength(head);
    if(length<k){
        return head;
    }



    if(head==NULL){
        return  NULL;
    }
    


    Node*prev=NULL;
    Node*curr=head;
    Node*next=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){
        head->next=kReverse(next, k);   
    }
    return prev;
}