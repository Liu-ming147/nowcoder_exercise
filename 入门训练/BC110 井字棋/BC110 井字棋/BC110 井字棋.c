/*
描述
KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。请根据棋盘状态，判断当前输赢。

输入描述：
三行三列的字符元素，代表棋盘状态，字符元素用空格分开，代表当前棋盘，其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子。
输出描述：
如果KiKi获胜，输出“KiKi wins!”；
如果BoBo获胜，输出“BoBo wins!”；
如果没有获胜，输出“No winner!”。
示例1
输入：
K O B
O K B
B O K
输出：
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