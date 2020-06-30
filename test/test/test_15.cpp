//#include<iostream>
//#include<vector>
//using namespace std;
//
//////////题目15 相同的树
///////////////题目描述： 给定两个二叉树，编写一个函数来检验它们是否相同。
//////////////////////////如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//////题目链接： https://leetcode-cn.com/problems/same-tree/
////////
////////示例 1:
////////输入 : 1         1
//////////   /  \      /  \
////////// 2     3    2    3
////////
////////	[1, 2, 3], [1, 2, 3]
////////输出: true
////////	
////////示例 2 :
////////输入 : 1          1
////////	   /             \
////////	 2                2
////////
////////	 [1, 2], [1, null, 2]
////////输出: false
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (p == nullptr&&q == nullptr)
//			return true;
//		if (p == nullptr || q == nullptr)
//			return false;
//		return (p->val == q->val&&isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
//
//	}
//};