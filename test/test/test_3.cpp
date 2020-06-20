//#include<iostream>
//#include<assert.h>
//#include<stack>
//#include<stdlib.h>
//using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////题目3 从尾到头打印链表
////
////////问题描述:
////////////输入一个单链表的头结点，从尾到头打印出来每个节点的值。

//typedef struct listnode
//{
//	int value;
//	struct listnode *next;
//}listnode;
//typedef listnode* list;
//
////为了观察结果，我把插入也简单实现一下
//void listpush(list * p)
//{
//	*p = (listnode *)malloc(sizeof(listnode));
//	assert(*p != NULL);
//	(*p)->value = 1;
//	(*p)->next = NULL;
//	for (int i = 2; i <= 10; i++)
//	{
//		listnode *s = (listnode *)malloc(sizeof(listnode));
//		assert(s != NULL);
//		s->value = i;
//		s->next = (*p);
//		(*p) = s;
//	}
//}
//
////从尾到头打印 初始值  10 9 8 7 6 5 4 3 2 1
//void rprint_list(listnode *p)
//{
//	stack<listnode *> nodes;
//	listnode *s = p;
//	while (s != nullptr)
//	{
//		nodes.push(s);
//		s = s->next;
//	}
//	while (!nodes.empty())
//	{
//		p = nodes.top();
//		cout << p->value << " ";
//		nodes.pop();
//	}
//}
//
//int main()
//{
//	list ls;
//	listpush(&ls);
//	list * p = &ls;
//
//	rprint_list(*p);
//	cout << endl;
//	return 0;
//}
//
//
