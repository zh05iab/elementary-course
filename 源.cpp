#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//�����������Ҳ����Ŀ���������ʾ��Ҫ�������ʽ���
 //�﷨��ʽΪ���ʽ1�����ʽ2;���ʽ3������Ϊ����1��ֵΪ��1������2��ֵ��Ϊ�������ʽ��ֵ������3��Ϊ�������ʽ��ֵ
	int a = 10;
	int b = 20;
	int max = a > b ? 30 : 40;
	printf("%d\n",max);
	//�������Ϊ����if else���
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