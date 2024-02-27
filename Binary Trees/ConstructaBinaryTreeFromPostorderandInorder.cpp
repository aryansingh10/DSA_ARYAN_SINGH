
void mappingnodeToIndex(int in[], map<int, int> &nodeToIndex, int n) {
        for (int i = 0; i < n; i++) {
            nodeToIndex[in[i]] = i;
        }
    }
    
    
     Node* solve(int in[], int post[], int &postOrderIndex, int inOrderStart, int inOrderEnd, int n, map<int, int> &nodeToIndex) {
        if (postOrderIndex <0 || inOrderStart > inOrderEnd) {
            return nullptr;
        }

        int element = post[postOrderIndex--];
        Node* root = new Node(element);
        int position = nodeToIndex[element];

        // Recursive Call
         root->right = solve(in, post, postOrderIndex, position + 1, inOrderEnd, n, nodeToIndex);
        root->left = solve(in, post, postOrderIndex, inOrderStart, position - 1, n, nodeToIndex);
       
        return root;
    }



Node *buildTree(int in[], int post[], int n) {
    
    int postOrderIndex = n-1;
        map<int, int> nodeToIndex;
        mappingnodeToIndex(in, nodeToIndex, n);
        Node* ans = solve(in, post, postOrderIndex, 0, n - 1, n, nodeToIndex);
        return ans;
}