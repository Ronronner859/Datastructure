#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef void status;

typedef struct Lnode //声明结点的类型和指向结点的指针类型
{
	ElemType data;//存入的数据 数据域
	struct Lnode* next;//一个结构体的指针指向下一个元素的地址  指针类型取决于指针自己本身存储的数据类型 next指向的是下一个结构体中元素的地址 所有next是下一个结构体的类型
}Lnode,*LinkList;//LinkList为指向结构体Lnode的指针类型
void PrintList(Lnode* L);

//初始化，将头节点的指针域置为空，数据域不使用
Lnode *InitList(Lnode *L)
{
	L = (Lnode*)malloc(sizeof(Lnode));
	L->next = NULL;
	return L;
}
void Init(Lnode* L)
{
	
	L->next = NULL;//->操作成员
	
}
//插入数据：头插法 
void create_list(Lnode* L)
{
	Lnode* p; //申请一个新结点，将数据放入到新结点之中，然后将新结点插入到头节点之后即可。
	int n = 0;
	int num;
	printf("请输入元素个数：\n");
	scanf("%d", &n);
	printf("请输入元素：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //输入数据
		p = (Lnode*)malloc(sizeof(Lnode));  //再新建一个结点
		p->data = num;  //把输入的值赋值给新结点的数据域
		p->next = L->next;  //把新结点插入到表头 
		L->next = p;  //头结点要始终放在最前面 
	}

}
//插入数据：尾插法 将新结点插入到当前单链表的表尾
void creatfromtail(Lnode* L) {
	Lnode* p;//新建一个结点指针
	int n = 0;
	int num;
	printf("请输入元素个数：\n");
	scanf("%d", &n);
	printf("请输入元素：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //输入数据
		p = (Lnode*)malloc(sizeof(Lnode));//建立一个新结点
		p->data = num;
		L->next = p;   //尾指针的指针域指向新结点p
		L = p;   //再让尾指针放在p后面，尾指针永远在最后 
	}

}
//判断链表是否为空？

int IsEmpty(Lnode *L)
{
	if (L->next == NULL)
	{
		printf("222");
		return -1;
	}
	else
	{
		printf("111");
		return 1;
	}
}
//单链表的销毁 释放空间  但是头指针和头节点仍然存在
void DestroyList(Lnode *L)
{
	Lnode* p;
	while (L != NULL)
	{
		p = L;//把当前结点赋给p L存了头节点地址 
		L = L->next;//下一结点赋给L 下一结点的地址就是当前结点的Next
		free(p);//将当前结点的空间释放
	}
}
//清空链表 头节点指针域设置为空
void QkList(Lnode *L)
{
	Lnode* p, * q;
	p = L->next;//首元结点的地址给 p
	while (p != NULL)
	{
		q = p->next;//下一结点的地址
		free(p);
		p = q;
		
	}
	L->next = NULL;//头节点指针域为空
}
//求链表的表长
int length(Lnode *L)
{
	Lnode* p;
	p = L->next;//指向第一个结点地址
	int n = 0;
	if (p)//当前的结点为空的时候就是结束的时候
	{
		n++;
		p = p->next;//下一结点的地址
	}
	return  n;
}
//取出某个位置的值
int FindElemList(Lnode *L,int i,ElemType e)
{
	Lnode* p;
	//顺序存取 一个个查找
	p = L->next;
	int j = 1;
	while (p&&j<i)
	{
		p = p->next;
		++j;
	}
	if (!p||j>i)//太大或太小
	{
		return -1;
	}
	e = p->data;
	return e;
}
//查找运算 两种方法 1.返回指针 2.返回指针
int SearchList(Lnode *L, int x)
{
	int i = 1;
	Lnode* p;
	p = L->next;
	while (p && p->data!=x)
	{
		p = p->next;
		i++;
	}
	if (p != NULL)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
//插入 第i个结点前插入为值为e的新结点
void Insert_List(Lnode* L, int i, ElemType e)
{
	Lnode* p, * s;
	p = L;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i - 1)
	{
		printf("Erron!");
	}
	s = (LinkList)malloc(sizeof(Lnode));
	s->data = e;
	s->next = p->next;
	p->next = s;
}
//删除
void deletelist(Lnode *L,int i)
{
	Lnode* p,*q;
	p = L;
	int j = 0;
	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i - 1)
	{
		printf("Erron!");
	}
	q = p->next;
	p->next = q->next;
	//p->next = p->next->next;
	//x = q->data;
	free(q);
}
void PrintList(Lnode* L)
{
	printf("该链表的内容为：");
	while (L->next != NULL) {
		printf("%d ", L->next->data);
		L = L->next;
	}
	printf("\n");
}
LinkList Connect(Lnode* L, Lnode* M)
{
	Lnode* p;
	p = L->next; //将p存入表L的头节点
	L->next = M->next->next; //将M的的表头链接L的表尾
	free(M->next);//释放M的表头
	M->next = p;
	return M;
}
void showMenu()
{
	printf("\t    【0】头插法输入\n");
	printf("\t    【1】尾插法输入\n");
	printf("\t    【2】查找\n");
	printf("\t    【3】删除\n");
	printf("\t    【4】某个位置插入数据\n");
	printf("\t    【5】退出\n");
	return;
}

int main()
{
	Lnode *L = NULL;
	//定义链表 L
	Lnode* M= NULL;
	Lnode* M2 = NULL;//合并连个单链表
	//定义链表 M
	int m,x,y;
	printf("链表L初始化:\n");
	L = InitList(L);
	printf("链表L初始化成功:\n");
	printf("链表L初始化:\n");
	M = InitList(M);
	printf("链表M初始化成功:\n");
	while (true)
	{
		printf("你想选择的操作：\n");
		showMenu();
		printf("请输入：\n");
		scanf("%d", &m);
		switch (m)
		{
		case 0:
			printf("用头插法插入链表L：\n");
			create_list(L);
			PrintList(L);
			break;
		case 1:
			printf("用尾插法插入链表M：\n");
			creatfromtail(M);
			PrintList(M);
			break;
		case 2:
			printf("输入查询数据：\n");
			scanf("%d", &x);
			printf("%d在元素中的位置为：%d\n", x,SearchList(L, x));
			break;
		case 3:
			printf("输入删除的位置：\n");
			scanf("%d", &x);
			deletelist(L, x);
			PrintList(L);
			break;
		case 4:
			printf("输入插入位置：\n");
			scanf("%d", &x);
			printf("输入数据：\n");
			scanf("%d", &y);
			Insert_List(L, 2, y);
			printf("插入成功：\n");
			PrintList(L);
			break;
		case 5:
			exit(-1);
		default:
			printf("输入有误！");
		}
	}
	return 0;
}