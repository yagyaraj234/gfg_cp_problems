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
    void sumTree(TreeNode* &root,int &res){
        if(root == NULL){
            return ;
        }

        sumTree(root->right,res);
        root->val+=res;
        res = root->val;
        sumTree(root->left,res);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
            int res=0;
        if(root== NULL){
            return root;
        }
        sumTree(root,res);

        return root;

        
    }
};