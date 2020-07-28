#include"tree.h"

class Solution {
public:
	
    ////层次遍历
	vector<int> PrintFromTopToBottom(TreeNode* root) 
	{
		vector<int> v;

		if (root == NULL)
			return v;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			TreeNode* front = q.front();
			v.push_back(front->val);
			q.pop();
			if (front->left != NULL)
				q.push(front->left);
			if (front->right != NULL)
				q.push(front->right);
		}
		return v;

	}

	//////////////////////////////////////////////////////////////////////////////////////////
	//递归
	///////////////////////////////////
	//////前序遍历
	//vector<int> VLR1(TreeNode* root)
	//{
	//	vector<int> v;
	//	_VLR1(root, &v);
	//	return v;
	//}
	//void _VLR1(TreeNode* t, vector<int>* v)
	//{
	//	if (t == NULL)
	//		return ;
	//	(*v).push_back(t->val);
	//	_VLR1(t->left, v);
	//	_VLR1(t->right, v);
	//}
	//
	///////////////////////////////////
	//////中序遍历
	//vector<int> LVR1(TreeNode* root)
	//{
	//	vector<int> v;
	//	_LVR1(root, &v);
	//	return v;
	//}
	//void _LVR1(TreeNode* t, vector<int>* v)
	//{
	//	if (t == NULL)
	//		return;
	//	_LVR1(t->left, v);
	//	(*v).push_back(t->val);
	//	_LVR1(t->right, v);
	//}
	//
	///////////////////////////////////
	//////后序遍历
	//vector<int> LRV1(TreeNode* root)
	//{
	//	vector<int> v;
	//	_LRV1(root, &v);
	//	return v;
	//}
	//void _LRV1(TreeNode* t, vector<int>* v)
	//{
	//	if (t == NULL)
	//		return;
	//	_LRV1(t->left, v);
	//	_LRV1(t->right, v);
	//	(*v).push_back(t->val);
	//}


	////////////////////////////////////////////////////////////////////////////////////////
	////非递归
	/////////////////////////////////
	////前序遍历
	vector<int> VLR2(TreeNode* root)
	{
		vector<int> v;
		_VLR2(root, &v);
		return v;
	}
	void _VLR2(TreeNode* t, vector<int>* v)
	{

	}
	
	/////////////////////////////////
	////中序遍历
	vector<int> LVR1(TreeNode* root)
	{
		vector<int> v;
		_LVR1(root, &v);
		return v;
	}
	void _LVR1(TreeNode* t, vector<int>* v)
	{
		if (t == NULL)
			return;
		_LVR1(t->left, v);
		(*v).push_back(t->val);
		_LVR1(t->right, v);
	}
	
	/////////////////////////////////
	////后序遍历
	vector<int> LRV1(TreeNode* root)
	{
		vector<int> v;
		_LRV1(root, &v);
		return v;
	}
	void _LRV1(TreeNode* t, vector<int>* v)
	{
		if (t == NULL)
			return;
		_LRV1(t->left, v);
		_LRV1(t->right, v);
		(*v).push_back(t->val);
	}

};






int main()
{
	const int c[] = { 1,2,4,-1,-1,5,8,-1,-1,9,-1,-1,3,6,-1,-1,7,-1,-1};//"abd##eh##i##cf##g##" 
	MyTree mt(c);
	TreeNode* root = mt.getroot();

	Solution s;
	vector<int> v = s.LRV1(root);
	for (auto e : v)
		cout << e<<" ";
	cout << endl;


	return 0;
}