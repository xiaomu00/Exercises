#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//////��Ŀ�������ַ���
//////��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like


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