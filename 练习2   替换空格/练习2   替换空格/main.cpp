#include<iostream>
using namespace std;

void Replace_Spaces(char*s, int Cap)
{
	if (nullptr==s)
	{
		cout << "字符串不合法！" << endl;
		return;
	}
	int i = 0,len = 0, count = 0;
	while (s[i] != '\0')
	{
		++len;
		if (' ' == s[i])
			++count;
		i++;
	}
	int s_len = len + 2 * count;
	if (s_len > Cap)
	{
		cout << "空间不足，替换失败！" << endl;
		return;
	}
	int p = len;
	int q = s_len;
	while (p >= 0&&p<q)
	{
		if (' ' == s[p])
		{
			s[q--] = '0';
			s[q--] = '2';
			s[q] = '%';
		}

		else
		{
			s[q] = s[p];
		}
		--p;
		--q;
	}
}


int main()
{
	char* s;
	int n=0;
	cout << "请输入空间大小：>" << endl;
	while (cin >> n, n <= 0)
	{
		cout << "空间不合法，请重新输入";
	}
	
	s = (char*)malloc(sizeof(char)*n);
	cout << "请输入一个字符串：>" << endl;
	getchar();
	gets(s);

	
	Replace_Spaces(s, n);
	cout << "替换后的字符串为：" ;
	puts(s);
    return 0;
}
