//#include<iostream>
//using namespace std;
//
//////��Ŀ��B���Ƿ���A��������
//////�������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
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
//			//�ж����������Ƿ����
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