//#include<iostream>
//#include<vector>
//using namespace std;
//
//
////在n个数中取k个
////  1234   
//
//
//
//
//class Solution {
//private:
//	void BackdateFunction(vector<vector<int>> &result ,int n, int k, int start, vector<int> &list){
//		if (k == list.size()){
//			//保存并退出
//			result.push_back(list);
//			return;
//		}
//
//		for (int i = start; i <= n - (k - list.size()) + 1; ++i){
//			list.push_back(i);
//			BackdateFunction(result, n, k, i + 1, list);
//			list.pop_back();
//		}
//	}
//
//public:
//	vector<vector<int>>  Function(int n , int k){
//		vector<vector<int>> result;
//		vector<int> list;
//		result.clear();
//		list.clear();
//		if (n <= 0 || k <= 0 || n < k)
//			return result;
//
//		BackdateFunction(result , n, k , 1 , list);
//		return result;
//	}
//};
//
//
//
//
//int main()
//{
//	int n, k;
//	Solution s;
//	vector<vector<int>> result;
//
//	while (cin>>n>>k){
//		result = s.Function(n,k);
//		for (auto &it : result){
//			for (auto &it1 : it)
//				cout << it1 << " ";
//			cout << endl;
//		}
//	}
//
//    return 0;
//}