Node* sortList(Node *head){
   int zerocount=0;
   int onecount=0;
   int twocount=0;

   Node* temp=head;
   while(temp!=NULL){
       if(temp->data==0){
           zerocount++;
       }else if(temp->data==1){
           onecount++;
       }else if(temp->data==2){
           twocount++;
       }
       temp=temp->next;
   }
   temp=head;
   while(temp!=NULL){
       if(zerocount!=0){
           temp->data=0;
           zerocount--;
       }else if(onecount!=0){
           temp->data=1;
           onecount--;
       }else if(twocount!=0){
           temp->data=2;
           twocount--;
       }
       temp=temp->next;
   }
   return head;
}
//
void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head){
    // Write your code here.

    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;

     Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;

     Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node * curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            insertAtTail(zeroTail,curr);
        }else if(curr->data==1){
            insertAtTail(oneTail,curr);
        }else if(curr->data==2){
            insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }

   //merge this list
   if(oneHead->next!=NULL){
      zeroTail->next=oneHead->next;
   }else{
       zeroTail->next=twoHead->next;
   }
   oneTail->next=twoHead->next;
   twoTail->next=NULL;
   head=zeroHead->next;
   delete oneHead;
   delete zeroHead;
   delete twoHead;
    return head;
}