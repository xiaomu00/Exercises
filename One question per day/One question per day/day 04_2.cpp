#include<iostream>
#include<string>
using namespace std;


////////////���⣺����ת�� 
////////////����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������

////////////����:    ����Ϊһ�У�M(32λ����)��N(2 �� N �� 16)���Կո������
////////////���:    Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����N����9�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ� 

////////////         �磺7 2
////////////             111


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int m, n;

	cin >> m >> n;
	char fg[] = "0123456789ABCDEF";
	string s;
	int flag = 0;

	if (m < 0)
	{
		flag = 1;
		m = -m;
	}

	while (m)
	{
		s += fg[m%n];
		m = m / n;
	}

	if (flag)
		s += '-';
	reverse(s.begin(), s.end());

	cout << s << endl;

	return 0;
}