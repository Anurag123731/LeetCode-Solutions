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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>fans;
        if(root==NULL) return fans;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0){
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                }
            ans.push_back(v);
        }
        for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1){
                fans.push_back(ans[i][j]);
            }
        }
    }
        return fans;
    }
};
