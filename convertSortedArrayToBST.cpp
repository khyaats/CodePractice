#include<vector>

// Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
private:
    TreeNode* buildBST(const std::vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr; // Base case: empty range
        }

        int mid = left + (right - left) / 2; // Calculate middle index
        TreeNode* root = new TreeNode(nums[mid]); // Create root node with middle element

        root->left = buildBST(nums, left, mid - 1); // Recursively build left subtree
        root->right = buildBST(nums, mid + 1, right); // Recursively build right subtree

        return root;
    }
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }
};