//#include<iostream>
//#include <string>
//using namespace std;
//
////////////题目19倒置字符串
/////////////////题目描述： 将一句话中的单词进行倒置（单词之间倒转，单词本身不倒置），标点符号不倒置。
//////////////////////////////比如一句话“I come from China.”，倒置后变成“China.from come I”。
//
//
//
//
//void reverseStr(string &s, int begin, int end){
//
//	while (begin < end) 
//	{
//		char temp = s[begin];
//		s[begin] = s[end];
//		s[end] = temp;
//		begin++;
//		end--;
//	}
//}
//
//
//int main(){
//
//	string s;
//
//	while (getline(cin, s)) 
//	{
//
//		int length = (int)s.length();
//		reverseStr(s, 0, length - 1); //先将句子按字符反转
//		int j = 0;
//		for (int i = 0; i<length; i++) 
//		{
//			if (s[i] == ' ') 
//			{
//				reverseStr(s, j, i - 1); //再将句子的单词按字符反转
//				j = i + 1;
//			}
//		}
//		cout << s << endl;
//	}
//
//	return 0;
//}
