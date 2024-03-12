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


Node* minvalue(Node* root){
    Node* temp=root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp=root;
    while (temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}

Node* NodetoDelete(Node* root,int data){
    if(root==NULL){
        return root;
    }
    if(root->data==data){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if (root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if (root->right!=NULL && root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //If the node has two children
        if (root->left!=NULL && root->right!=NULL)
        {
            Node* mini=minvalue(root->right);
            root->data=mini->data;
            root->right=NodetoDelete(root->right,mini->data);
            return root;
        }
        
    }else if(root->data>data){
        root->left=NodetoDelete(root->left,data);
        }else
        {
            root->right=NodetoDelete(root->right,data);
        }
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

    NodetoDelete(root,5);
     levelOrderTraversal(root);
    cout<<"Inorder Traversal is:"<<endl;
    inorder(root);

    return 0;
}