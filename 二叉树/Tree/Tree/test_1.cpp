//#include<iostream>
//using namespace std;
//
//////题目：B树是否是A树的子树
//////输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
//
//
//
//
//struct TreeNode {
//int val;
//struct TreeNode *left;
//struct TreeNode *right;
//TreeNode(int x) :
//val(x), left(NULL), right(NULL) {
//}
//};
//
//
//class Solution {
//public:
//	bool _HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == NULL)
//			return true;
//		else if (pRoot1 == NULL)
//			return false;
//		if (pRoot1->val != pRoot2->val)
//			return false;
//		else
//			return _HasSubtree(pRoot1->left, pRoot2->left) && _HasSubtree(pRoot1->right, pRoot2->right);
//
//	}
//
//
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//		bool falg = false;
//		if (pRoot1->val == pRoot2->val)
//		{
//			//判断左右子树是否相等
//			falg = _HasSubtree(pRoot1, pRoot2);
//		}
//		if (!falg)
//		{
//			falg = HasSubtree(pRoot1->left, pRoot2);
//		}
//		if (!falg)
//		{
//			falg = HasSubtree(pRoot1->right, pRoot2);
//		}
//
//		return falg;
//	}
//};
//
//
//int main()
//{
//
//
//    return 0;
//}