void inorder(TreeNode<int>* root,vector<int>&in){
      if(root==NULL){
          return;
      }
      inorder(root->left,in);
      in.push_back(root->data);
      inorder(root->right,in);
}

TreeNode <int>* inorderTOBST(int s,int e,vector<int> &in){
    if(s>e){
        return nullptr;
    }
    int mid=(s+e)/2;
    TreeNode <int>* root=new TreeNode<int>(in[mid]);
    root->left=inorderTOBST(s, mid-1, in);
    root->right=inorderTOBST(mid+1, e, in);
    return root;
} 

TreeNode<int>* balancedBst(TreeNode<int>* root) {
vector <int> ionorderVal;
   inorder(root,ionorderVal);
    return inorderTOBST(0,ionorderVal.size()-1,ionorderVal);

}
