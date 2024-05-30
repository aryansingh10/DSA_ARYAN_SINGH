
    class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        // Sort the array
        sort(arr, arr + n);
        
        // Initialize the result with the initial difference
        int ans = arr[n - 1] - arr[0];
        
        // Define the potential smallest and largest values after modifications
        int largest = arr[n - 1] - k;
        int smallest = arr[0] + k;
        int maxi, mini;
        
        // Iterate through the array elements
        for (int i = 0; i < n - 1; i++) {
            // Calculate the potential new maximum and minimum
            maxi = max(largest, arr[i] + k);
            mini = min(smallest, arr[i + 1] - k);
            
            // If the new minimum is negative, skip the iteration
            if (mini < 0) {
                continue;
            }
            
            // Update the answer with the minimum difference found
            ans = min(ans, maxi - mini); 
        }
        
        return ans;
    }
};
