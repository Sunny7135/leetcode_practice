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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        map<int, map<int, multiset<int>>>mp;
        queue<pair<TreeNode*, pair<int, int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            TreeNode* temp1 = temp.first;
            int line = temp.second.first;
            int level = temp.second.second;
            mp[line][level].insert(temp1->val);
            if(temp1->left){
                q.push({temp1->left,{line-1, level+1}});
            }if(temp1->right){
                q.push({temp1->right,{line+1, level+1}});
            }
        }
        for(auto &i : mp){
            vector<int>vec;
            for(auto &j: i.second){
                for(auto &k: j.second){
                    vec.push_back(k);
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};