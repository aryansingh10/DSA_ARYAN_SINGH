class Solution
{
    public:
    
    // Function to reverse the linked list
    Node* reverse(Node* head) {
        if (head == NULL) {
            return head;
        }
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    // Function to add one to the number represented by the linked list
    Node* addOne(Node *head) 
    {
        // Reverse the linked list
        head = reverse(head);
        
        int carry = 1;
        Node* temp = head;
        
        while (temp != NULL) {
            temp->data = temp->data + carry;
            if (temp->data < 10) {
                carry = 0;
                break;
            } else {
                temp->data = 0;
                carry = 1;
            }
            
            if (temp->next == NULL && carry == 1) {
                Node* newNode = new Node(carry);
                temp->next = newNode;
                carry = 0;
            }
            
            temp = temp->next;
        }
        
        // Reverse the list back to its original order
        head = reverse(head);
        return head;
    }
};
