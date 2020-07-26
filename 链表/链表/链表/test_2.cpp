#include<iostream>
#include<list>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
////删除重复节点


struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};


typedef struct MyList {
	ListNode *front = NULL;
}MyList;

class Solution {

public:

	///////////////////////////////////////////////////////////////////////////////
	////头插
	void insert(ListNode* &Head, int x)
	{
		if (Head == NULL)
		{
			Head = new ListNode(x);
		}
		else
		{
			ListNode* s = new ListNode(x);
			s->next = Head;
			Head = s;
		}
	}


	////////////////////////////////////////////////////////////////////////////////////////////
	////删除重复节点
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
			return pHead;
		ListNode* head = new ListNode(0);
		head->next = pHead;
		ListNode* Left = head;
		ListNode* Right = Left->next;

		while (Right != NULL)
		{
			while (Right->next != NULL && Right->val != Right->next->val)
			{
				Left = Right;
				Right = Right->next;
			}

			while (Right->next != NULL && Right->val == Right->next->val)
			{
				Right = Right->next;
			}
			if (Left->next != Right)
			{
				Left->next = Right->next;
			}
			Right = Right->next;
		}
		return  head->next;
	}

	
	void show(ListNode* &Head)const
	{
		ListNode* p = Head;
		while(p != NULL)
		{
			cout << p->val << "-> ";
			p = p->next;
		}	
		cout << "Over" << endl;
	}


};

int main()
{
	Solution s;
	MyList mls;
	s.insert(mls.front, 5);
	s.insert(mls.front, 4);
	s.insert(mls.front, 4);
	s.insert(mls.front, 3);
	s.insert(mls.front, 3);
	s.insert(mls.front, 2);
	s.insert(mls.front, 1);
	s.show(mls.front);

	ListNode* n=s.deleteDuplication(mls.front);
	s.show(n);

    return 0;
}