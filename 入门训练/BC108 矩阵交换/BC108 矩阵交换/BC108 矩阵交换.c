/*
描述
KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵。请编程帮他解答。

输入描述：
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)

从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
接下来一行输入k，表示要执行k次操作（1≤k≤5）。接下来有k行，每行包括一个字符t和两个数a和b，中间用空格格分隔，t代表需要执行的操作，当t为字符'r'时代表进行行变换，当t为字符'c'时代表进行列变换，a和b为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10）。


输出描述：
输出n行m列，为矩阵交换后的结果。每个数后面有一个空格。
示例1
输入：
2 2
1 2
3 4
1
r 1 2
输出：
3 4
1 2
*/
#include<stdio.h>
int main()
{
	int n, m, i, j, k, arr[10][10];
	char t;
	int a, b;
	int tmp;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	getchar();
	while (k)
	{
		scanf("%c %d %d", &t, &a, &b);
		getchar();
		if (t == 'r')
		{
			for (i = 0; i < m; i++)
			{
				tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		if (t == 'c')
		{
			for (i = 0; i < n; i++)
			{
				tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}
		k--;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}