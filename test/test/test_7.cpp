//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//
//////////��Ŀ7 ջ��ѹ�롢��������
//////////��������:
//////////////���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
//////////����ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ����
//////////��Ӧ��һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�
//
//class Solution {
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV)
//	{
//		if (pushV.size() != popV.size())
//			return false;
//		stack<int> st;
//		int p = 0;
//		int q = 0;
//		while (q<popV.size())
//		{
//
//			while (st.empty() || popV[q] != st.top())
//			{
//				st.push(pushV[p++]);
//			}
//			st.pop();
//			q++;
//		}
//
//		if (st.empty() && q == popV.size())
//			return true;
//		else
//			return false;
//
//	}
//};
//
//int main()
//{
//	Solution so;
//	vector<int> s1{ 1, 2, 3, 4, 5 };
//	vector<int> s2{ 4, 5, 3, 2, 1 };
//	bool s;
//	s= so.IsPopOrder(s1, s2);
//	if (s)
//		cout << "true" << endl;
//	return 0;
//}