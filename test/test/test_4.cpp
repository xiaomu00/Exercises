//#include<iostream>
//#include<stack>
//using namespace std;

//////////题目4 用两个队列实现链表
//////
//////////问题描述:
//////////////用两个队列实现链表

//template <class T>
//class myqueue
//{
//
//public:
//	myqueue(void)
//	{}
//	~myqueue(void)
//	{}
//
//public:
//	void myqueuepushback(T x);
//	T myqueuedeletefront();
//
//
//	void show()
//	{
//		while (st1.size() != 0)
//		{
//			T num = st1.top();
//			st1.pop();
//			st2.push(num);
//		}
//		while (st2.size() != 0)
//		{
//			T num = st2.top();
//			st2.pop();
//			cout << num << " ";
//		}
//		cout << endl;
//	}
//
//private:
//
//	stack<T>  st1;
//	stack<T>  st2;
//};
//
////队列的尾插
//template <class T>
//void myqueue<T>::myqueuepushback(const T x)
//{
//	st1.push(x);
//}
//
////队列的头删
//template <class T>
//T myqueue<T>::myqueuedeletefront()
//{
//	if (0 == st2.size())
//	{
//
//		while (st1.size() != 0)
//		{
//			T& num = st1.top();
//			st1.pop();
//			st2.push(num);
//		}
//	}
//	if (0 == st2.size())
//		throw new exception("queue is empty");
//
//	T q = st2.top();
//	st2.pop();
//	return q;
//}
//
//
//int main()
//{
//	myqueue<int> qu;
//	qu.myqueuepushback(1);
//	qu.myqueuepushback(2);
//	qu.myqueuepushback(3);
//	qu.myqueuepushback(4);
//	qu.myqueuepushback(5);
//	qu.myqueuepushback(6);
//	try
//	{
//		/*qu.myqueuedeletefront();
//		qu.myqueuedeletefront();
//		qu.myqueuedeletefront();
//		qu.myqueuedeletefront();
//		qu.myqueuedeletefront();
//		qu.myqueuedeletefront();
//		qu.myqueuedeletefront();*/   ////当为空的时候再删除会出错
//
//	}
//	catch (exception *pe)
//	{
//		cout << pe -> what() << endl;
//	}
//	
//
//	qu.show();
//	return 0;
//}
