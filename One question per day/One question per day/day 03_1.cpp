
#include<iostream>
#include<string>
using namespace std;

////////////标题：字符串中找出连续最长的数字串 
////////////读入一个字符串str，输出字符串str中的连续最长的数字串
////////////示例1：
////////////输入    abcd12345ed125ss123456789
////////////输出    123456789

////方法二

int main()
{
	string str, s, cur;
	getline(cin,str);

	for (int i = 0; i <= str.size(); ++i)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			if (cur.size()>s.size())
				s = cur;
			else
			    cur.clear();
		}

	}
	cout << s << endl;

	return 0;
}








////方法一

//void print(char* str, int len)
//{
//	if (0 == len)
//	{
//		return;
//	}
//	int i = 0, p = 0, q = 0;
//	int count = 0, icount = 0;
//	while (str[i] != '\0')
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
//}//
//int main()
//{
//	char s[100];
//	int i = 0;
//	gets(s);
//	int len = strlen(s);
//	print(s, len);
//	return 0;
//}


