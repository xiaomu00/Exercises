//#include<iostream>
//using namespace std;
//
////////////��Ŀ14 ��������������
/////////////////��Ŀ������ ��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ��������
///////////////////////////*����ָ�뷽ʽ�洢���� �������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո�
//////////////////////////�ո�*/�ַ����������������˶������Ժ��ٶԶ������������������������������
//
////////��Ŀ���ӣ� https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking
//
//typedef struct BinTreeNode
//{
//	char val;
//	struct BinTreeNode* left;
//	struct BinTreeNode* right;
//}BinTreeNode;
//typedef BinTreeNode* BinTree;
//
//
//BinTree Create_BinTree(const char* str, int *pi)
//{
//	if (str[*pi] == '#' || str[*pi] == '\0')
//	{
//		return nullptr;
//	}
//	else
//	{
//		BinTreeNode* p = new BinTreeNode;
//		p->val = str[*pi];
//		(*pi)++;
//		p->left = Create_BinTree(str, pi);
//		(*pi)++;
//		p->right = Create_BinTree(str, pi);
//		return p;
//	}
//}
//
//
//
//void Inorder(BinTree bt)
//{
//	if (bt != nullptr)
//	{
//		Inorder(bt->left);
//		cout << bt->val << " ";
//		Inorder(bt->right);
//	}
//}
//
//
//int main()
//{
//	BinTree bt = nullptr;
//	char str[100] = {0};
//	gets(str);
//	int bi = 0;
//	bt = Create_BinTree(str, &bi);
//	Inorder(bt);
//	return 0;
//}