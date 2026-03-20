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
    void inorder(TreeNode* root, vector<int>&vec){
        if(!root)return;
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>vec;
        inorder(root, vec);
        int n = vec.size()-1, i=0;
        int sum =0;
        while(i<n){
            sum = vec[i] + vec[n];
            if(sum == k){
                return true;
            }else if(sum < k){
                i++;
            }else {
                n--;
            }    
        }
        return false;
    }
};