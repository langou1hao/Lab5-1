#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
/*
	���ܣ��Ʒ���
*/
void doExercise(int n)
{
	int score=0;		//��ϰ�÷֣���ʼ��Ϊ0
	int i=0;//��ϰ�����ļ�����
	int x=0;     //���������
	printf("��������Ŀ����"); 
	scanf("%d",&x);
				
	
	for(i=1;i<=x;i++)
	{
		score=score+test(n);	
	}
	
	printf("������ϰ�ѽ��������ķ���Ϊ��",score,"\n");
	printf("%d",score);
	printf("\n");
}
