/*
����
KiKiѧϰ�˽ṹ���ָ�룬���˽��˽ṹ�����Ϳ��Զ�����������ͬ���ͳ�Ա����ָ�뱾�����ڴ��ַ�����������ݵ�����һ�ַ�ʽ��
�������뽫������������ͨ���ṹ���ָ��ķ�ʽ������һ���γ�һ��������������ÿ������ǽṹ�����ͣ������������ݳ�Ա��data���ͽṹ��ָ�����ͳ�Ա��next����
ÿ������ָ�벿��ָ����һ������Ľ�㡣���彨���������£�������n���������������������˳����һ����ͷ���ĵ�����
������һ������m,���������е�ֵΪm�Ľ��ȫ��ɾ�������ɾ����ĵ�������Ϣ��

����������
�������У�
��һ���������ݸ���n (3��n��100);
�ڶ�����������n���������ÿո�ָ�;

������������ɾ������m��

���������
�������У�
��һ��������ɾ����ĵ������ȣ�

�ڶ�������������ɾ����ĵ��������ݡ�


ʾ��1
���룺
5
1 2 2 3 4
2
�����
3
1 3 4
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
int main()
{
	int data, n, i;
	struct Node *list = NULL;//ָ���һ�����
	struct Node *tail = NULL;//ָ�����Ľ��
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data);

		struct Node *pn = (struct Node *)malloc(sizeof(struct Node));
		pn->data = data;
		pn->next = NULL;//����һ��������
		//β������
		if (list == NULL)
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = pn;
		}
	}
	//ɾ��ָ������

	int del = 0;
	int a = 0;
	scanf("%d", &del);
	struct Node *cur = list;
	struct Node *pevl = NULL;
	while (cur)
	{
		if (cur->data == del)
		{
			//ɾ��
			if (cur == list)
			{            //��һ�����
				list = cur->next;
				cur = list;
			}
			else
			{             //�ǵ�һ�����
				pevl->next = cur->next;
				cur = pevl->next;
			}
			n--;
		}
		else
		{
			pevl = cur;
			cur = cur->next;
		}
	}
	printf("%d\n", n);
	//��ӡ����
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	cur = list;
	while (cur)
	{
		struct Node *pd = cur;
		cur = cur->next;
		free(pd);

	}
	return 0;
}