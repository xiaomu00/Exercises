#include<iostream>
#include<vector>
using namespace std;


//////��Ŀ27  �����������ĺ����������
//////����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes, �������No���������������������������ֶ�������ͬ��
//////���ӣ�https ://www.nowcoder.com/questionTerminal/a861533d45854474ac791d90e447bafd

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		int n = sequence.size();
		if (!n)
			return false;
		int root = sequence[n - 1];
		int i = 0;
		for (i; i<n - 1; ++i)
		{
			if (sequence[i]>root)
				break;
		}
		int j = i;
		for (j; j<n - 1; ++j)
		{
			if (sequence[j]<root)
				return false;
		}

		vector<int> lift;
		for (int a = 0; a<i; ++a)
			lift.push_back(sequence[a]);
		bool lf = true;
		if (lift.size()!=0)
			lf = VerifySquenceOfBST(lift);

		vector<int> right;
		for (int a = i; a<n - 1; ++a)
			right.push_back(sequence[a]);
		bool rg = true;
		if (right.size()!=0)
			rg= VerifySquenceOfBST(right);

		return lf&&rg;
	}
};

int main()
{
	vector<int> v = { 7, 4, 6, 5 };
	Solution s;
	bool b=s.VerifySquenceOfBST(v);
	cout << b << endl;
	
}