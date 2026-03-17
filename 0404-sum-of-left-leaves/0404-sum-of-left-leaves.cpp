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
    void check(TreeNode* root, int &sum){
        if(root==NULL)return;
        if(root->left != NULL){
            if(root->left->left == NULL && root->left->right==NULL){
                sum += root->left->val;
            }
            else {
                check(root->left, sum);
            }        
        }
        check(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        check(root, sum);
        return sum;
    }
};