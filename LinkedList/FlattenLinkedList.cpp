/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* merge(Node* vertHead , Node* horzHead){

    if(vertHead == NULL)

    return horzHead;

    if(horzHead == NULL)

    return vertHead;

 

    Node* ans = new Node(-1);

    Node* tempHead = ans;

    while(vertHead!=NULL && horzHead!=NULL){

        if(vertHead->data <= horzHead->data){

            tempHead->child = vertHead;

            tempHead = vertHead;

            vertHead = vertHead->child;

        }

        else{

            tempHead->child = horzHead;

            tempHead = horzHead;

            horzHead = horzHead->child;

        }

    }

    while(vertHead!=NULL){

        tempHead->child = vertHead;

        tempHead = vertHead;

        vertHead = vertHead->child;

    }

    while(horzHead!=NULL){

        tempHead->child = horzHead;

        tempHead = horzHead;

        horzHead = horzHead->child;

    }

    ans = ans->child;

    return ans;

}

Node* flattenLinkedList(Node* head) 

 

{

 

    // Write your code here

 

    if(head==NULL || head->next == NULL) return head;

 

    Node* down = head;

 

    Node* right = flattenLinkedList(head->next);

 

    down->next=NULL;

 

    return merge(down,right);

 

}



