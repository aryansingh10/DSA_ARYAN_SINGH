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