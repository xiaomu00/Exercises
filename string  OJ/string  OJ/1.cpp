#include<iostream>
using namespace std;


//字符串转整形数字
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//
//class Solution
//{
//public:
//	int StrToInt(string str) {
//		int len = str.size();
//		if (0 == len)
//			return 0;
//		const char *p = str.c_str();
//		int flag = 1;
//		int i = 0;
//		if (p[i] == '-')
//		{
//			flag = -1;
//			i++;
//		}
//		if (p[i] == '+')
//		{
//			i++;
//		}
//
//		long long data = 0;
//		while (p[i] != '\0')
//		{
//			if (p[i]<'0' || p[i]>'9')
//				return 0;
//			data = data * 10 + p[i] - '0';
//			++i;
//		}
//		
//
//		return flag*data;
//	}
//};
//int main()
//{
//	Solution  s;
//	int a=s.StrToInt("-2147483649");
//	cout << a << endl;
//    return 0;
//}
