//#include<iostream>
//#include<vector>
//using namespace std;
//
//////////��Ŀ15 ��ͬ����
///////////////��Ŀ������ ������������������дһ�����������������Ƿ���ͬ��
//////////////////////////����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
//////��Ŀ���ӣ� https://leetcode-cn.com/problems/same-tree/
////////
////////ʾ�� 1:
////////���� : 1         1
//////////   /  \      /  \
////////// 2     3    2    3
////////
////////	[1, 2, 3], [1, 2, 3]
////////���: true
////////	
////////ʾ�� 2 :
////////���� : 1          1
////////	   /             \
////////	 2                2
////////
////////	 [1, 2], [1, null, 2]
////////���: false
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