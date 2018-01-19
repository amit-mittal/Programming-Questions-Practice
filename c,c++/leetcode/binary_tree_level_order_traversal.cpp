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
    void print(TreeNode* root, vector<vector<int>> &t, int height)
    {
        if(root == NULL)
            return;
        
        if(height >= t.size())
        {
            vector<int> a;
            a.push_back(root->val);
            t.push_back(a);
        }
        else
        {
            t[height].push_back(root->val);
        }
        
        print(root->left, t, height + 1);
        print(root->right, t, height + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        
        print(root, v, 0);
        
        return v;
    }
};