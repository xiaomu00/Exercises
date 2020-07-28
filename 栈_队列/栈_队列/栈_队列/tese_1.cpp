#include<iostream>
#include<stack>
using namespace std;


////题目：最小栈
////定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
////链接https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?%20tpId=13&tqId=11173&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

class Solution {
private:
	stack<int> data_stack;
	stack<int> min_stack;
public:
	void push(int value) {
		if (min_stack.empty() || value<min_stack.top())
			min_stack.push(value);
		else
			min_stack.push(min_stack.top());
		data_stack.push(value);
	}
	void pop() {
		data_stack.pop();
		min_stack.pop();
	}
	int top() {
		return data_stack.top();
	}
	int min() {
		return min_stack.top();
	}
};

int main()
{


    return 0;
}