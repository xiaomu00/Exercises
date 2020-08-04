#include<iostream>
using namespace std;



////题目：二叉树的深度
////从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
////链接：https ://www.nowcoder.com/practice/435fb86331474282a3499955f0a41e8b?

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
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int lt = TreeDepth(pRoot->left);
		int rt = TreeDepth(pRoot->right);

		return lt > rt ? lt + 1 : rt + 1;
	}
};

int main()
{


    return 0;
}