//#include<iostream>
//#include<vector>
//using namespace std;
//
//////////////题目21 数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
///////////////////题目描述： 例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。由于数字2在数组中出现了5次，
///////////////////超过数组长度的一半，因此输出2。如果不存在则输出0
//
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		int m = numbers[0];
//		int i = 0,p = 0,q = 0;
//		int count = 1;
//		while (i<numbers.size())
//		{
//			while (count != 0 && i<numbers.size())
//			{
//				if (numbers[i] == numbers[p])
//				{
//					count++;
//				}
//				else
//				{
//					if (numbers[i - 1] == numbers[p])
//						q = i;
//					count--;
//				}
//				++i;
//			}
//			if (count == 0)
//			{
//				p = q;
//				count = 1;
//				i = q;
//			}
//			else
//			{
//				return numbers[p];
//			}
//		}
//		return 0;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	vector<int> vt = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	int c = s.MoreThanHalfNum_Solution(vt);
//	cout << c << endl;
//	return 0;
//}