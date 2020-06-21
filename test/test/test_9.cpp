#include<iostream>
#include<queue>
using namespace std;


////////题目9  用队列实现栈
////////问题描述:
////////////使用队列实现栈的下列操作：
////////////push(x) --元素 x 入栈
////////////pop() --移除栈顶元素
////////////top() --获取栈顶元素
////////////empty() --返回栈是否为空
class MyStack {
public:
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x)
	{
		if (!q1.empty())
			q1.push(x);
		else
			q2.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop()
	{
		int num;
		while (!q1.empty())
		{
			num = q1.front();
			q1.pop();
			if (q1.empty())
				return num;
			q2.push(num);
		}
		while (!q2.empty())
		{
			num = q2.front();
			q2.pop();
			if (q2.empty())
				break;
			q1.push(num);
		}
		return num;
	}



	/** Get the top element. */
	int top()
	{
		int num;
		while (!q1.empty())
		{
			num = q1.front();
			q1.pop();
			q2.push(num);
			if (q1.empty())
				return num;
		}
		while (!q2.empty())
		{
			num = q2.front();
			q2.pop();
			q1.push(num);
			if (q2.empty())
				break;
		}
		return num;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q1.empty() && q2.empty();
	}

private:
	queue<int> q1;
	queue<int> q2;
};