#include <bits/stdc++.h> 

bool isPossible(vector<int> &rank, int m,int mid){
    int paratha=0;
    int time=0;
    for(int i=0;i<rank.size();i++){
        time=rank[i];
        int j=2;
        while(time<=mid){
            paratha++;
            time=time+(rank[i]*j);
            j++;
        }
        if(paratha>=m)return true;
    }
    return false;

}

int minCookTime(vector<int> &rank, int m)
{
    int start=0;
    int end=1e8;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(rank,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
