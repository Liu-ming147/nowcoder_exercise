/*
����
KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ�����ӣ����ܻ�ʤ�����������״̬���жϵ�ǰ��Ӯ��

����������
�������е��ַ�Ԫ�أ���������״̬���ַ�Ԫ���ÿո�ֿ�������ǰ���̣�����Ԫ��ΪK����KiKi��ҵ����ӣ�ΪO��ʾû�����ӣ�ΪB����BoBo��ҵ����ӡ�
���������
���KiKi��ʤ�������KiKi wins!����
���BoBo��ʤ�������BoBo wins!����
���û�л�ʤ�������No winner!����
ʾ��1
���룺
K O B
O K B
B O K
�����
KiKi wins!
*/
#include<stdio.h>
int main()
{
	char arr[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%c", &arr[i][j]);
			getchar();
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (arr[i][1] == arr[i][0] && arr[i][0] == arr[i][2])
		{
			if (arr[i][1] == 'K')
			{
				printf("KiKi wins!\n");
				return 0;
			}
			else if (arr[i][1] == 'B')
			{
				printf("BoBo wins!\n");
				return 0;
			}
			else
			{
				printf("No winner!\n");
				return 0;
			}
		}
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
		{
			if (arr[1][i] == 'K')
			{
				printf("KiKi wins!\n");
				return 0;
			}
			else if (arr[1][i] == 'B')
			{
				printf("BoBo wins!\n");
				return 0;
			}
			else
			{
				printf("No winner!\n");
				return 0;
			}
		}
		if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
			|| (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]))
		{
			if (arr[1][1] == 'K')
			{
				printf("KiKi wins!\n");
				return 0;
			}
			else if (arr[1][1] == 'B')
			{
				printf("BoBo wins!\n");
				return 0;
			}
			else
			{
				printf("No winner!\n");
				return 0;
			}
		}
	}

	return 0;
}