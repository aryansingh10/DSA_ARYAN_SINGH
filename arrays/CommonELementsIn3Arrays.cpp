class Solution {
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        vector<int> ans;
        
        int i = 0, j = 0, k = 0;
        
        while (i < n1 && j < n2 && k < n3) {
            // If the current elements of all three arrays are equal
            if (A[i] == B[j] && B[j] == C[k]) {
                         if (ans.empty() || ans.back() != A[i]) {
                    ans.push_back(A[i]);
                }
                i++;
                j++;
                k++;
            }
            // Increment the index of the smallest element
            else if (A[i] < B[j]) {
                i++;
            } else if (B[j] < C[k]) {
                j++;
            } else {
                k++;
            }
        }
        
        return ans;
    }
};