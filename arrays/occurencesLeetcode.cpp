#include<iostream>
#include<map>
#include<set>
#include<vector>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto it:mp){
            int frequency=it.second;
            s.insert(frequency);
        }
        return s.size()==mp.size();
    }
};