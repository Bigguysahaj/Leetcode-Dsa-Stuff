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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        
        if(!root) return v;

        queue<TreeNode*>q;
        q.push(root);
        // v.push_back({root->val});
        
        
        while(!q.empty()){
            
            int size=q.size();
            vector<int>level;
            for(int i=0; i<size; i++){
                // this for loop puts all the left and rights of root to queue
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            // all the elements of queue, comes to be the new roots now.
            
            // treev.push_back(curr->val);
            
            
            v.push_back(level);

        }
        return v;
    }
};
