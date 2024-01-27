/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode*  findMid(ListNode*head){
    ListNode*slow=head;
    ListNode* fast=head;
    while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* Merge(ListNode* left,ListNode* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    ListNode* ans=new ListNode(-1);
   ListNode* temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->val<right->val){
            temp->next=left;
            temp=left;
            left=left->next;
        }else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){
        temp->next=right;
            temp=right;
            right=right->next;
    }
    ans=ans->next;
    return ans;
}
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL|| head->next==NULL){
        return head;
     }
       ListNode* mid=findMid(head);
        ListNode* left=head;
        ListNode*right=mid->next;
        mid->next=NULL;
        //Solve Recursively
        left=sortList(left);
        right=sortList(right);
        //Merging Two List
        ListNode*ans=Merge(left,right);
        return ans;
    }
};