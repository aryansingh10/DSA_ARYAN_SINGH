#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
    ~Node(){
        int val=this->data;
        cout<<"The node that deleted are"<<val<<endl;
    }
};

void insertion(Node*& head, int element, int data) {
    Node* newNode = new Node(data);

    // If the list is empty, create the first node and point it to itself
    if (head == nullptr) {
        head = newNode;
        newNode->next = newNode;
    } else {
        Node* curr = head;
        do {
            if (curr->data == element) {
                newNode->next = curr->next;
                curr->next = newNode;
                return;
            }
            curr = curr->next;
        } while (curr != head);
    }
}

  void deletion(Node *&head,int value){
          if(head==NULL){
            cout<<"Empty list";
          }
          Node* prev=head;
          Node* curr=prev->next;
          while (curr->data!=value)
          {
            /* code */
            prev=curr;
            curr=curr->next;
          }
          prev->next=curr->next;
          curr->next=NULL;
          delete curr;
          
  }

void print(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Correct way to initialize the first node
    if (head == nullptr) {
        head = new Node(3);
        head->next = head; // Point to itself to make it circular
    }

    // Now perform other insertions
    insertion(head, 3, 32); // Insert after 3
    insertion(head, 32, 28); // Insert after 32    
    insertion(head, 28, 98); // Insert after 32    
    deletion(head,28);


    print(head);

    return 0;
}
