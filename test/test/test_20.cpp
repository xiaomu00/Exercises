//#include<iostream>
//#include<string.h>
//using namespace std;

////////////��Ŀ20 �ҳ��ַ�������������ַ���
/////////////////��Ŀ������ Ҫ�󣬸���һ���ַ������ҳ�������������ַ��������磬�����ַ���abc123bcd234567d,�����ս�����Ϊ234567��



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