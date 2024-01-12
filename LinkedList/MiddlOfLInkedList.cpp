Node *findMiddle(Node *head) {
    // Write your code here
    Node*slow=head;
    Node*fast=head->next;

// empty list
if(head==NULL || head->next==NULL){
    return head;
}
 //if two nodes
 if(head->next->next==NULL){
     return head->next;
 }
   while(fast!=NULL){
       fast=fast->next;
       if(fast!=NULL){
           fast=fast->next;
       }
       slow=slow->next;
   } 
   return slow;
\

int findLength(Node*head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int len=findLength(head);
    int ans=len/2;
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}