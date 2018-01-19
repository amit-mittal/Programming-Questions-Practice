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
    
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        
        flatten(l);
        flatten(r);
        
        root->left = NULL;
        root->right = l;
        
        if(l == NULL)
        {
            root->right = r;
            return;
        }
        
        while(l->right != NULL)
            l = l->right;
        
        l->right = r;
    }
};