/*
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�����ͼ����
����������
�������룬һ��������2~20����

���������
���ÿ�����룬����á�*����ɵ����Σ�ÿ����*��������һ���ո�

ʾ��1
���룺
2
�����
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