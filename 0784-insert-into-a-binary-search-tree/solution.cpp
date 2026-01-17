class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode*node=new TreeNode(val);
            return node;
        }
        if(root->left==NULL && val<root->val){
            TreeNode* node=new TreeNode(val);
            root->left=node;
        }
        else if(root->right==NULL && val>root->val){
            TreeNode* node=new TreeNode(val);
            root->right=node;
        }
        else if(val<root->val) insertIntoBST(root->left,val);
        else insertIntoBST(root->right,val);
        return root;

    }
};
