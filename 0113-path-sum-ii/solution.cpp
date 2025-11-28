   class Solution {
    public:
    void helper(vector<vector<int>>&ans,vector<int>v,TreeNode*root,int targetSum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(root->val==targetSum){
                v.push_back(root->val);
                ans.push_back(v);
                return;
            }
        }
        targetSum-=root->val;
        v.push_back(root->val);
        helper(ans,v,root->left,targetSum);
        helper(ans,v,root->right,targetSum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        vector<vector<int>>ans;
        helper(ans,v,root,targetSum);
        return ans;
    }
};
