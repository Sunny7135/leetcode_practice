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
    int search(vector<int>& inorder, int left, int right, int val){
        for(int i =left; i<=right; i++){
            if(inorder[i] == val)return i;
        }
        return -1;
    }
    TreeNode* check(vector<int>& preorder, vector<int>& inorder, int &pidx, int left, int right){
        if(left > right)return NULL;
        TreeNode* root = new TreeNode(preorder[pidx]);
        int inidx = search(inorder, left, right, preorder[pidx]);
        pidx++;
        root->left = check(preorder, inorder, pidx, left, inidx-1);
        root->right = check(preorder, inorder, pidx, inidx+1, right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pidx =0;
        return check(preorder, inorder, pidx, 0, inorder.size()-1);
    }
};