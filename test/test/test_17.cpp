//#include<iostream>
//#include<vector>
//using namespace std;
//
////////////题目17 对称二叉树
/////////////////题目描述： 给定一个二叉树，检查它是否是镜像对称的。
//
////////题目链接： https://leetcode-cn.com/problems/symmetric-tree/
// 
//////例如，二叉树[1, 2, 2, 3, 4, 4, 3] 是对称的。
//
//   ////            1
//   ////           / \
//   ////          2   2
//   ////         / \ / \
//   ////        3  4 4  3
//
//
//////但是下面这个[1, 2, 2, null, 3, null, 3] 则不是镜像对称的:
//
// ////               1
// ////              / \
// ////             2   2
// ////              \   \
// ////              3    3
//
//
//
//
//struct TreeNode
//{
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//class Solution {
//public:
//	bool _isSymmetric(TreeNode* L, TreeNode* R)
//	{
//		if (L == nullptr&&R == nullptr)
//			return true;
//		if (L == nullptr || R == nullptr)
//			return false;
//		return L->val == R->val && _isSymmetric(L->left, R->right) && _isSymmetric(L->right, R->left);
//	}
//	bool isSymmetric(TreeNode* root) {
//		if (root == nullptr)
//			return true;
//		return _isSymmetric(root->left, root->right);
//	}
//};