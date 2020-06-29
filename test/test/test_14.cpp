/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//////////题目14 二叉树的后序遍历
///////////////题目描述： 给定一个二叉树，返回它的后续遍历。
//////题目链接： https://leetcode-cn.com/problems/binary-tree-postorder-traversal/submissions/
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
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	void  _postorderTraversal(TreeNode* t, vector<int> *vt)
//	{
//		if (t != nullptr)
//		{
//			_postorderTraversal(t->left, vt);
//			_postorderTraversal(t->right, vt);
//			(*vt).push_back(t->val);
//		}
//	}
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_postorderTraversal(root, &vt);
//		return vt;
//	}
//	
//};
//
//////非递归方法
//class Solution {
//public:
//	void  _postorderTraversal(TreeNode* t, vector<int> *vt)
//	{
//		if (t != nullptr)
//		{
//			stack<TreeNode*> st;
//			TreeNode* cur = t;
//			TreeNode* pr = nullptr;
//			while (cur != nullptr || !st.empty())
//			{
//				while (cur != nullptr)
//				{
//					st.push(cur);
//					cur = cur->left;
//				}
//				TreeNode* top = st.top();
//				if (top->right == nullptr || top->right == pr)
//				{
//					(*vt).push_back(top->val);
//					pr = top;
//					st.pop();
//				}
//				else
//				{
//					cur = top->right;
//				}
//			}
//		}
//	}
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> vt;
//		_postorderTraversal(root, &vt);
//		return vt;
//	}
//};