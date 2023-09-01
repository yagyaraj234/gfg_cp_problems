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
    void traverseTree(TreeNode *root,vector<int> &res){

        // Base Case
        if(root == NULL){
            res.push_back(-1);
            return ;
        }

        traverseTree(root->left,res);
        traverseTree(root->right,res);
        res.push_back(root->val);


    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int> ans1;
        vector<int> ans2;

        traverseTree(p,ans1);
        traverseTree(q,ans2);

        if(ans1.size() != ans2.size() ){
            return false;
        }

        for(int i=0;i<ans1.size();i++){
            if(ans1[i]!=ans2[i]){
                return false;
            }
        }

        return true;
        
    }
};