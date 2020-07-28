#ifndef _TREE_H_
#define _TREE_H_

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;


struct TreeNode {
char val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};



class MyTree {
public:
	MyTree(const int* s);
	~MyTree()
	{}
public:
	TreeNode* MyTree_1(const int* s, int *p);
	TreeNode* getroot()
	{
		return root;
	}
		
private:
	struct TreeNode* root;
};


#endif /*_TREE_H_*/
