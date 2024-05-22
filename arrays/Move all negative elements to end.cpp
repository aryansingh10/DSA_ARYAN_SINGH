class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
      vector<int> ans;
      for(int i=0;i<n;i++){
          if(arr[i]>=0){
              ans.push_back(arr[i]);
          }
      }
      
      for(int i=0;i<n;i++){
          if(arr[i]<0){
              ans.push_back(arr[i]);
          }
      }
      
      for(int i=0;i<n;i++){
          arr[i]=ans[i];
      }
    }
};
//
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        stack<int>m;
        // Push negative elements into the stack in reverse order
        for(int i = n - 1; i >= 0; i--){
            if(arr[i]<0){
                m.push(arr[i]);
            }
        }
         // Rearrange positive elements in the array
        
        int j=0;
        for(int i=0;i<n ;i++){
            if(arr[i]>=0){
                arr[j++] = arr[i];
            }
        }
        
        while(!m.empty()) {
        arr[j++] = m.top();
        m.pop();
    }
    }
       
};