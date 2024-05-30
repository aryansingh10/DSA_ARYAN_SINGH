class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int ans=0;
        
        unordered_map<int,int> hashMap;
        
        for(int i=0;i<n;i++){
            
            if(hashMap.find(k-arr[i])!=hashMap.end()){
                ans+=hashMap[k-arr[i]];
            }
            
            hashMap[arr[i]]++;
        }
        
        return ans;
        
    }
};