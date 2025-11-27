class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        if(root==NULL) return {};
        st.push(root);
        while(st.size()>0){
            TreeNode*temp=st.top();
            st.pop();
            v.push_back(temp->val);
            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
