#include<iostream>
using namespace std;

////题目：赋值运算符函数

class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);

	CMyString& operator = (const CMyString& tr)
	{
		if (this != &tr)
		{
			delete[]m_pData;
			m_pData = new char[strlen(tr.m_pData)+1];
			strcpy(m_pData,tr.m_pData);
		}
		return *this;
	}

	~CMyString(void);
	
private:
	char* m_pData;
};


int main()
{


    return 0;
}