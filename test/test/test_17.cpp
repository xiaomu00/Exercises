//#include<iostream>
//#include<vector>
//using namespace std;
//
////////////��Ŀ17 �Գƶ�����
/////////////////��Ŀ������ ����һ����������������Ƿ��Ǿ���ԳƵġ�
//
////////��Ŀ���ӣ� https://leetcode-cn.com/problems/symmetric-tree/
// 
//////���磬������[1, 2, 2, 3, 4, 4, 3] �ǶԳƵġ�
//
//   ////            1
//   ////           / \
//   ////          2   2
//   ////         / \ / \
//   ////        3  4 4  3
//
//
//////�����������[1, 2, 2, null, 3, null, 3] ���Ǿ���ԳƵ�:
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