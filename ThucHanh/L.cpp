#include <bits/stdc++.h>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void insertNode(TreeNode* root, int parent, int val, int c)
{
    if (root == NULL) return;
    if (root -> val == parent)
    {
        if (c == 'L')
        {
            root -> left = new TreeNode(val);
        }
        else
        {
            root -> right = new TreeNode(val);
        }
    }
    insertNode(root -> left, parent, val, c);
    insertNode(root -> right, parent, val, c);
}
class Solution {
private:
        int n;
        int parent, child, val;
        char c;
        int m = 1;
        vector<int> level[10002];
public:
        void Input()
        {
            cin >> n;
            cin >> parent >> val >> c;
            TreeNode *root = new TreeNode(parent);
            if (c == 'L') root -> left = new TreeNode(val);
            else root -> right = new TreeNode(val);
            n--;
            while (n--)
            {
                cin >> parent >> val >> c;
                insertNode(root, parent, val, c);
            }
            levelOrder(root);
        }
        void levelOrder(TreeNode *root)
        {
            queue<pair<TreeNode*, int>> q;
            q.push({root,1});
            while (!q.empty())
            {
                TreeNode *node = q.front().first;
                m = max(m, q.front().second);
                int ll = q.front().second;
                q.pop();
                level[ll].push_back(node -> val);
                //cout << node -> val << " ";
                if (node -> left != NULL) q.push({node -> left, ll+1});
                if (node -> right != NULL) q.push({node -> right, ll+1});
            }
            for (int i = m; i >= 1; i--)
            {
                for (auto x : level[i]) cout << x << " ";
            }
            cout << endl;
        }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solution S;
        S.Input();
    }
    return 0;
}
