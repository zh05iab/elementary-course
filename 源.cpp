#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//条件运算符，也叫三目运算符，表示需要三个表达式组合
 //语法格式为表达式1？表达式2;表达式3，含义为：若1的值为“1”，则2的值作为整个表达式的值，否则3作为整个表达式的值
	int a = 10;
	int b = 20;
	int max = a > b ? 30 : 40;
	printf("%d\n",max);
	//可以理解为下述if else语句
	/*
	if(a>b)
	{
	int max=30;
	}
	else
	{
	int max=40;
	}
	*/
	return 0;
}