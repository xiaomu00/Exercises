//#include<iostream>
//#include <string>
//using namespace std;
//
////////////��Ŀ19�����ַ���
/////////////////��Ŀ������ ��һ�仰�еĵ��ʽ��е��ã�����֮�䵹ת�����ʱ������ã��������Ų����á�
//////////////////////////////����һ�仰��I come from China.�������ú��ɡ�China.from come I����
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
//		reverseStr(s, 0, length - 1); //�Ƚ����Ӱ��ַ���ת
//		int j = 0;
//		for (int i = 0; i<length; i++) 
//		{
//			if (s[i] == ' ') 
//			{
//				reverseStr(s, j, i - 1); //�ٽ����ӵĵ��ʰ��ַ���ת
//				j = i + 1;
//			}
//		}
//		cout << s << endl;
//	}
//
//	return 0;
//}
