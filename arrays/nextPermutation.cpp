class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(); // array ka size

        // Step 1: Break point dhundho:
        int ind = -1; // Break point
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                // index i ko break point samjho
                ind = i;
                break;
            }
        }

        // Agar break point nahi mila:
        if (ind == -1) {
            // pura array ulta karo:
            reverse(nums.begin(), nums.end());
            return; // Return after reversing the array
        }

        // Step 2: Agla bada element dhoondho
        //         aur usko arr[ind] ke sath swap karo:
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: daaye taraf ka hissa ulta karo:
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
