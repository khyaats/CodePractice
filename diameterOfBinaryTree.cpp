#include <utility>
#include <algorithm>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    std::pair<int, int> dfs(TreeNode* node) {
        if (node == nullptr)
            return { 0, 0 };

        auto left = dfs(node->left);
        auto right = dfs(node->right);

        int height = 1 + std::max(left.first, right.first);
        int diameter = std::max(std::max(left.second, right.second), left.first + right.first);

        return { height, diameter };
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).second;
    }
};