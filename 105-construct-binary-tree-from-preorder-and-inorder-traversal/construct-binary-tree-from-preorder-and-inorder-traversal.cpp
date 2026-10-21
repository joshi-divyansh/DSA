/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
unordered_map<int, int> inorderMap;
    int preorderIndex = 0;

    TreeNode* buildTreeHelper(const vector<int>& preorder, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int inorderIndex = inorderMap[rootVal];

        root->left = buildTreeHelper(preorder, left, inorderIndex - 1);
        root->right = buildTreeHelper(preorder, inorderIndex + 1, right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preorderIndex = 0;
        inorderMap.clear();
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }

        return buildTreeHelper(preorder, 0, inorder.size() - 1);
    }
};