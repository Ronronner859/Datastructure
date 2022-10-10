#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/
/* -- 单链表的建立 --*/
#include <stdio.h>
#include <stdlib.h>

typedef int elemlist;

/*
 * 1.初始化链表
 * 2.判断链表是否为空
 * 3.清空链表
 * 4.销毁链表
 * 5.数据头插法/数据尾插法
 * 6.查找
 * 7.删除
 * 8.插入
 * 9.打印	
 */
//定义结构类型
typedef struct node
{
	//数据域
	elemlist data;
	//指针域
	struct node* next;
}node,*listnode;

//链表初始化 置为空表
void initlist(node *L)
{
	L = (node*)malloc(sizeof(node));//开辟一个结点给L
	L->next = NULL;//将该结点指向为NULL
}
//判断链表是否为空
void isempty(node* L)
{
	if (L->next == NULL)
	{
		printf("开辟失败!\n");
	}
	else
	{
		printf("开辟成功！\n");
	}

}
//清空链表
void qklist(node*L)
{
	node* p, * q;
	p = L->next;
	while (p!=NULL)
	{
		q = p->next;
		free(q);
		p = q;
	}
	L->next = NULL;
}
//头插插入数据
void createlist(node *L)
{
	node* p;
	int i = 1;
	int j;
	while (i!=0)
	{
		scanf("%d", &j);
		if (j!=-1)
		{
			p = (node*)malloc(sizeof(node));
			p->data = j;
			p->next = L->next;//新节点插入到表头
			L->next = p;//头节点放最前
		}
		else
		{
			i = 0;
		}
	}
}

void creatfromtail(node* l) {//利用尾插法建立单链表
	node* p;//新建一个结点指针
	node* r;//再建立一个尾指针
	int i = 1;
	int j;
	r = l;//很重要的一步，令尾指针r指向头结点l,便于做尾插入 
	while (i != 0) {
		scanf("%d", &j);
		if (j != -1) {
			p = (node*)malloc(sizeof(node));//建立一个新结点
			p->data = j;
			r->next = p;//尾指针的指针域指向新结点p
			r = p;//再让尾指针放在p后面，尾指针永远在最后 

		}
		else
		{
			i = 0;//输入-1则结束 
			r->next = NULL;//尾指针的指针域设置为空，表示链表的结束 
		}
	}
}
//打印
void printlist(node *L)
{
	node* p;
	p = L->next;
	printf("链表的数据为：\n");
	while (p != NULL)
	{
		printf("%d ", p->data);//首元结点取出数据
		p = p->next;
	}
}



int main()
{
	node L;/*
	initlist(&L);*/
	//printf("头插入输入数据：\n");
	//createlist(&L);
	//printlist(&L);
	//qklist(&L);
	printf("尾插入输入数据：\n");
	creatfromtail(&L);
	printlist(&L);
	return 0;
}