#include<iostream>
using namespace std;


////��Ŀ : ��������ĵ�һ���������
////�������������ҳ����ǵĵ�һ��������㡣��ע����Ϊ�����������������Դ���������ݵ���ʾ����������ʽ��ʾ�ģ���֤������������ȷ�ģ�
////
////���ӣ�https ://www.nowcoder.com/practice/6ab1d9a29e88450685099d45c9e31e46?


typedef struct ListNode {
      int val;
      struct ListNode *next;
	  ListNode(int x) :
		  val(x), next(NULL) {}
}ListNode;

class Solution {
public:
	int Getlen(ListNode* &pHead)
	{
		int count = 0;
		ListNode* p = pHead;
		while (p != nullptr)
		{
			count++;
			p = p->next;
		}
		return count;
	}
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		if (pHead1 == nullptr || pHead2 == nullptr)
			return nullptr;
		ListNode* p = pHead1;
		ListNode* q = pHead2;
		int len1 = Getlen(pHead1);
		int len2 = Getlen(pHead2);

		int len = len1 > len2 ? len1 - len2 : len2 - len1;

		if (len1>len2){
			for (int i = 0; i<len; ++i)
			{
				p = p->next;
			}

		}
		else if (len1<len2){
			for (int i = 0; i<len; ++i)
			{
				q = q->next;
			}
		}

		while (p->next != nullptr)
		{
			if (p == q)
				break;
			p = p->next;
			q = q->next;
		}

		if (p == q)
			return p;
		else
			return nullptr;
	}
};

int main()
{


    return 0;
}