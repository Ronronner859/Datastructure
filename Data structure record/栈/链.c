//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
#include "test.h"
#define MAXSIZE 100
typedef int selemtype;

//通过链表表示栈 -- 链栈  栈的结点类型
/*
 * 链栈的指针方向是前驱元素
 *
 * 1.链表的头指针就是栈顶
 * 2.链栈不需要头节点
 * 3.基本不存在栈满的情况
 * 4.空栈相当于头指针指向空
 * 5.插入和删除仅在栈顶处执行
 *
 */
typedef struct snode
{
	selemtype data;
	struct snode* next;
}snode,*ls;

//初始化 就是开辟空间往里面存数据
void init(snode *s)
{
	s = NULL;
}

bool isempty(snode *s)
{
	if (s==NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

//存入元素
//void create(snode *s)
//{
//	
//	
//	printf("向栈中输入元素：\n");
//	int n;
//	printf("输入个数为：\n");
//	scanf("%d", &n);
//	printf("请输入元素：\n");
//	for (int i = 0;i<n;i++)
//	{
//		scanf("%d", &s->data[i]);
//	}
//}
//入栈
void push(snode *s,int x)
{
	//栈里插入元素 栈顶 先找出一个空间 指针p指向给它 给数据域赋值 就成为了栈顶元素 在指向s的next域  然后在修改栈顶的指针p 然后s的链栈就创建完成
	snode* p;
	p = (snode*)malloc(sizeof(snode)*MAXSIZE);
	if (p==NULL)
	{
		printf("结点开辟失败！");
		exit(-1);
	}
	//将数据给p指向的data域
	p->data = x;
	//将p的next指向s的栈顶
	p->next = s;
	//修改栈顶指针
	s = p;
	
}

void  pop(snode* s)
{
	snode* p;
	int x;
	p = (snode*)malloc(sizeof(snode));
	if (s == NULL)
	{
		printf("栈空！");
	}
	x = p->data;
	p = s;
	s = s->next;
	free(p);
	
}
//取栈顶元素
int gettop(snode*s)
{
	if (s!= NULL)
	{
		return s->data;
	}
	return 1;
}
//求栈长
//void slen(snode *s)
//{
//	if (!isempty(&s))
//	{
//		exit(-1);
//	}
//	int len = ;
//	printf("栈长为：%d\n", len);
//}
int main()
{
	
	snode s;
	printf("链栈初始化\n");
	init(&s);
	printf("链栈初始化成功\n");
	printf("进行入栈！\n");
	push(&s,1);
	push(&s, 21);
	push(&s, 31);
	push(&s, 51);
	printf("入栈成功！\n");
	printf("进行出栈：\n");
	pop(&s);
	pop(&s);
	pop(&s);
	printf("出栈结束：\n");
	//slen(&s);
	
	
}