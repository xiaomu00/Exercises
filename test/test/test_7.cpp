//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//
//////////题目7 栈的压入、弹出序列
//////////问题描述:
//////////////输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。
//////////假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列
//////////对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
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