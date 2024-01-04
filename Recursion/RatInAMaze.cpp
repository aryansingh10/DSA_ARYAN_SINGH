//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    bool isSafe(int newx,int newy,vector<vector<int>> visited,vector<vector<int>> &m,int n){
        if((newx>=0 && newx<n) &&(newy>=0 &&newy<n) && (visited[newx][newy]==0) && (m[newx][newy]==1)){
            return true;
        }else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m,int n,int srcx,int srcy,vector<string> &ans,vector<vector<int>> visited,string path){
          
          if(srcx ==n-1 && srcy==n-1) {
              ans.push_back(path);
              return ;
          }     
          
          visited[srcx][srcy]=1;
          //4 Cases down/left/right/up
            //1 for Down
            
          int newx=srcx+1;
          int newy=srcy;
          if(isSafe(newx,newy,visited,m,n)){
              path.push_back('D');
              solve(m,n,newx,newy,ans,visited,path);
              path.pop_back();
          }
          //left
          newx=srcx;
           newy=srcy-1;
            if(isSafe(newx,newy,visited,m,n)){
              path.push_back('L');
              solve(m,n,newx,newy,ans,visited,path);
              path.pop_back();
          }
          //Right
          newx=srcx;
          newy=srcy+1;
           if(isSafe(newx,newy,visited,m,n)){
              path.push_back('R');
              solve(m,n,newx,newy,ans,visited,path);
              path.pop_back();
          }
          
          newx=srcx-1;
          newy=srcy;
           if(isSafe(newx,newy,visited,m,n)){
              path.push_back('U');
              solve(m,n,newx,newy,ans,visited,path);
              path.pop_back();
          }
          
          
          visited[srcx][srcy]=0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
         vector<string> ans;
         if(m[0][0]==0){
             return ans;
         }
         vector<vector<int>> visited=m;
         int srcx=0;
         int srcy=0;
         string path="";
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 visited[i][j]=0;
             }
         }
         
         solve(m,n,srcx,srcy,ans,visited,path);
         return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends