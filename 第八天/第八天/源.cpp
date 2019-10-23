class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		queue<pair<TreeNode*, int>> q;
		q.push(make_pair(root, 1));
		while (!q.empty())
		{
			TreeNode* cur = q.front().first;
			int level = q.front().second;
			q.pop();

			if (!cur->left && !cur->right)
				return level;
			if (cur->left)
				q.push(make_pair(cur->left, level + 1));
			if (cur->right)
				q.push(make_pair(cur->right, level + 1));

		}
		return 0;
	}
};