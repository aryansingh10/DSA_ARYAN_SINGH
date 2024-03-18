void inorder(BinaryTreeNode<int>* root,vector<int>&in){
      if(root==NULL){
          return;
      }
      inorder(root->left,in);
      in.push_back(root->data);
      inorder(root->right,in);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {

   vector <int> ionorderVal;
   inorder(root,ionorderVal);
   int i=0;
   int j=ionorderVal.size()-1;

 while(i<j){
     int sum=ionorderVal[i]+ionorderVal[j];

     if(sum==target){
         return true;
     }else if(sum>target){
         j--;
     }else{
         i++;
     }
 }
 return false;


}