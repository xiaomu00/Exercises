//#include<iostream>
//#include<vector>
//using namespace std;
//
//////////////��Ŀ21 ��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
///////////////////��Ŀ������ ��������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }����������2�������г�����5�Σ�
///////////////////�������鳤�ȵ�һ�룬������2����������������0
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