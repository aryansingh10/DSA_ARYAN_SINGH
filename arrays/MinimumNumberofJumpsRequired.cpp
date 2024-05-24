class Solution {
public:
    int minJumps(int arr[], int n) {
        // If the array has only one element, no jumps are needed.
        if (n <= 1) {
            return 0;
        }
        
        // If the first element is 0, we cannot move anywhere.
        if (arr[0] == 0) {
            return -1;
        }
        
        // Initialize the maximum reachable index, steps, and jumps
        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;

        // Start traversing the array
        for (int i = 1; i < n; i++) {
            // Check if we have reached the last element
            if (i == n - 1) {
                return jump;
            }
            
            // Update the maximum reachable index
            maxReach = std::max(maxReach, i + arr[i]);

            // Use a step to get to the current index
            step--;

            // If no further steps remain
            if (step == 0) {
                // Increment the jump count
                jump++;

                // Check if the current index is beyond the maximum reachable index
                if (i >= maxReach) {
                    return -1;
                }

                // Reinitialize the steps to the amount of steps to reach maxReach from position i
                step = maxReach - i;
            }
        }

        return -1;  // If we have traversed the array without reaching the end
    }
};