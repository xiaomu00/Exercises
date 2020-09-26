#include<iostream>
#include<vector>
#include<string>
using namespace std;

////����һ����ά�����һ�����ʣ��ҳ��õ����Ƿ�����������С��õ��ʿ�����˳�����ڵ�Ԫ����ĸ���ɣ�
////���С����ڡ���Ԫ����Щˮƽ��ֱ���ڵĵ�Ԫ��ͬһ��ĸ��Ԫ����ʹ�ö��

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
//		if (pos == target.size() - 1) // Ҫ�ҵ����һ���ַ�
//			return result[x][y] == target[pos];
//		else{
//			if (result[x][y] == target[pos]){ // �ҵ��˵�ǰԪ�ص�λ�ã��������������Ƿ�ƥ����һ���ַ�
//				falgv[x][y] = true;
//
//
//				//�� x , y λ�ó�����������Ѱ��
//				for (int i = 0; i < 4; ++i){
//					x = d[i][0];
//					y = d[i][1];
//					if (isxy(x, y) && !falgv[x][y]){ //��Χ�Ϸ����������Ԫ��֮ǰû�б����ʹ�
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

////����һ����ά�����һ�����ʣ��ҳ��õ����Ƿ�����������С��õ��ʿ�����˳�����ڵ�Ԫ����ĸ���ɣ�
////���С����ڡ���Ԫ����Щˮƽ��ֱ���ڵĵ�Ԫ��ͬһ��ĸ��Ԫ����ʹ�ö��


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
        //��ʼ��
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