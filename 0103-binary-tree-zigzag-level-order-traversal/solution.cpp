class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL) return ans;
        q.push(root);
        int count=1;
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
            if(count%2!=0) ans.push_back(v);
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            count++;
        }
        return ans;
    }
};
