class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    long long minDiff=INT_MAX;
    int i=0;
    int j=m-1;
    
    while(j<n){
        long long diff=a[j]-a[i];
        minDiff=min(minDiff,diff);
        i++;
        j++;
    }
    
    return minDiff;
    
    }   
};









#include <bits/stdc++.h> 
int findMinDiff(int n, int m, vector<int> chocolates) {
    sort(chocolates.begin(),chocolates.end());
int min=INT_MAX;
for(int i=0;i+m-1<n;i++){
    int d=chocolates[i+m-1]-chocolates[i];
    if(d<min){
        min=d;
    }
}
return min;
}
