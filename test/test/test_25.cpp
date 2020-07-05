//
//#include<iostream> 
//#include<string> 
//using namespace std;
//
//////////////题目25 回文字符串A和字符串B。
///////////////////题目描述： “回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。
////////////////////////////花花非常喜欢这种拥有对称美的回文串，生日的时候她得到两个礼物分别是字符串A和字符串B。
////////////////////////////现在她非常好奇有没有办法将字符串B插入字符串A使产生的字符串是一个回文串。
////////////////////////////你接受花花的请求，帮助她寻找有多少种插入办法可以使新串是一个回文串。
////////////////////////////如果字符串B插入的位置不同就考虑为不一样的办法
//
//bool palindrome(const string &s)
//{
//	int begin = 0, end = s.size() - 1;
//	while (begin<end)
//	{
//		if (s[begin] == s[end])
//			++begin, --end;
//		else
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	string s(s1);
//	int count = 0;
//	for (int i = 0; i <= s1.size(); ++i) {
//		s.insert(i, s2);
//		if (palindrome(s))
//		{
//			++count;
//		}
//		s = s1;
//	}
//	cout << count << endl;
//	return 0;
//}
//