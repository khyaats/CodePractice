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
    // Helper function to check if two trees are identical
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both are null, they are identical
        if (!p && !q) {
            return true;
        }
        // If one is null and the other is not, they are not identical
        if (!p || !q) {
            return false;
        }
        // If values don't match, they are not identical
        if (p->val != q->val) {
            return false;
        }
        // Recursively check left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
            return false; // Since subRoot is not guaranteed to be null here
        }

        // Check if the current 'root' subtree is identical to 'subRoot'
        if (isSameTree(root, subRoot)) {
            return true;
        }

        // Recursively check if 'subRoot' is a subtree of 'root->left'
        // or 'root->right'
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};