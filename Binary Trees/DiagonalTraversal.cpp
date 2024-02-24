void solve(Node *root,int horiDist, map<int,vector<int>> &diagonal){
    
    if(root==NULL){
        return;
    }
    
    diagonal[horiDist].push_back(root->data);
    
    solve(root->left,horiDist+1,diagonal);
      solve(root->right,horiDist,diagonal);
      
}

vector<int> diagonal(Node *root)
{
  map<int,vector<int>> diagonal;
  vector <int> ans;
  solve(root,0,diagonal);
  
  for(auto i: diagonal){
      for(auto j:i.second){
          ans.push_back(j);
      }
  }
  return ans;
}