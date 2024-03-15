************************************************************/
pair<int, int> predecessorSuccessor(TreeNode *root, int key) {
    TreeNode *temp = root;
    int predecessor = -1;
    int successor = -1;

    // Traverse the tree to find the node with the given key
    while (temp != nullptr && temp->data != key) {
        if (temp->data > key) {
            successor = temp->data;
            temp = temp->left;
        } else {
            predecessor = temp->data;
            temp = temp->right;
        }
    }

    if (temp) {
        // If the key exists in the tree
        if (temp->left) {
            // Find predecessor
            TreeNode *leftTree = temp->left;
            while (leftTree->right != nullptr) {
                leftTree = leftTree->right;
            }
            predecessor = leftTree->data;
        }

        if (temp->right) {
            // Find successor
            TreeNode *rightTree = temp->right;
            while (rightTree->left != nullptr) {
                rightTree = rightTree->left;
            }
            successor = rightTree->data;
        }
    }

    return {predecessor, successor};
}