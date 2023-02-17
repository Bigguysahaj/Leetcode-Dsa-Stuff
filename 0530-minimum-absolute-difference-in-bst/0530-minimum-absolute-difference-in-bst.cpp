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
    int minDiff = INT_MAX;
    int prev = -3000;
    int getMinimumDifference(TreeNode* root) {
        if(!root){
            return minDiff;
        }
        
        getMinimumDifference(root->left);
//         using inorder traversal
        minDiff = min(abs(prev-root->val),minDiff);
        prev = root->val;
        getMinimumDifference(root->right);
        
        return minDiff;
    }
};