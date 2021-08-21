/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
输入描述：
多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
输出描述：
针对每行输入，输出用“*”组成的X形图案。

示例1
输入：
5
输出：
*   *
 * *
  *
 * *
*   *
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
				if (j == i || j + i == n - 1)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
	}
}