#include<iostream>
#include<vector>
#include<stack>
using namespace std;

////��Ŀ��ջ��ѹ�롢��������
////���ӣ�https://www.nowcoder.com/questionTerminal/d77d11405cc7470d82554cb392585106
////���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
////����ѹ��ջ���������־�����ȡ���������1, 2, 3, 4, 5��ĳջ��ѹ��˳������4, 5, 3, 2, 1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
////��4, 3, 5, 1, 2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.empty())
			return true;
		stack<int> v;
		int i = 0;
		int j = 0;
		int p = pushV[i];
		int q = popV[j];
		while (i <= pushV.size() && j<popV.size())
		{
			if (v.empty() || v.top() != popV[j])
			{
				v.push(pushV[i]);
				i++;
			}
			else
			{
				v.pop();
				j++;
			}
		}
		if (!v.empty())
			return false;
		else
			return true;
	}
};

int main()
{


    return 0;
}