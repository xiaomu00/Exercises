#include<iostream>
#include<vector>
#include<queue>
using namespace std;
////优先队列。最大堆

////题目：最小的k个数
////输入n个整数，找出其中最小的K个数。例如输入4, 5, 1, 6, 2, 7, 3, 8这8个数字，则最小的4个数字是1, 2, 3, 4。
////链接：https ://www.nowcoder.com/practice/6a296eb82cf844ca8539b57c23e6e9bf?%20tpId=13&tqId=11182&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector<int> vt;
		if (input.size() == 0 || k <= 0 || k>input.size())
			return vt;
		priority_queue<int, vector<int>, less<int>> q;
		int i = 0;
		while (i<input.size())
		{
			while (i<k){
				q.push(input[i]);
				++i;
			}
			if (i<input.size() && input[i]<q.top())
			{
				q.pop();
				q.push(input[i]);
			}
			++i;
		}
		for (int i = 0; i<k; ++i)
		{
			vt.push_back(q.top());
			q.pop();
		}

		return vt;
	}
};

int main()
{


    return 0;
}