
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
public:
    // Helper function to check if two subtrees are mirror images
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        // Base case: If both nodes are null, they are symmetric
        if (!t1 && !t2) {
            return true;
        }
        // Base case: If one node is null and the other is not, they are not symmetric
        if (!t1 || !t2) {
            return false;
        }
        // If values are different, they are not symmetric
        if (t1->val != t2->val) {
            return false;
        }
        // Recursively check if:
        // 1. The left child of t1 mirrors the right child of t2
        // 2. The right child of t1 mirrors the left child of t2
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        }
        // Call the helper function to check if the left and right subtrees are mirrors
        return isMirror(root->left, root->right);
    }
};