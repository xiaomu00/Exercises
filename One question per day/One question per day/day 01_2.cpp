#include<iostream>
#include<string>
using namespace std;



////////���⣺ɾ�������ַ� 
////////       ���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ������磬���롱They are students.���͡�aeiou����
////////       ��ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
////////




//////�ⷨһ��
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

////�ⷨ����
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