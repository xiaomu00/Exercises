#include<iostream>
#include<vector>
using namespace std;

////链接：https://www.nowcoder.com/questionTerminal/b736e784e3e34731af99065031301bca
////题目：二叉树中和为某一值的路径
////输入一颗二叉树的根节点和一个整数，按字典序打印出二叉树中结点值的和为输入整数的所有路径。
////路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。


struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
class Solution {
public:
	void _FindPath(TreeNode* root, int expectNumber, vector<vector<int>> &v_val, vector<int> &tmp)
	{
		if (root == nullptr)
			return;
		tmp.push_back(root->val);
		expectNumber -= root->val;

		if (root->left == nullptr && root->right == nullptr && expectNumber == 0)
			v_val.push_back(tmp);

		_FindPath(root->left, expectNumber, v_val, tmp);
		_FindPath(root->right, expectNumber, v_val, tmp);

		tmp.pop_back();
	}
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int> > v_val;
		if (root == nullptr)
			return v_val;
		vector<int> tmp;
		_FindPath(root, expectNumber, v_val, tmp);
		return v_val;
	}
};

int main()
{


    return 0;
}