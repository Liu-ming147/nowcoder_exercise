/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。
输入描述：
多组输入，一个整数（2~20）。

输出描述：
针对每行输入，输出用“*”组成的菱形，每个“*”后面有一个空格。

示例1
输入：
2
输出：
  *
 * *
* * *
 * *
  *
*/
#include<stdio.h>
int main()
{
	int n, i, j, k;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = n - i; j > 0; j--)
				printf(" ");
			for (k = 0; k <= i; k++)
				printf("* ");
			printf("\n");
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				printf(" ");
			for (k = n - i; k > 0; k--)
				printf("* ");
			printf("\n");
		}
	}

	return 0;
}