/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else if (root -> left == NULL && root -> right == NULL) {
        return 1;
    } else if (root -> left == NULL) {
        return 1 + maxDepth(root->right);
    } else if (root -> right == NULL) {
        return 1 + maxDepth(root->left);
    } else {
        int depthLeft = maxDepth(root->left);
        int depthRight = maxDepth(root->right);
        return 1 + (depthLeft > depthRight ? depthLeft : depthRight);
    }
}

