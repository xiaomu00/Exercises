//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////题目13 二叉树的中序遍历
///////////////题目描述： 给定一个二叉树，返回它的中序 遍历。
//////题目链接：  https://leetcode-cn.com/problems/binary-tree-inorder-traversal/
//
//////////////////示例:
//////////////////输入 : [1, null, 2, 3]
//////////////////	1
//////////////////	\
//////////////////	2
//////////////////	/
//////////////////	3
//////////////////输出:[1, 3, 2]
//
//////递归方法
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//class Solution {
//public:
//	void _inorderTraversal(TreeNode* t, vector<int>* vt)
//	{
//		if (t != nullptr)
//		{
//
//			_inorderTraversal(t->left , vt);
//			(*vt).push_back(t->val);
//			_inorderTraversal(t->right, vt);
//		}
//
//	}
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_inorderTraversal(root, &vt);
//		return vt;
//	}
//};
//
//////非递归方法
//class Solution {
//public:
//	void _inorderTraversal(TreeNode* t, vector<int>* vt)
//	{
//		if (t != nullptr)
//		{
//			stack<TreeNode*> st;
//			TreeNode* cur = t;
//			while (cur != nullptr || !st.empty())
//			{
//				while (cur != nullptr)
//				{
//					st.push(cur);
//					cur = cur->left;
//				}
//				TreeNode* top = st.top();
//				st.pop();
//				(*vt).push_back(top->val);
//				cur = top->right;
//			}
//		}
//
//	}
//
//
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_inorderTraversal(root, &vt);
//		return vt;
//	}
//};