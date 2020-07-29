#include<iostream>
#include<vector>
using namespace std;

////���ӣ�https://www.nowcoder.com/questionTerminal/b736e784e3e34731af99065031301bca
////��Ŀ���������к�Ϊĳһֵ��·��
////����һ�Ŷ������ĸ��ڵ��һ�����������ֵ����ӡ���������н��ֵ�ĺ�Ϊ��������������·����
////·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����


struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
class Solution {
public:
	void _FindPath(TreeNode* root, int expectNumber, vector<vector<int>> &v_val, vector<int> &tmp)
	{
		if (root == nullptr)
			return;
		tmp.push_back(root->val);
		expectNumber -= root->val;

		if (root->left == nullptr && root->right == nullptr && expectNumber == 0)
			v_val.push_back(tmp);

		_FindPath(root->left, expectNumber, v_val, tmp);
		_FindPath(root->right, expectNumber, v_val, tmp);

		tmp.pop_back();
	}
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int> > v_val;
		if (root == nullptr)
			return v_val;
		vector<int> tmp;
		_FindPath(root, expectNumber, v_val, tmp);
		return v_val;
	}
};

int main()
{


    return 0;
}