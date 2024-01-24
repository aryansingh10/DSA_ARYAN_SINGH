Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node*curr=head;

    while(curr!=NULL){
        if((curr->next!=NULL)&& (curr->data==curr->next->data)){
               
               Node* next_next=curr->next->next;
               Node* todelete=curr->next;
               delete (todelete);
               curr->next=next_next;
        }else{
            curr=curr->next;
        }
    }
    return head;
}
