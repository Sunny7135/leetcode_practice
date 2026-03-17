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
    int i=0;
    TreeNode* check(int min, int max, vector<int>& preorder){
        if(i >= preorder.size())return NULL;
        int val = preorder[i];
        if(val < min || val > max)return NULL;
        i++;
        TreeNode* root = new TreeNode(val);
        root->left = check(min, val, preorder);
        root->right = check(val, max, preorder);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return check(INT_MIN, INT_MAX, preorder);
    }
};