void inorder(TreeNode *root,vector<int> &in){

    if(root== NULL){

        return;

    }

    inorder(root->left,in);

    in.push_back(root->data);

    inorder(root->right,in);

}

vector<int> mergeArrays(vector<int> a,vector<int> b){

  vector<int> ans(a.size() + b.size());

  int k = 0;

  int i = 0,j = 0;

  while(i < a.size() && j < b.size()){

      if(a[i] < b[j]){

         ans[k++] = a[i];

         i++;

      }

      else{

          ans[k++] = b[j];

          j++;

      }

  }

  while(i < a.size()){

      ans[k++] = a[i];

      i++;

  }

  while(j < b.size()){

      ans[k++] = b[j];

      j++;

  }

  return ans;

}

 

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)

{

    vector<int> bst1, bst2;

    inorder(root1,bst1);

    inorder(root2,bst2);

    vector<int> mergeArray = mergeArrays(bst1,bst2);

    return mergeArray;

}

