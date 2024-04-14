class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;//To Store Triplets
        int n=nums.size();
        for(int i=0;i<n;i++){
            set <int> hashset ;//JO har baar resert hoga loop complete hone pe;
            for(int j=i+1 ;j<n;j++){
                int third=-(nums[i]+nums[j]);
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
              vector<vector<int>> ans(st.begin(),st.end());
              return ans; 
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
};
