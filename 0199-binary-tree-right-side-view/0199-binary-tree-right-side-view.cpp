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
    void leftNode(TreeNode* root,vector<int> &ans,int lvl){
    if(root== NULL) return;
    
    if(lvl == ans.size()){
        
    ans.push_back(root->val);
    }
    leftNode(root->right,ans,lvl+1);
    leftNode(root->left,ans,lvl+1);
}
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};

        vector<int> ans;
        leftNode(root,ans,0);

        return ans;
        
    }
};