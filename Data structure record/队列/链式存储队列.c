//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
///*
// * 1.顺序表
// *   动态顺序表
// * 2.链表
// *   单链表：顺序存储
// *			 动态存储
// * 3.栈
// *		顺序栈
// *		动态栈
// * 4.队列
// *		顺序队列
// *		动态队列
// */
///*
// *	队列的链式表示和实现
// */
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//#define maxqsize 100
//typedef int qelemtype;
//
//typedef struct qnondes
//{
//	qelemtype data;
//	struct qnode* next;
//}qnode,*node;
//
//typedef struct
//{
//	node front;
//	node rear;
//}linkqueue;
//
////初始化 找到头节点
//void init(linkqueue *q)
//{
//	q->front = q->rear = (qnode*)malloc(sizeof(qnode));
//	if (!q->front)
//	{
//		exit(-1);
//	}
//	q->front = NULL;
//	q->rear = NULL;
//}
//
////释放队列
//void desqueue(linkqueue *q)
//{
//	//qnode *p;
//	while (q->front)
//	{
//		q->rear = q->front->next;
//		free(q->front);
//		q->front = q->rear;
//
//	}
//}
////入队
//int push(linkqueue *q,int x)
//{
//	qnode* p;
//	if (q->front == NULL)
//	{
//		printf("队列为空！");
//		exit(-1);
//	}
//	p = (qnode*)malloc(sizeof(qnode));//造一个结点
//	p->data = x;
//	p->next = NULL;
//	q->rear->next = p;
//	q->rear = p;
//	
//}
//void pop(linkqueue *q)
//{
//	qnode* p;
//	int x;
//	if (q->front==q->rear)
//	{
//		exit(-1);
//	}
//	p = q->front->next;
//	x = p->next;
//	q->front->next = p->next;
//	if (q->rear == p)
//	{
//		q->front = q->rear;
//	}
//	free(p);
//}
//int main()
//{
//	return 0;
//}