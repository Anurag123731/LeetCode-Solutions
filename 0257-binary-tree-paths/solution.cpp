class Solution {
public:
    void treepaths(TreeNode* root,string s,vector<string>&v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val);
            v.push_back(s);
            return;
        };
        s+=to_string(root->val);
        s+="->";
        treepaths(root->left,s,v);
        treepaths(root->right,s,v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        treepaths(root,s,v);
        return v;
    }
};
