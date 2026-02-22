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
    void check(TreeNode* node, int k, int &ans, int &cnt){
        if(node==NULL)return;
        
        check(node->left, k, ans, cnt);
        cnt++;
        if(cnt==k){
            ans = node->val;
            return;
        }
        check(node->right, k, ans, cnt);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        int cnt=0;
        check(root, k, ans, cnt);
        return ans;
    }
};