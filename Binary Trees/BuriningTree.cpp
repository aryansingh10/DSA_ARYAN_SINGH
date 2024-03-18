class Solution {
public:
    Node* createMapping(Node* root, int target, map<Node*, Node*>& nodeToParent) {
        Node* res = nullptr;
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = nullptr;
        while (!q.empty()) {
            Node* front = q.front();
            q.pop();
            if (front->data == target) {
                res = front;
            }
            if (front->left) {
                q.push(front->left);
                nodeToParent[front->left] = front;
            }
            if (front->right) {
                q.push(front->right);
                nodeToParent[front->right] = front;
            }
        }
        return res;
    }

    int burnTree(Node* targetNode, map<Node*, Node*>& nodeToParent) {
        int ans = 0;
        queue<Node*> q;
        map<Node*, bool> visited;
        q.push(targetNode);
        visited[targetNode] = true;

        while (!q.empty()) {
            int size = q.size();
            bool flag = false;
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();

                if (temp->left && !visited[temp->left]) {
                    q.push(temp->left);
                    visited[temp->left] = true;
                    flag = true;
                }

                if (temp->right && !visited[temp->right]) {
                    q.push(temp->right);
                    visited[temp->right] = true;
                    flag = true;
                }

                if (nodeToParent[temp] && !visited[nodeToParent[temp]]) {
                    q.push(nodeToParent[temp]);
                    visited[nodeToParent[temp]] = true;
                    flag = true;
                }
            }
            if (flag) // Increment answer only if there are burnt nodes
                ans++;
        }
        return ans;
    }

    int minTime(Node* root, int target) {
        map<Node*, Node*> nodeToParent;
        Node* targetNode = createMapping(root, target, nodeToParent);
        int result = burnTree(targetNode, nodeToParent);
        return result;
    }
};