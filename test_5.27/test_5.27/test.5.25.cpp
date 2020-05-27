#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Seek_Repeat_Number(int *a,int len)
{
	int i=0,m=0;
	if (a == NULL || len <= 0)
	{
		printf("空数组!\n");
		return;
	}
	for (i=0; i < len; i++)
	{
		if (a[i]<0 || a[i]>len - 1)
		{
			printf("数组数据不满足题目要求!\n");
			return;
		}
	}
	for (i = 0; i < len; ++i)
	{
		while (a[i] != i)
		{
			m = a[i];
			if (a[i] == a[m])
			{
				printf("%d重复了\n",a[i]);
				return;
			}
			else
			{
				int x = a[i];
				a[i] = a[m];
				a[m] = x;
			}		
		}
	}
}
int main()
{
	int a[20];
	int x = 0, i = 0,len=0;
	printf("请输入一个数组（元素个数不能超过20）,以“-1”结束!\n");
	while (scanf("%d", &x), x != -1)
	{
		a[i] = x;
		len++;
		i++;
	}
    Seek_Repeat_Number(a,len);
	return 0;
}