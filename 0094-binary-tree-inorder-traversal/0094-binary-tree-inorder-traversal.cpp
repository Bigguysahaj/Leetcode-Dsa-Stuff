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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        
        
        while(curr||!s.empty()){
            while(curr){
                
                s.push(curr);
                curr = curr->left;           

            }
                
                curr = s.top();
                
                s.pop();
                result.push_back(curr->val);
                curr = curr->right;
        
//         recursive way
//         vector<int>result;    
//         if(root==nullptr){
//             return result;
//         }

//         vector<int> left = inorderTraversal(root->left);
//         result.insert(result.oend(), left.begin(), left.end());

//         result.push_back(root->val);
        
//         vector<int> right = inorderTraversal(root->right);
//         result.insert(result.end(), right.begin(), right.end());
        }
        return result;
    }
};