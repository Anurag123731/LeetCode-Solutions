class Solution {
public:
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        TreeNode* temp=root;
        while(st.size()>0 || temp!=NULL){
            if(temp){
                st.push(temp);
                temp=temp->left;
            }
            else{
                TreeNode*node=st.top();
                st.pop();
                v.push_back(node->val);
                temp=node->right;
            }
        }
        return v;
    }
};
