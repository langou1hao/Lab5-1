#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
/*
	功能：计分器
*/
void doExercise(int n)
{
	int score=0;		//练习得分，初始化为0
	int i=0;//练习题数的计数器
	int x=0;     //做题的数量
	printf("请输入题目数量"); 
	scanf("%d",&x);
				
	
	for(i=1;i<=x;i++)
	{
		score=score+test(n);	
	}
	
	printf("本次练习已结束，您的分数为：",score,"\n");
	printf("%d",score);
	printf("\n");
}
