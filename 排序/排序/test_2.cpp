#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

///*��Ŀ : �������ų���С����
//����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
//������������{ 3��32��321 }�����ӡ���������������ųɵ���С����Ϊ321323
//����*/��https ://www.nowcoder.com/practice/8fecd3f8ba334add803bf2a06af1b993?%20tpId=13&tqId=11185&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking



class Solution {
public:
	static bool cmp(int x, int y)
	{
		string xs = to_string(x);
		string ys = to_string(y);
		string A = xs;
		A += ys;
		string B = ys;
		B += xs;
		return A<B;
	}
	string PrintMinNumber(vector<int> numbers) {
		if (numbers.size() == 0)
			return "";
		sort(numbers.begin(), numbers.end(), cmp);
		string result;

		for (auto i = 0; i<numbers.size(); ++i)
		{
			result += to_string(numbers[i]);
		}
		return result;
	}
};

int main()
{


    return 0;
}