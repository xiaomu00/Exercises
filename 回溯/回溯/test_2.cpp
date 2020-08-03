#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//////��Ŀ���ַ���������
//////���ӣ�https ://www.nowcoder.com/practice/fe6b651b66ae47d7acce78ffdd9a96c7?%20tpId=13&tqId=11180&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//////����һ���ַ���, ���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc, 
//////���ֵ����ӡ�����ַ�a, b, c�������г����������ַ���abc, acb, bac, bca, cab��cba��

class Solution {
public:
	void swap(string &str, int &start, int i)
	{
		char temp = str[start];
		str[start] = str[i];
		str[i] = temp;
	}

	bool IsExist(vector<string> &result, string str)
	{
		for (auto it = result.begin(); it<result.end(); ++it)
		{
			if (*it == str)
				return true;
		}
		return false;
	}
	void _Permutation(string &str, int start, vector<string> &result)
	{
		if (start == str.length() - 1)
		{
			//ȥ��
			if (!IsExist(result, str))
				result.push_back(str);
			return;
		}

		for (int i = start; i<str.size(); ++i)
		{
			swap(str, start, i);
			_Permutation(str, start + 1, result);
			swap(str, start, i);
		}
	}

	vector<string> Permutation(string str) {
		vector<string> result;
		if (str.size()>0)
		{
			_Permutation(str, 0, result);
			sort(result.begin(), result.end());
		}

		return result;
	}
};

int main()
{


    return 0;
}