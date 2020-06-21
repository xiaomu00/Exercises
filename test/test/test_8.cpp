//#include<iostream>
//#include<stack>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//////////题目8 逆波兰表达式求值
//////////问题描述:
//////////////有效的运算符包括 +, -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。
//////////////说明：
//////////////整数除法只保留整数部分。
//////////////给定逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。
//
//
//class Solution {
//public:
//	int evalRPN(vector<string>& tokens)
//	{
//		size_t i = 0;
//		stack<int> st;
//		for (i; i<tokens.size(); ++i)
//		{
//			string &s = tokens[i];
//			int a = 0, b = 0;
//			if (s != "+" && s != "-" && s != "*" && s != "/")
//			{
//				st.push(atoi(s.c_str()));
//			}
//			else
//			{
//				b = st.top();
//				st.pop();
//				a = st.top();
//				st.pop();
//			
//			    switch (s[0])
//				{
//				case '+':
//					st.push(a + b);
//					break;
//				case '-':
//					st.push(a - b);
//					break;
//				case '*':
//					st.push(a * b);
//					break;
//				case '/':
//					st.push(a / b);
//					break;}
//			}
//		}
//		return st.top();
//	}
//};
//int main()
//{
//	vector<string> v{ "2", "1", "+", "3", "*" };
//	Solution s;
//	int m=s.evalRPN(v);
//	cout << m << endl;
//
//}