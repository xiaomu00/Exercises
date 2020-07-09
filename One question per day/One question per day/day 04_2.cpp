#include<iostream>
#include<string>
using namespace std;


////////////标题：进制转换 
////////////给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数

////////////输入:    输入为一行，M(32位整数)、N(2 ≤ N ≤ 16)，以空格隔开。
////////////输出:    为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，则对应的数字规则参考16进制（比如，10用A表示，等等） 

////////////         如：7 2
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