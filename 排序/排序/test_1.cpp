#include<iostream>
#include<string>
using namespace std;


//////题目：回文数索引
//////给定一个仅由小写字母组成的字符串。现在请找出一个位置，删掉那个字母之后，字符串变成回文。请放心总会有一个合法的解。如果给定的字符串已经是一个回文串，那么输出 - 1。
//////输入描述 :
//////链接：https ://www.nowcoder.com/practice/b6edb5ca15d34b1eb42e4725a3c68eba?%20tpId=179&&tqId=34268&rp=1&ru=/activity/oj&qru=/ta/exam-other/question-ranking
//////

int fun(string &s)
{
	if (s.size() == 1)
		return -1;
	int flag = 0;
	int si = 0;
	int start = 0;
	int end = s.size() - 1;

	while (start<end)
	{
		if (s[start] != s[end])
		{
			flag = 1;
			if (s[start + 1] == s[end])
				si = start;
			else
				si = end;
			break;
		}
		start++;
		end--;
	}

	if (flag == 0)
		return -1;
	else
		return si;
}
int main()
{
	string s;
	int n;
	cin >> n;
	while (n)
	{
		cin >> s;
		int a = fun(s);
		cout << a << endl;
		n--;
	}
	return 0;
}