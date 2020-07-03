#include<iostream>
#include<string>
using namespace std;



////////标题：删除公共字符 
////////       输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入”They are students.”和”aeiou”，
////////       则删除之后的第一个字符串变成”Thy r stdnts.”
////////




//////解法一：
//int main()
//{
//	string s1;
//	string s2;
//
//	getline(cin,s1);
//	getline(cin,s2);
//
//	int si[256] = {0};
//
//	for (int i = 0; i < s2.size(); ++i)
//	{
//		si[s2[i]]++;
//	}
//
//	string s;
//
//	for (int i = 0; i < s1.size(); ++i)
//	{
//		if (si[s1[i]] == 0)
//		{
//			s.push_back(s1[i]);
//		}
//	}
//
//	cout << s << endl;
//	return 0;
//}

////解法二：
int main()
{
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);

	for (int i = 0; i < s2.size(); ++i)
	{
		size_t p = s1.find(s2[i]);
		while (p != string::npos)
		{
			s1.erase(p,1);
			p = s1.find(s2[i]);
		}
	}

	cout << s1 << endl;
	return 0;
}