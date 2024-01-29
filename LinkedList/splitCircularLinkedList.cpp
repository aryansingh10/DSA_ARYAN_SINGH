
void splitCircularList(Node *head)
{
    Node* slow=head;
    Node * fast=head;
    while(fast->next!=head && fast ->next->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* head1_ref=head;
    Node*head2_ref=slow->next;
    slow->next=head1_ref ;

    Node * curr=head2_ref;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=head2_ref;

}