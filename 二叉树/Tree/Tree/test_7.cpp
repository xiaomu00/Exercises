#include<iostream>
using namespace std;



////��Ŀ�������������
////�Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�
////���ӣ�https ://www.nowcoder.com/practice/435fb86331474282a3499955f0a41e8b?

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
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int lt = TreeDepth(pRoot->left);
		int rt = TreeDepth(pRoot->right);

		return lt > rt ? lt + 1 : rt + 1;
	}
};

int main()
{


    return 0;
}