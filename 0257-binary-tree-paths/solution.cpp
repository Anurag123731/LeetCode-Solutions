class Solution {
public:
void helper(TreeNode*root,vector<string>&ans,string s){
    if(root->left==NULL && root->right==NULL){
        ans.push_back(s);
        return ;
    }
    if(root->left) helper(root->left,ans,s+"->"+to_string(root->left->val));
    if(root->right) helper(root->right,ans,s+"->"+to_string(root->right->val));
    return;
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s=to_string(root->val);
        helper(root,ans,s);
        return ans;



    }
};
