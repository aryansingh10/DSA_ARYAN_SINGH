#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i=0;i<k;i++){
        int size=kArrays[i].size();
        for(int j=0;j<size;j++){
            minHeap.push(kArrays[i][j]);
        }
    }
vector<int> ans;
    while(!minHeap.empty()){
        ans.push_back(minHeap.top());
        minHeap.pop();
    }
    return ans;
}

#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> ans;

    for(int i=0;i<k;i++){

        int n= kArrays[i].size();

         for(int j=0;j<n;j++){

             ans.push_back(kArrays[i][j]);

         }

    }

    sort(ans.begin(),ans.end());

    return ans;
}
