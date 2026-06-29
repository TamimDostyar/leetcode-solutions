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

using namespace std;
class Solution {
public:
    int maxDiamater = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        findMaxHeight(root);
        return maxDiamater;
    }
    int findMaxHeight(TreeNode* root){
        if (root == nullptr)return 0;
        int left = findMaxHeight(root->left);
        int right = findMaxHeight(root->right);
        maxDiamater = max(maxDiamater, left + right);
        return 1 + returnMax(left, right);
    }
    int returnMax(int a, int b){
        return a > b ? a : b;
    }
};