//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//
//
//#include "test.h"
//
////两种存储结构 但是操作受限的线性表
///*
// * 1.顺序栈
// * 2.链栈
// */
////顺序栈的表示和实现 一组地址连续的存储的一次存放栈底到栈顶的数据元素 栈底一般在低地址端
//
//#define MAXSIZE 100
//typedef int selemtype;
//
//typedef struct Node
//{
//	int data;
//	struct Node* pNext;
//} NODE, * PNODE;
//typedef struct stack
//{
//	selemtype* base;//栈底指针
//	selemtype* top;//栈顶指针
//	int stacksize;//栈容量
//}st;
//
////初始化 内存中开辟一段空间来使用 top == base 都指向栈底
//void initstack(st *s)
//{
//	s->top = (int*)malloc( MAXSIZE*sizeof(int));//分配空间 大小为100 指向这个空间的首元素
//	if (s->top == NULL)
//	{
//		printf("开辟失败");
//		exit(-1);
//	}
//	s->base = s->top;
//	s->stacksize = MAXSIZE;
//	printf("栈已经开辟成功!\n");
//}
//
////顺序栈是否为空
//bool isempty(st *s)
//{
//	if (s->base == s->top)
//	{
//		return true;
//		printf("栈空！");
//	}
//	else
//	{
//		return false;
//		printf("栈回收！");
//	}
//}
////求栈len
//int lenstack(st *s)
//{
//	return (s->top - s->base);
//}
////清空顺序栈
//void qkstack(st *s)
//{
//	if (s->base)
//	{
//		s->top = s->base;
//		printf("栈已经清空了！");
//	}
//}
////销毁栈
//void destoryst(st *s)
//{
//	if (s->base)
//	{
//		free(s->base);
//		s->stacksize = 0;
//		s->base = s->top = NULL;
//		printf("栈已经释放了！收回内存");
//	}
//}
////入栈
//void pushstack(st *s,selemtype x)
//{
//	if ((lenstack(s)) == s->stacksize)
//	{
//		exit(-1);
//	}
//	else
//	{
//		*(s->top) = x;//简引用
//		s->top++;
//		//*(s->top)++ = x;
//	}
//	printf("%d ", x);
//}
////出栈
//void  popstack(st* s)
//{
//	int x;
//	if (isempty(s))
//	{
//		printf("栈空！");
//		exit(-1);
//	}
//	else
//	{
//		--(s->top);
//		x = *(s->top);
//		printf("%d ", x);
//	}
//}
//
//int Find(st*s,int y)
//{
//	if (isempty(s))
//	{
//		printf("栈空！");
//		exit(-1);
//	}
//	for (int i = 0;i<lenstack(s);i++)
//	{
//		if (*(s->top) == y)
//		{
//			return i;
//		}
//		s->top++;
//	}
//	return -1;
//}
//int main()
//{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
//	st s1;
//	selemtype n,x;
//	printf("初始化：\n");
//	initstack(&s1);
//	printf("入栈个数：\n");
//	scanf("%d", &x);
//	printf("请向栈中存入数据:\n");
//	for (int i = 0;i<x;i++)
//	{
//		scanf("%d", &n);
//		pushstack(&s1, n);
//	}
//	printf("入栈成功！\n");
//	printf("栈len:\n");
//	int len = lenstack(&s1);
//	printf("len = %d\n", len);
//	printf("出栈：\n");
//	for (int i = 0; i < x; i++)
//	{
//		popstack(&s1);
//	}
//	destoryst(&s1);
//}