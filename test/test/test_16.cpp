//#include<iostream>
//#include<vector>
//using namespace std;
//
////////////��Ŀ16 ƽ�������
/////////////////��Ŀ������ ����һ�����������ж����Ƿ��Ǹ߶�ƽ��Ķ�������
////////////////////////////�����У�һ�ø߶�ƽ�����������Ϊ��
////////////////////////////һ��������ÿ���ڵ� ���������������ĸ߶Ȳ�ľ���ֵ������1��
////////��Ŀ���ӣ� https://leetcode-cn.com/problems/balanced-binary-tree/
// 
//
////      ʾ�� 1:
////      ����������[3, 9, 20, null, null, 15, 7]
////
////        3
////       / \
////      9  20
////     / \
////   15   7
////   ���� true ��
////
////     ʾ�� 2:
////     ����������[1, 2, 2, 3, 3, null, null, 4, 4]
////
////       1
////      / \
////     2   2
////   / \
////  3   3
////      / \
////     4   4
////���� false ��
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
//	//��߶�
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