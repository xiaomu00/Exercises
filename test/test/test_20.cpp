//#include<iostream>
//#include<string.h>
//using namespace std;

////////////题目20 找出字符串中最长的数字字符串
/////////////////题目描述： 要求，给定一串字符串，找出其中最常的数字字符串。比如，给定字符串abc123bcd234567d,则最终结果输出为234567。



//void print(char* str, int len)
//{
//	if (0 == len)
//	{
//		return;
//	}
//	int i = 0, p = 0, q = 0;
//	int count = 0, icount = 0;
//	while (str[i]!='\0')
//	{		
//		icount = 0;
//		while (str[i]<48 || str[i]>57)
//		{
//			++i;
//		}
//		q = i;
//		while (str[i] >= 48 && str[i] <= 57)
//		{
//			icount++;
//			i++;
//		}
//		if (icount>count)
//		{
//			count = icount;
//			p = q;
//		}
//	}
//	for (int j = p; j<p + count; ++j)
//	{
//		cout << str[j];
//	}
//	cout << endl;
//}
//
//int main()
//{
//	char s[100];
//	int i = 0;
//	gets(s); 
//	int len = strlen(s);
//	print(s, len);
//	return 0;
//}