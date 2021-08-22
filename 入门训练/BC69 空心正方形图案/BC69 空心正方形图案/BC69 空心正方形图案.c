/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
输入描述：
多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
输出描述：
针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
示例1
输入：
4
输出：
* * * *
*     *
*     *
* * * *
*/
#include<stdio.h>
int main()
{
	int n, i, j;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;
}