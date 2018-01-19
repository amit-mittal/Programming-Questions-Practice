/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL)
            return v;
        
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty())
        {
            pair<TreeNode*, int> p = q.front();
            q.pop();
            
            if(p.first->left != NULL)
                q.push(make_pair(p.first->left, p.second + 1));
            if(p.first->right != NULL)
                q.push(make_pair(p.first->right, p.second + 1));
            
            if(p.second >= v.size())
            {
                vector<int> a;
                a.push_back(p.first->val);
                v.push_back(a);
            }
            else
            {
                v[p.second].push_back(p.first->val);
            }
        }
        
        
        return v;
    }
};