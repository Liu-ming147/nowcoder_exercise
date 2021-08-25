/*
描述
KiKi学习了结构体和指针，他了解了结构体类型可以定义包含多个不同类型成员，而指针本质是内存地址，是引用数据的另外一种方式。
现在他想将多个输入的数据通过结构体和指针的方式连接在一起，形成一个单向链表，即：每个结点是结构体类型，包括整型数据成员（data）和结构体指针类型成员（next），
每个结点的指针部分指向下一个输入的结点。具体建立过程如下：先输入n个整数，按照数据输入的顺序建立一个带头结点的单链表，
再输入一个数据m,将单链表中的值为m的结点全部删除。输出删除后的单链表信息。

输入描述：
包括三行：
第一行输入数据个数n (3≤n≤100);
第二行依次输入n个整数，用空格分隔;

第三行输入欲删除数据m。

输出描述：
包括两行：
第一行输出完成删除后的单链表长度；

第二行依次输出完成删除后的单链表数据。


示例1
输入：
5
1 2 2 3 4
2
输出：
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
	struct Node *list = NULL;//指向第一个结点
	struct Node *tail = NULL;//指向最后的结点
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data);

		struct Node *pn = (struct Node *)malloc(sizeof(struct Node));
		pn->data = data;
		pn->next = NULL;//创建一个空链表
		//尾部插入
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
	//删除指定数字

	int del = 0;
	int a = 0;
	scanf("%d", &del);
	struct Node *cur = list;
	struct Node *pevl = NULL;
	while (cur)
	{
		if (cur->data == del)
		{
			//删除
			if (cur == list)
			{            //第一个结点
				list = cur->next;
				cur = list;
			}
			else
			{             //非第一个结点
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
	//打印链表
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