//#include<iostream>
//using namespace std;
//
//
//
//
//int _fun(int m)
//{
//	int a = m / 4;
//	int b = m % 4;
//	int c = 0;
//	if (b == 0)
//		c = 0;
//	else if (b == 1)
//		 c = 1;
//	else c = 2;
//
//	return 2 * a + c;
//}
//
//int fun(int m, int n)
//{
//	if (m==0&&n==0)
//		return 1;
//	int s1 = _fun(n);
//	int s2 = _fun(m);
//	return s1*s2;
//}
//
//
//
//int main()
//{
//	int m = 0, n = 0;
//	cin >> m >> n;
//	int s = fun(m,n);
//	cout << s << endl;
//	return 0;
//}
//
//
//
//
//
//
///*nclude<iostream>
//
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int W, H, i, j, counts = 0;
//
//	cin >> W >> H;
//
//	if (W % 4 == 0 || H % 4 == 0)
//	{
//		counts = W*H / 2;
//	}
//	else if (W % 2 == 0 && H % 2 == 0)
//	{
//		counts = (W*H / 4 + 1) * 2;
//
//	}
//	else
//	{
//		counts = W*H / 2 + 1;
//	}
//	cout << counts << endl;
//
//	return 0;
//
//}*/