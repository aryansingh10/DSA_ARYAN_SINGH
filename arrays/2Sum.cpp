class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mapping;
      int n=nums.size();
      vector<int> ans;
      for(int i=0;i<n;i++){
        if(mapping.find(target-nums[i])!= mapping.end()){
            ans.push_back(mapping[target-nums[i]]);
            ans.push_back(i);
        } 
        mapping[nums[i]]=i;
      }
      return ans;
    }

};