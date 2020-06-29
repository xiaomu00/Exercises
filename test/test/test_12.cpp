//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//////////题目12 二叉树的前序遍历
///////////////题目描述： 给定一个二叉树，返回它的 前序 遍历。
//////题目链接：  https://leetcode-cn.com/problems/binary-tree-preorder-traversal/
//
////示例:
////
////输入 : [1, null, 2, 3]
////	1
////	\
////	2
////	/
////	3
////
////输出:[1, 2, 3]
//
//struct TreeNode {
//     int val;
//    TreeNode *left;
//   TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//////递归做法
//class Solution {
//public:
//	void _preorderTraversal(TreeNode* t, vector<int>* vt)
//	{
//		if (t != nullptr)
//		{
//			(*vt).push_back(t->val);
//			_preorderTraversal(t->left, vt);
//			_preorderTraversal(t->right, vt);
//		}
//	}
//
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_preorderTraversal(root, &vt);
//		return vt;
//
//	}
//};
//
//////非递归做法
//class Solution {
//public:
//	void _preorderTraversal(TreeNode* t, vector<int>* vt)
//	{
//		if (t != nullptr)
//		{
//			stack<TreeNode*> st;
//			st.push(t);
//			while (!st.empty())
//			{
//				TreeNode* top = st.top();
//				st.pop();
//				(*vt).push_back(top->val);
//				if (top->right)
//				{
//					st.push(top->right);
//				}
//				if (top->left)
//				{
//					st.push(top->left);
//				}
//
//			}
//		}
//	}
//
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_preorderTraversal(root, &vt);
//		return vt;
//
//	}
//};