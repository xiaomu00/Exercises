#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//////题目：倒置字符串
//////将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like


int main()
{
	string s;
	getline(cin, s);

	reverse(s.begin(),s.end());
	string::iterator start = s.begin();
	while (start != s.end())
	{
		string::iterator end = start;
		while(end != s.end() && *end != ' ')
			++end;

		reverse(start,end);

		if (end != s.end())
			start = end+1;
		if (end == s.end())
			start = s.end();
	}
	cout << s << endl;
	return 0;
}