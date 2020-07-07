#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//////////���⣺�����г��ִ�������һ������� 
//////////��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//////////��������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }��������
//////////��2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

//////����һ�������õ�����sort��ʱ�临�Ӷ�O(NlogN)����������
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


////�������������õ�����sort��ʱ�临�Ӷ�O(NlogN)����������
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