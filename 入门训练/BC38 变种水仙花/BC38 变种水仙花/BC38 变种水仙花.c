/*
描述
变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。

例如：

655 = 6 * 55 + 65 * 5

1461 = 1*461 + 14*61 + 146*1

求出 5位数中的所有 Lily Number。

输入描述：
无
输出描述：
一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, left, right, sum;
	for (i = 10000; i < 100000; i++)
	{
		sum = 0;
		for (n = 4; n > 0; n--)
		{
			left = i / pow(10, n);
			right = i % (int)pow(10, n);
			sum += left * right;
		}
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}