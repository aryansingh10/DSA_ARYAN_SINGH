class Solution {
public:
    void solve(Node* root, int k, int &count, vector<int> &path) {
        if (root == nullptr)
            return;

        path.push_back(root->data);

        // Compute the cumulative sum of the path
        int sum = 0;
        for (int i = path.size() - 1; i >= 0; i--) {
            sum += path[i];
            if (sum == k)
                count++;
        }

        solve(root->left, k, count, path);
        solve(root->right, k, count, path);

        // Backtrack: Remove the current node from the path
        path.pop_back();
    }

    int sumK(Node *root, int k) {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};