/*
����
����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��

���磺

655 = 6 * 55 + 65 * 5

1461 = 1*461 + 14*61 + 146*1

��� 5λ���е����� Lily Number��

����������
��
���������
һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
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