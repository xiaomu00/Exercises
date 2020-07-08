//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
/////////题目26 求字符串字符合集
/////////题目描述： 输入一个字符串，求出该字符串包含的字符集合
/////////例如：输入  abcqweracb    输出   abcqwer
//       
//		   
//		  
//
////int main()
////{
////	string str;
////	int i = 0;
////	getline(cin, str);
////	int a[256] = { 0 };  //开辟256个空间，并初始化为false
////	for (i; i<str.size(); i++)
////	{
////		if (a[str[i]] == 0)
////		{
////			cout << str[i];
////			a[str[i]] = 1;
////		}
////	}
////	cout << endl;
////	return 0;
////}
//
////int main()
////{
////    string s1;
////    string s2;
////    getline(cin,s1);
////    
////    for(int i=0;i<s1.size();++i)
////    {
////      size_t p=s2.find(s1[i]);
////      if(p==string::npos)
////           s2+=s1[i]; 
////    }
////    cout<<s2<<endl;
////    return 0;
////}
//
//int main()
//{
//	string s1, s2;
//	cin >> s1;
//
//	while (cin >> s1)
//	{
//		for (int i = 0; i<s1.size(); ++i)
//		{
//			size_t p = s2.find(s1[i]);
//			if (p == string::npos)
//				s2 += s1[i];
//		//}
//		cout << s2 << endl;
//		s2.clear();
//	}
//	return 0;
//}