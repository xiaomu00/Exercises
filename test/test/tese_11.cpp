//#include<iostream>
//#include <algorithm> 
//#include<vector>
//using namespace std;
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////题目11 
////////////////牛牛举办了一次编程比赛, 参加比赛的有3*n个选手, 每个选手都有一个水平值a_i，现在要将这些选手进行组队, 
////////////////组成n个队伍, 即每个队伍3人.该队伍的水平值等于该队伍中第二高水平值。
////////////////例如：
////////////////一个队伍三个队员的水平值分别是3, 3, 3.那么队伍的水平值是3
////////////////一个队伍三个队员的水平值分别是3, 2, 3.那么队伍的水平值是3
////////////////一个队伍三个队员的水平值分别是1, 5, 2.那么队伍的水平值是2
////////////////
////////////////为了让比赛更有看点, 牛牛想安排队伍使所有队伍的水平值总和最大。
////////////////如样例所示：
////////////////如果牛牛把6个队员划分到两个队伍 如果方案为：
////////////////    team1 : {1, 2, 5}, team2 : {5, 5, 8}, 这时候水平值总和为7
////////////////	team1 : {2, 5, 8}, team2 : {1, 5, 5}, 这时候水平值总和为10
////////////////			没有比总和为10更大的方案, 所以输出10
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> s(3 * n);
//	long long sum = 0;
//	for (int i = 0; i<3 * n; ++i)
//	{
//		cin >> s[i];
//	}
//	sort(s.begin(), s.end());
//	for (int i = n; i<3 * n - 1; i += 2)
//	{
//		sum += s[i];
//	}
//	cout << sum << endl;
//}
