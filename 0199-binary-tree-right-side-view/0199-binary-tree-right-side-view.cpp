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
    vector<int> rightSideView(TreeNode* root){
        vector<int>level;
        if(root == NULL)return level;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int k=0;
            for(int i=0; i<n; i++){
                k++;
                TreeNode* temp = q.front();
                q.pop();
                if(temp->right != NULL)q.push(temp->right);
                if(temp->left != NULL)q.push(temp->left);
                if(k <= 1)level.push_back(temp->val);
            }
        }
        return level;
    }
};