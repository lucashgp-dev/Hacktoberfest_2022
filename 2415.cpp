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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root) return root;
        q.push(root);
        bool odd=0;
        vector<TreeNode*> temp;
        while(!q.empty()) {
            int sz = q.size();
            temp.clear();
            while(sz--) {
                auto curr = q.front();
                q.pop();
                temp.push_back(curr);
                if(curr->left)
                    q.push(curr->left),q.push(curr->right);
            }
            if(odd) {
                int i=0,j=temp.size()-1;
                while(i < j) swap(temp[i++]->val,temp[j--]->val);
            }
            odd=1-odd;
        }
        return root;
    }
};
