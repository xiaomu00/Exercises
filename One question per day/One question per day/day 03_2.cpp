#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//////////标题：数组中出现次数超过一半的数字 
//////////数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//////////例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。由于数
//////////字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

//////方法一，由于用到快排sort，时间复杂度O(NlogN)，并非最优
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		if (numbers.size() == 0)
//			return 0;
//		sort(numbers.begin(), numbers.end());
//		int m = numbers[numbers.size() / 2];
//		int count = 0;
//		for (int i = 0; i < numbers.size();++i)
//		{
//			if (numbers[i] == m)
//				count++;
//		}
//		if (count>numbers.size() / 2)
//			return m;
//		else 
//			return 0;
//	}
//};


////方法二，由于用到快排sort，时间复杂度O(NlogN)，并非最优
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int m = numbers[0];
		int count = 1;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (count == 0)
			{
				m = numbers[i];
				count = 1;
			}
				
			if (numbers[i] == m)
			{
				count++;
			}
			else
				count--;		
		}
		count = 0;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (numbers[i] == m)
				count++;
		}
		if (count>numbers.size() / 2)
			return m;
		else	
		   return 0;
	}
};



int main()
{
	vector<int> v = { 1, 2, 3, 2,2,2,2, 4, 2, 2, 3 };
	Solution s;
	int m=s.MoreThanHalfNum_Solution(v);
	cout << m << endl;
	return 0;
}