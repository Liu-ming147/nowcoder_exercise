/*
描述
不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。

输入描述：
多组输入，每一行输入整数n（0 <= n < 31）。
输出描述：
针对每组输入输出对应的2的n次方的结果。
示例1
输入：
2
10
输出：
4
1024
*/
#include<stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 2 << (n - 1));
		getchar();
	}

	return 0;
}