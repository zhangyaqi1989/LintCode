/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: param root: The root of the binary search tree
     * @param k1: An integer
     * @param k2: An integer
     * @return: return: Return all keys that k1<=key<=k2 in ascending order
     */
    vector<int> searchRange(TreeNode * root, int k1, int k2) {
        // write your code here
        if(root != nullptr) {
            if(root->val < k1) {
                return searchRange(root->right, k1, k2);
            } else if (root->val > k2) {
                return searchRange(root->left, k1, k2);
            } else {
                vector<int> left = searchRange(root->left, k1, root->val - 1);
                vector<int> right = searchRange(root->right, root->val + 1, k2);
                left.push_back(root->val);
                left.insert(left.end(), right.begin(), right.end());
                return left;
            }
        }
        return {};
    }
};
