#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//////题目：字符串的排列
//////链接：https ://www.nowcoder.com/practice/fe6b651b66ae47d7acce78ffdd9a96c7?%20tpId=13&tqId=11180&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//////输入一个字符串, 按字典序打印出该字符串中字符的所有排列。例如输入字符串abc, 
//////则按字典序打印出由字符a, b, c所能排列出来的所有字符串abc, acb, bac, bca, cab和cba。

//class Solution {
//public:
//	void swap(string &str, int &start, int i)
//	{
//		char temp = str[start];
//		str[start] = str[i];
//		str[i] = temp;
//	}
//
//	bool IsExist(vector<string> &result, string str)
//	{
//		for (auto it = result.begin(); it<result.end(); ++it)
//		{
//			if (*it == str)
//				return true;
//		}
//		return false;
//	}
//	void _Permutation(string &str, int start, vector<string> &result)
//	{
//		if (start == str.length() - 1)
//		{
//			//去重
//			if (!IsExist(result, str))
//				result.push_back(str);
//			return;
//		}
//
//		for (int i = start; i<str.size(); ++i)
//		{
//			swap(str, start, i);
//			_Permutation(str, start + 1, result);
//			swap(str, start, i);
//		}
//	}
//
//	vector<string> Permutation(string str) {
//		vector<string> result;
//		if (str.size()>0)
//		{
//			_Permutation(str, 0, result);
//			sort(result.begin(), result.end());
//		}
//
//		return result;
//	}
//};



//
//class Solution {
//private:
//	vector<bool> flag;
//	void Permutation_1(vector<string> &vs,string &str , int n , string list){
//		if (n == str.size()){
//			//保存结果并退出
//			vs.push_back(list);
//			return;
//		}
//
//		for (int i = 0; i < str.size(); ++i){
//			if (!flag[i]){
//				list += str[i];
//				flag[i] = true;
//				Permutation_1(vs, str, n+1, list);
//				list.pop_back();
//				flag[i] = false;
//			}
//		}
//		return;
//
//	}
//public:
//	
//	vector<string> Permutation(string str) {
//		vector<string> vs;
//		vs.clear();
//		if (0 == str.size())
//			return vs;
//
//		flag = vector<bool>(str.size() , false);
//		Permutation_1(vs,str,0,"");
//		return vs;
//	}
//};
//
//
//
//int main()
//{
//	string str;
//	vector<string> result;
//	Solution s;
//	while (getline(cin,str)){
//		result = s.Permutation(str);
//		for (auto &it : result){
//			cout << it << endl;
//		}
//	}
//    return 0;
//}

//class Solution{
//private:
//	vector<bool> falg;
//	void BackdateFunction(vector<vector<int>> &result , vector<int> &v, int n , vector<int> list){
//		if (n == v.size()){//递归结束，将值填充并返回
//			result.push_back(list);
//			return;
//		}
//
//		for (int i = 0; i < v.size() ; ++i){
//			if (!falg[i]){
//				list.push_back(v[i]);
//				falg[i] = true;
//				BackdateFunction(result , v , n+1 ,list);
//				//回溯
//				list.pop_back();
//				falg[i] = false;
//			}
//		}
//		return;
//
//	}
//public:
//	vector<vector<int>> Function(vector<int> v){
//		vector<vector<int>> result;
//		falg = vector<bool>(v.size(),false);
//		if (0 != v.size()){
//			vector<int> list;
//			BackdateFunction(result , v , 0 , list);
//		}
//		return result;
//
//	}
//};
//
//int main(){
//	int n;
//	Solution s;
//	while (cin >> n){		
//		vector<int> v(n);
//		for (auto & it : v){
//			cin >> it;
//		}
//		vector<vector<int>> result = s.Function(v);
//		for (auto &it : result){
//			for (auto &it1 : it){
//				cout << it1 << " ";
//			}
//			cout << endl;
//		}
//	}
//	
//	return 0;
//}