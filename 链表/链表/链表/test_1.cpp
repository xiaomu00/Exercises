//#include<iostream>
//#include<list>
//using namespace std;
//
//
//struct ListNode {
//int val;
//struct ListNode *next;
//ListNode(int x) :
//val(x), next(NULL) {
//}
//};
//
//
//typedef struct MyList {
//	ListNode *front = NULL;
//}MyList;
//
//class Solution {
//
//public:
//	
//
//
//	
//	///////////////////////////////////////////////////////////////////////////////
//	////反转
//	ListNode* ReverseList(ListNode* &pHead) {
//		if (pHead == NULL || pHead->next == NULL)
//			return pHead;
//		ListNode* new_Head = NULL;
//		while (pHead != NULL)
//		{
//			ListNode* p = pHead;
//			pHead = pHead->next;
//			p->next = new_Head;
//			new_Head = p;
//		}
//		return new_Head;
//
//
//
//		/*ListNode* middle = pHead->next;
//		pHead->next = NULL;
//		if (middle->next == NULL)
//		{
//			middle->next = pHead;
//			return middle;
//		}
//		else{
//			ListNode* end = middle->next;
//			while (middle != NULL)
//			{
//				middle->next = pHead;
//				pHead = middle;
//				middle = end;
//				if (end != NULL)
//					end = end->next;
//			}
//			return pHead;
//		}*/
//
//	}
//
//	///////////////////////////////////////////////////////////////////////////////
//	////头插
//	void insert(ListNode* &Head, int x)
//	{
//		if (Head == NULL)
//		{
//			Head = new ListNode(x);
//		}
//		else
//		{
//			ListNode* s = new ListNode(x);
//			s->next = Head;
//			Head = s;
//		}
//
//	}
//
//	///////////////////////////////////////////////////////////////////////////////
//	////尾插
//	void push_back(ListNode* &Head, int x)
//	{
//		if (Head == NULL)
//		{
//			Head = new ListNode(x);
//		}
//		else
//		{
//			ListNode* s = new ListNode(x);
//
//			ListNode* p = Head;
//			while (p->next != NULL)
//				p = p->next;
//			p->next = s;
//		}
//	}
//
//	///////////////////////////////////////////////////////////////////////////////
//	////合并
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//	{
//		if (pHead1 == NULL)
//			return pHead2;
//		else if (pHead2 == NULL)
//			return pHead1;
//		else{
//			//定义一个新链表
//
//			ListNode* new_Head = NULL;
//
//			while (pHead1 && pHead2)
//			{
//				//取出小节点
//				ListNode* p = pHead1->val < pHead2->val ? pHead1 : pHead2;
//
//				//删除被去掉的节点并将取出的节点尾插到新链表中
//				if (pHead1->val < pHead2->val)
//				{
//					pHead1 = pHead1->next;
//					push_back(new_Head,p->val);
//				}
//				else if (pHead1->val > pHead2->val)
//				{
//					pHead2 = pHead2->next;
//					push_back(new_Head, p->val);
//				}
//				else
//				{
//					pHead1 = pHead1->next;
//					pHead2 = pHead2->next;
//					push_back(new_Head, p->val);
//					push_back(new_Head, p->val);
//				}
//			}
//			
//			ListNode* end = new_Head;
//			while (end->next != NULL)
//				end = end->next;
//
//			if (pHead1 && !pHead2)
//			{
//				end->next = pHead1;
//			}
//			if (!pHead1 && pHead2)
//			{
//				end->next = pHead2;
//			}
//
//
//			return new_Head;
//		}
//
//	}
//
//
//
//	void show(ListNode* &Head)const
//	{
//		ListNode* p = Head;
//		while(p != NULL)
//		{
//			cout << p->val << "-> ";
//			p = p->next;
//		}	
//		cout << "Over" << endl;
//	}
//
//
//};
//
//int main()
//{
//	Solution s;
//	MyList mls;
//	s.insert(mls.front, 9);
//	s.insert(mls.front, 7);
//	s.insert(mls.front, 5);
//	s.insert(mls.front, 3);
//	s.insert(mls.front, 2);
//	s.show(mls.front);
//
//	MyList mls1;
//	s.insert(mls1.front, 10);
//	s.insert(mls1.front, 9);
//	s.insert(mls1.front, 9);
//	s.insert(mls1.front, 8);
//	s.insert(mls1.front, 6);
//	s.insert(mls1.front, 4);
//	s.insert(mls1.front, 2);
//	s.push_back(mls1.front, 100);
//	s.push_back(mls1.front, 200);
//	s.show(mls1.front);
//
//	ListNode* n = s.Merge(mls.front, mls1.front);
//	s.show(n);
//
//    return 0;
//}