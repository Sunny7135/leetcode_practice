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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*>nodes;
        unordered_set<int>temp;
        for(auto &d :descriptions){
            int parent = d[0];
            int child = d[1];
            int check = d[2];

            if(!nodes.count(parent)){
                nodes[parent] = new TreeNode(parent);
            }
            if(!nodes.count(child)){
                nodes[child] = new TreeNode(child);
            }

            if(check){
                nodes[parent]->left = nodes[child];
            }else{
                nodes[parent]->right = nodes[child];
            }
            temp.insert(child);
        }
        for(auto &[val, node] : nodes){
            if(!temp.count(val)){
                return node;
            }
        }
        return nullptr;
    }
};