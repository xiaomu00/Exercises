//#include<iostream>
//#include<assert.h>
//#include<list>
//using namespace std;
//
////////////////��Ŀ23 ��һ������mת��Ϊn����   
////////////////////���� m  n    ���  ת���������
//
//list<char> Hexadecimal_conversion(int m,int n)
//{
//	assert(n >= 2 && n <= 16);
//	list<char> s;
//	int  c;
//    int i = 0;
//	while (m>0)
//	{
//		int k = m%n;
//		m = m / n;
//		if (k < 10)
//		{
//			 c = '0' + k;
//			s.push_front(c);
//		}	
//		else
//		{
//			c = 'A' + k-10;
//			s.push_front(c);
//		}
//		i++;
//
//	}
//	
//	return s;
//}
//
//int main()
//{
//	int a, n;
//	cin >> a >> n;
//	list<char> ls;
//	ls = Hexadecimal_conversion(a, n);
//	list<char>::iterator it=ls.begin();
//	while (it != ls.end())
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//	return 0;
//}