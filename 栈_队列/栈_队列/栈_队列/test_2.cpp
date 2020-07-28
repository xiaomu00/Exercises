#include<iostream>
#include<vector>
#include<stack>
using namespace std;

////题目：栈的压入、弹出序列
////链接：https://www.nowcoder.com/questionTerminal/d77d11405cc7470d82554cb392585106
////输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。
////假设压入栈的所有数字均不相等。例如序列1, 2, 3, 4, 5是某栈的压入顺序，序列4, 5, 3, 2, 1是该压栈序列对应的一个弹出序列，
////但4, 3, 5, 1, 2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.empty())
			return true;
		stack<int> v;
		int i = 0;
		int j = 0;
		int p = pushV[i];
		int q = popV[j];
		while (i <= pushV.size() && j<popV.size())
		{
			if (v.empty() || v.top() != popV[j])
			{
				v.push(pushV[i]);
				i++;
			}
			else
			{
				v.pop();
				j++;
			}
		}
		if (!v.empty())
			return false;
		else
			return true;
	}
};

int main()
{


    return 0;
}