#include<iostream>
#include<vector>
#include<string>
using namespace std;

////给定一个二维数组和一个单词，找出该单词是否存在于网格中。该单词可以由顺序相邻单元的字母构成，
////其中“相邻”单元是那些水平或垂直相邻的单元。同一字母单元格不能使用多次

//int d[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
//vector<vector<bool>> falgv;
//
//class Solution {
//private:
//	int n, m;
//
//	
//
//	
//
//	bool isxy(int x, int y){
//		return x >= 0 && x < n && y >= 0 && y < m;
//	}
//
//	bool BackdateFunction(vector<vector<char>> &result, string target, int pos, int x, int y){
//		if (pos == target.size() - 1) // 要找的最后一个字符
//			return result[x][y] == target[pos];
//		else{
//			if (result[x][y] == target[pos]){ // 找到了当前元素的位置，接下来看四周是否匹配下一个字符
//				falgv[x][y] = true;
//
//
//				//从 x , y 位置出发，向四周寻找
//				for (int i = 0; i < 4; ++i){
//					x = d[i][0];
//					y = d[i][1];
//					if (isxy(x, y) && !falgv[x][y]){ //范围合法，并且这个元素之前没有被访问过
//						if (BackdateFunction(result, target, pos + 1, x, y))
//							return true;
//					}
//				}
//
//				falgv[x][y] = false;
//			}
//			return false;
//		}
//	}
//
//public:
//	bool Function(vector<vector<char>> &result ,  string target){
//		m = result.size();
//		n = result[0].size();
//
//		for (int i = 0; i < result.size(); ++i){
//			for (int j = 0; j < result[i].size(); ++j){
//				bool falg = BackdateFunction(result , target, 0 , i ,j);
//				if (falg)
//					return true;
//			}
//		}
//
//		return false;
//	}
//
//};
//
//int main()
//{
//	int n, m; 
//	cin >> n >> m; 
//
//	falgv = vector<vector<bool>>(n, vector<bool>(m, false));
//
//	vector<vector<char>> result(n);
//	for (auto &it : result){
//		it.resize(m);
//		for (auto &it1 : it){
//			cin >> it1;
//		}
//	}
//
//	string str;
//	Solution s;
//
//	while (cin >> str){
//		bool falg = s.Function(result, str);
//		if (falg)
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//
//    return 0;
//}

////给定一个二维数组和一个单词，找出该单词是否存在于网格中。该单词可以由顺序相邻单元的字母构成，
////其中“相邻”单元是那些水平或垂直相邻的单元。同一字母单元格不能使用多次


int xy[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };

class Solution{
private:
	int m;
	int n;
	vector<vector<bool>> f;

	bool isxy(int x, int y){
		return x >= 0 && x < m && y >= 0 && y < n;
	}
	bool BackdateFunction(vector<vector<char>> &relust, string &target , int pos , int  m , int n){
		if (pos == target.size() - 1){
			return target[pos] == relust[m][n];
		}
		else if (relust[m][n] == target[pos]){
			f[m][n] = true;
			for (int i = 0; i < 4; ++i){
				int mx = m + xy[i][0];
				int ny = n + xy[i][1];
				if (isxy(mx, ny) && !f[mx][ny]){
					if (BackdateFunction(relust, target, pos + 1, mx, ny)){
						return true;
					}
				}
			}
			f[m][n] = false;
		}
		return false;
	}
public:
	bool Function(vector<vector<char>> &relust , string &target){
		if (target == "")
			return false;
        //初始化
		m = relust.size();
		n = relust[0].size();
		f = vector<vector<bool>>(m , vector<bool>(n,false));

		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j){
				bool falg = BackdateFunction(relust , target , 0 , i , j );
				if (falg)
					return true;
				else
					return false;
			}
		}
	}
};


int main(){
	int m , n;
	cin >> m >> n;
	Solution s;
	vector<vector<char>> v(m);
	for (auto & it : v){
		it = vector<char>(n);
		for (auto & it1 : it){
			cin >> it1;
		}
	}
	
	string str;
	while (cin>>str){
		bool f = s.Function(v, str);
		cout << f << endl;
	}
		
	return 0;
}