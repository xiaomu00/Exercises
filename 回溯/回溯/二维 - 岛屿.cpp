//#include<iostream>
//#include<vector>
//using namespace std;
//
//////��һ��01����1������½�أ�0������ �������1���ڣ���ô������1����ͬһ����������ֻ������������Ϊ���ڡ�
//////���� : ����½�ؿ������һ�����죨���� : �������ң� �жϵ��������
//
//
//int xy[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
//class Solution{
//private:
//	vector<vector<bool>> falg;
//	int m, n;
//	bool isxy(int x , int y){
//		return x >= 0 && x < m && y >= 0 && y < n;
//	}
//
//	void BackdateFunction(vector<vector<char>> &result , int x , int y){
//		falg[x][y] = true;
//		for (int i = 0; i < 4; ++i){
//			int mx = x + xy[i][0];
//			int ny = y + xy[i][1];
//			if (isxy(mx,ny) && !falg[mx][ny] && result[mx][ny] == '1')
//				BackdateFunction(result, mx, ny);
//		}
//		return;
//	}
//public:
//	int Function(vector<vector<char>> &result){
//		m = result.size();
//		n = result[0].size();
//		if (0 == m)
//			return 0;
//
//		falg = vector<vector<bool>>(m, vector<bool>(n,false));
//		int sum = 0;
//
//		for (int i = 0; i < m; ++i){
//			for (int j = 0; j < n; ++j){
//				if (result[i][j] == '1' && !falg[i][j]){
//					sum++;
//					BackdateFunction(result, i, j);
//				}		
//			}
//		}
//		return sum;
//	}
//};
//
//
//int main()
//{
//	int m, n;
//	while (cin>>m>>n){
//		vector<vector<char>> result;
//		result = vector<vector<char>>(m);
//		for (auto &it : result){
//			it = vector<char>(n);
//			for (auto &it1 : it)
//				cin >> it1;
//		}
//		Solution s;
//		cout << s.Function(result) << endl;
//	}
//    return 0;
//}