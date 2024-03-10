#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
       this ->data=d;
       this->right=NULL;
       this->left=NULL;
    }
};

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}


Node * insertIntoBST(Node* root,int data){
    if (root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(data>root->data){
       root->right=insertIntoBST(root->right,data);
    }else
    {
        root->left=insertIntoBST(root->left,data);
    }
    return root;    
}

void levelOrderTraversal(Node *& root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        if (temp==NULL)
        {
            cout<<endl;
        
        if (!q.empty())      
        {
            q.push(NULL);
        }
    }else
    {
        cout<<temp->data<<" ";
        
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        
        
    }
    
}
}

void getInput(Node*&root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    while (data!=-1)
    {
       root= insertIntoBST(root,data);
        cin>>data;
    }
    
}

int main()
{
    Node * root=NULL;
    getInput(root);
    levelOrderTraversal(root);
    cout<<"Inorder Traversal is:"<<endl;
    inorder(root);
    return 0;
}