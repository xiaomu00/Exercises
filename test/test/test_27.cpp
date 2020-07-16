#include<iostream>
using namespace std;

//int sum(int m, int n)
//{
//	if (0 == m || 0 == n)
//		return 1;
//	else
//		return sum(m, n - 1) + sum(m - 1, n);
//}
//
//
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		int S = sum(m, n);
//		cout << S << endl;
//
//	}
//	return 0;
//}




class A
{
public:
	int a;
	int b;
	virtual void f()
	{}
	A(int m, int n) :a(m), b(n)
	{}
	~A()
	{}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}

};

int main()
{

	A a(5,10);
	int *p = (int*)&a;
	*(p + 0) = 100;
	*(p + 1) = 200;
	cout << a.geta() << "  " << a.getb();
}