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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        
        while(curr||!stk.empty()){
            if(curr){
                result.push_back(curr->val);
                stk.push(curr->right);
                curr = curr->left;
            }else{
                curr = stk.top();
                stk.pop();
            }
        }
        return result;
        // if(root==nullptr){
        //     return result;
        // }

        // result.push_back(root->val);



        // while(root->right){

        // }
        // vector<int> left = preorderTraversal(root->left);
        // result.insert(result.end(), left.begin(), left.end());

        // // Recursively traverse the right subtree
        // vector<int> right = preorderTraversal(root->right);
        // result.insert(result.end(), right.begin(), right.end());

        // return result;

    }
};