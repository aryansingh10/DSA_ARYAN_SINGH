#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverse(LinkedListNode<int> *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int> * chotahead=reverse(head->next);
    head->next->next=head;
    head->next =NULL;
    return chotahead;


}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse(head);
}
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void reverse(LinkedListNode<int> *&head,LinkedListNode<int>*&curr,LinkedListNode<int>*& prev ){

    //base case

    if(curr==NULL){

        head=prev;

        return;

    }

    LinkedListNode<int>*forward=curr->next;

    reverse(head,forward,curr);

    curr->next=prev;

}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 

{

    LinkedListNode<int>* prev=NULL;

    LinkedListNode<int>* curr=head;

 

    reverse(head,curr,prev);

    return head;


   
//      while(curr!=NULL){
//          forward=curr->next;
//          curr->next=prev;
//          prev=curr;
//          curr=forward;
//      }
// return  prev;  
}