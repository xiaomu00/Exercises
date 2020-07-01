//#include<iostream>
//using namespace std;
//
////////////题目14 二叉树创建遍历
/////////////////题目描述： 编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树
///////////////////////////*（以指针方式存储）。 例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，
//////////////////////////空格*/字符代表空树。建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。
//
////////题目链接： https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking
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