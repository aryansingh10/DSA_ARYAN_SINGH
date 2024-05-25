#include <unordered_set>

class Solution {
public:
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n) {
        // Create an unordered set to store the cumulative sums.
        unordered_set<int> sumSet;
        int sum = 0;

        // Traverse through the given array.
        for (int i = 0; i < n; ++i) {
            // Add the current element to the cumulative sum.
            sum += arr[i];

            // If the cumulative sum is zero or it has been seen before,
            // it means there is a subarray with zero sum.
            if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
                return true;
            }

            // Insert the cumulative sum into the set.
            sumSet.insert(sum);
        }

        // If no subarray with zero sum is found, return false.
        return false;
    }
};