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
    // vector<int>v;
    // int level = 0;
    // vector<int> rightSideView(TreeNode* root) {
    //     if(!root) return v;

    //     v.push_back(root->val);
    //     if(root->right){
    //         rightSideView(root->right);
    //     }else{
    //         rightSideView(root->left);
    //     }
    //     return v;
    // } solves 158/216 cases

// above approach was dfs now trying bfs
vector<int>v;
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return v;

        queue<TreeNode*>queue;
        queue.push(root);
        
        while(!queue.empty()){
            int size = queue.size();
            vector<int>level;
            for(int i=0; i<size; i++){
                TreeNode* curr = queue.front();
                level.push_back(curr->val);
                queue.pop();
                if(curr->left)queue.push(curr->left);
                if(curr->right)queue.push(curr->right);
            }
            v.push_back(level[level.size()-1]);
        }
        return v;
    }
};