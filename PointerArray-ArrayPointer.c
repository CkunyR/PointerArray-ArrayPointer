//指针数组 -> 数组
//数组指针 -> 指针


#include <stdio.h>

int main()
{
	int a = 1;
	int b = 10;
	int c = 20;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组--存放整形
	//字符数组--存放字符
	//指针数组--存放指针
	
	int* arr1[10] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr1[i]));
	}
	return 0;
}