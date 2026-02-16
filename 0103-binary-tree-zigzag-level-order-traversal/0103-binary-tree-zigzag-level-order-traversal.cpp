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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)return ans;
        queue<TreeNode*>q;
        int dec =0;
        q.push(root);
        bool lR = true;
        while(!q.empty()){
            int n = q.size();
            vector<int>level(n);
            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                int in = lR ? i: n-i-1;
                level[in] = temp->val;

                if(temp->left != NULL)q.push(temp->left);
                if(temp->right != NULL)q.push(temp->right);
            }
            lR = !lR;
            ans.push_back(level);
        }
        return ans;
    }
};