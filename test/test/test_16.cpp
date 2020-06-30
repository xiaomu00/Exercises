//#include<iostream>
//#include<vector>
//using namespace std;
//
////////////题目16 平衡二叉树
/////////////////题目描述： 给定一个二叉树，判断它是否是高度平衡的二叉树。
////////////////////////////本题中，一棵高度平衡二叉树定义为：
////////////////////////////一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
////////题目链接： https://leetcode-cn.com/problems/balanced-binary-tree/
// 
//
////      示例 1:
////      给定二叉树[3, 9, 20, null, null, 15, 7]
////
////        3
////       / \
////      9  20
////     / \
////   15   7
////   返回 true 。
////
////     示例 2:
////     给定二叉树[1, 2, 2, 3, 3, null, null, 4, 4]
////
////       1
////      / \
////     2   2
////   / \
////  3   3
////      / \
////     4   4
////返回 false 。
//
//struct TreeNode
//{
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//class Solution {
//public:
//	//求高度
//	int hight(TreeNode* root)
//	{
//		if (root == nullptr)
//			return 0;
//		else
//		{
//			int a = hight(root->left);
//			int b = hight(root->right);
//			return (a>b ? a : b) + 1;
//		}
//
//	}
//	bool isBalanced(TreeNode* root)
//	{
//		if (root == nullptr)
//			return true;
//		else
//		{
//			int left_h = hight(root->left);
//			int right_h = hight(root->right);
//			return abs(left_h - right_h)<2 && isBalanced(root->left) && isBalanced(root->right);
//		}
//
//	}
//};