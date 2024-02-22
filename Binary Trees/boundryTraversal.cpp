
class Solution {
public:

     void traverseleft(Node*root,vector <int> &ans){
         
         if(root==NULL||root->left==NULL&& root->right==NULL){
             return;
         }
         
         ans.push_back(root->data);
         
         if(root->left){
             traverseleft(root->left,ans);
         }else{
             traverseleft(root->right,ans);
         }
     }

void traverseleaf(Node*root,vector <int> &ans){
    
    if(root==NULL){
    return;
}

if(root->left==NULL && root->right==NULL){
    ans.push_back(root->data);
    return;
}
    traverseleaf(root->left,ans);
      traverseleaf(root->right,ans);
}

  void traverseright(Node*root,vector <int> &ans){
      
      if(root==NULL||root->left==NULL&& root->right==NULL){
             return;
         }
         
         if(root->right){
             traverseright(root->right,ans);
         }else{
               traverseright(root->left,ans);
         }
         ans.push_back(root->data);
  }

   

    vector <int> boundary(Node *root)
    {
        
    vector <int> ans;
    if(root==NULL){
        return ans;
    }
    
    ans.push_back(root->data);
      traverseleft(root->left,ans);
      traverseleaf(root->left,ans);
      traverseleaf(root->right,ans);
      traverseright(root->right,ans);
    
     return ans;
    }
};