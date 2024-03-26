





#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

	class BinaryTreeNode {
		
	public :
		int data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;

		BinaryTreeNode(int data) {
		this -> left = NULL;
		this -> right = NULL;
		this -> data = data;
		}
	};

*************************************************************/
void inorder(BinaryTreeNode* root,vector<int>&ans){
	if(root==NULL){
		return;
	}
	inorder(root->left, ans);
	ans.push_back(root->data);
	inorder(root->right, ans);
}

void preorderFill(BinaryTreeNode* root,vector<int>&ans,int &index){
	if(root==NULL){
		return;
	}
	root->data=(ans[index++]);
	preorderFill(root->left,ans,index);
	preorderFill(root->right, ans, index);
	
	inorder(root->right, ans);
}



BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int> ans;
	inorder(root,ans);

	int index=0;
	preorderFill(root,ans,index);

	return root;
}