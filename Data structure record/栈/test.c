#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
typedef int selemtype;
typedef struct snode
{
	selemtype data;
	struct snode* next;
}snode, * ls;
/*
 *链表的头指针就是栈顶
 *不需要结点
 *基本不存在栈满的情况
 *空栈相当于头指针指向空
 *插入和删除仅仅在栈顶处执行
 *
 */
//初始化
void initstack(snode *s)
{
	s = NULL;
}
void isempty(snode *s)
{
	if (s == NULL)
	{
		printf("栈空！");
		exit(-1);
	}
	else
	{
		printf("不为空！");
		exit(-1);
	}
}
void pushs(snode*s,int x)
{
	snode* p;
	p= (snode*)malloc(sizeof(snode));
	p->data = x;
	p->next = s;
	s = p;
}
int pop(snode *s)
{
	int n;
	snode* p;
	if (s==NULL)
	{
		printf("栈空");
		exit(-1);
	}
	n = s->data;
	p = s;
	s = s->next;
	free(p);
	return n;
}

int main()
{
	snode L;
	initstack(&L);
	printf("入栈！");
	pushs(&L, 1);
	pushs(&L, 31);
	pushs(&L, 41);
	pushs(&L, 51);
	printf("出栈！");


}


/*
 *
 * 栈和递归
 *
 * 递归的定义：
 *	一个对象部分包含他自己，或者他自己给自己定义
 *	一个过程直接或间接的调用自己
 *
 *	1.数据函数 阶乘 斐波那契
 *	2.数据结构 广义表 二叉树
 *	3.求解实际问题 迷宫问题 汉诺塔问题
 *
 *	分治法：把复杂的问题分成子问题
 *
 *  递归 二分法
 */