#include"tree.h"

////´´½¨¶þ²æÊ÷


MyTree::MyTree(const int* s)
{
	int i = 0;
	root = MyTree_1(s,&i);
}

TreeNode* MyTree::MyTree_1(const int* s, int *p)
{
	if (s[*p] == -1 || s[*p] == '\0')
		return NULL;
	else
	{
		TreeNode* t = new TreeNode(s[*p]);
		(*p)++;
		t->left = MyTree_1(s, p);
		(*p)++;
		t->right = MyTree_1(s, p);
		return t;
	}
}


