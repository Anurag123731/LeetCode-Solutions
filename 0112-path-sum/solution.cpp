class Solution {
public:
    bool helper(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL) {
            targetSum-=root->val;
            return targetSum==0;
        }
        targetSum -= root->val;
        return helper(root->left, targetSum) || helper(root->right, targetSum);
    }
        bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum);
    }
};

