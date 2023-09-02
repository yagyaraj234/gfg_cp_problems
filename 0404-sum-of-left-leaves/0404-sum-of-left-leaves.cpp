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
    int sum=0;
    void leftSum(TreeNode *root){
        if(root == NULL) return ;
        
        sumOfLeftLeaves(root->left);
        if(root->left!=NULL && root->left->left == NULL && root->left->right== NULL){
            sum+=root->left->val;
        }
        sumOfLeftLeaves(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {

        leftSum(root);

        return sum;
        
        
    }
};