/*
描述
小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。

输入描述：
每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)

输出描述：
对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
示例1
输入：
10 20
输出：
30
*/
#include<stdio.h>
int main()
{
	long long n, m, gcd, lcm, i, j;
	while (scanf("%lld %lld", &n, &m) != EOF)
	{
		i = n;
		j = m;
		while (n % m != 0)
		{
			gcd = n % m;
			n = m;
			m = gcd;
		}
		gcd = m;
		lcm = i * j / gcd;
		printf("%lld\n", gcd + lcm);
	}

	return 0;
}