BinaryTreeNode<int> *solve(vector<int> &preorder, int mini, int maxi,int &i) {

    if(i>= preorder.size()){

        return NULL;

    }

    if(preorder[i] < mini || preorder[i] > maxi){

        return nullptr;

    }

    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(preorder[i++]);

    root->left = solve(preorder,mini,root->data,i);

    root->right = solve(preorder,root->data,maxi,i);

    return root;

}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {

   int mini = INT_MIN;

   int i = 0;

   int maxi = INT_MAX;

  return solve(preorder,mini,maxi,i);

}