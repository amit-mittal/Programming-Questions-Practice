/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool height(TreeNode *root, int &h){
        if(root == NULL){
            h = 0;
            return true;
        }
        
        int h1, h2;
        bool left = height(root->left, h1);
        bool right = height(root->right, h2);
        h = max(h1, h2) + 1;
        
        return left && right && (h1-h2)<=1 && (h1-h2)>=-1;
    }
    
    bool isBalanced(TreeNode *root) {
        int h;
        return height(root, h);
    }
};