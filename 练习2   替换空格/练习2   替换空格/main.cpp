#include<iostream>
using namespace std;

void Replace_Spaces(char*s, int Cap)
{
	if (nullptr==s)
	{
		cout << "�ַ������Ϸ���" << endl;
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
		cout << "�ռ䲻�㣬�滻ʧ�ܣ�" << endl;
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
	cout << "������ռ��С��>" << endl;
	while (cin >> n, n <= 0)
	{
		cout << "�ռ䲻�Ϸ�������������";
	}
	
	s = (char*)malloc(sizeof(char)*n);
	cout << "������һ���ַ�����>" << endl;
	getchar();
	gets(s);

	
	Replace_Spaces(s, n);
	cout << "�滻����ַ���Ϊ��" ;
	puts(s);
    return 0;
}
