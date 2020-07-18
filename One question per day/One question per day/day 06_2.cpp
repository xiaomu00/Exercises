//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Solution {
//public:
//	int StrToInt(string str) 
//	{
//		if(str.size()==0)
//			return 0;
//		int flas = 0;
//		int i = 0;
//		int s = 0;
//		if (str[i] == '+')
//		{
//			++i;
//		}
//		else if (str[i] == '-')
//		{
//			flas = -1;
//			++i;
//		}
//
//		while (i<str.size())
//		{
//			if (str[i]<'0' || str[i]>'9')
//			{
//				return 0;
//			}
//			else
//			{
//				s = s * 10 + str[i] - '0';
//			}
//			++i;
//		}
//		if (flas == -1)
//			s = s*(-1);
//		return s;
//
//	}
//};
//
//
//
//
//
//
//
//int main()
//{
//	Solution s;
//	char sa[100];
//	gets(sa);
//	int m = s.StrToInt(sa);
//	cout << m << endl;
//	return 0;
//}