/*
����
������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
����������
һ�У��ַ����У�����A��B���������ַ�0������
���������
һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
ʾ��1
���룺
ABBABBAAB0
�����
B
*/
#include<stdio.h>
int main()
{
	int countA = 0;
	int countB = 0;
	char c[100];
	int i = 0;
	scanf("%s", c);
	while (c[i] != '\0')
	{
		if (c[i] == 'A')
			countA++;
		if (c[i] == 'B')
			countB++;
		i++;
	}
	if (countA > countB)
		printf("A");
	else if (countA < countB)
		printf("B");
	else
		printf("E");

	return 0;
}