************************************************************/
void inorder(TreeNode<int>* root,vector<int>&in){
      if(root==NULL){
          return;
      }
      inorder(root->left,in);
      in.push_back(root->data);
      inorder(root->right,in);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
   vector <int> ionorderVal;
   inorder(root,ionorderVal);
   TreeNode <int>* newroot=new TreeNode<int>(ionorderVal[0]);
   TreeNode<int>* curr=newroot;

   for(int i=1;i<ionorderVal.size();i++){
       TreeNode <int>* temp=new TreeNode<int>(ionorderVal[i]);
       curr->left=NULL;
       curr->right=temp;
       curr =temp;
   }
   return newroot;
}
