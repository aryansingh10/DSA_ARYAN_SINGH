/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

#include<vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    
    bool checkPalindrome(vector <int> arr){
        
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }else{
                s++;
                e--;
            }
        }
        return 1;
    }
    
    
    bool isPalindrome(Node *head)
    {
        vector <int> arr;
        Node * temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(arr);
    }
};
 //Second SOL

 /*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome
    
        Node* Reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* getMid(Node* head){
        Node* slow=head;
        Node*fast =head;
        while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    
    
    
    
    bool isPalindrome(Node *head)
    {
        Node * middle=getMid(head);
        Node*temp=middle->next;
        middle->next =Reverse(temp);
            Node*head1=head;
            Node*head2=middle->next;
        while(head2!=NULL){
            if(head1->data!= head2->data){
                return false;
            }else{
                head1=head1->next;
                head2=head2->next;
            }
        }
       temp=middle->next;
        middle->next =Reverse(temp);
        return true;
    }
};
