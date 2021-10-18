#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>

//函数原型
int getChoice();
void showMenu();
void doExercise(int);
int test(int);

/*
	功能：用户选择功能
	返回：用户的功能选择
	1、加法		2、减法		3、乘法		4、除法		0、退出
*/
int getChoice()
{
	int choice;
	scanf("%d",&choice);
	return choice;
}

