//#include<iostream>
//#include<stack>
//using namespace std;
//
//
//////////题目6 最小栈
//////////问题描述:
//////////////设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//////////////push(x) —— 将元素 x 推入栈中。
//////////////pop() —— 删除栈顶的元素。
//////////////top() —— 获取栈顶元素。
//////////////getMin() —— 检索栈中的最小元素。
//
//class MinStack {
//public:
//
//	MinStack() {
//
//	}
//
//	void push(int x) {
//		_st.push(x);
//		if (m_st.empty() || x <= m_st.top())
//		{
//			m_st.push(x);
//		}
//	}
//
//	void pop() {
//		int val = _st.top();
//		_st.pop();
//		if (m_st.top() == val)
//			m_st.pop();
//	}
//
//	int top() {
//		return _st.top();
//	}
//
//	int getMin() {
//		return m_st.top();
//	}
//
//private:
//	stack<int> _st;
//	stack<int> m_st;
//};
//
//
//int main()
//{
//	MinStack ms;
//	ms.push(3);
//	ms.push(4);
//	ms.push(8);
//	ms.push(2);
//
//	cout << ms.getMin() << endl;
//}