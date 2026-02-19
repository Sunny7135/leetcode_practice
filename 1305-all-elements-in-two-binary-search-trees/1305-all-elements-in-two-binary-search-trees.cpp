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
    void inorder(TreeNode* root, vector<int>&res){
        if(root == NULL)return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);

    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>res, res1, vec;
        inorder(root1, res);
        inorder(root2, res1);
        int i=0, j=0;
        while(i< res.size() && j<res1.size()){
            if(res[i] <= res1[j]){
                vec.push_back(res[i++]);
            }else{
                vec.push_back(res1[j++]);
            }
        }
        while(i<res.size())vec.push_back(res[i++]);
        while(j<res1.size())vec.push_back(res1[j++]);
        return vec;
    }
};