//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
///* 1.顺序表的实现
// * 2.链表的实现
// *   单 双 循环
// * 3.栈和队列
// *   顺序栈
// *	 链栈
// *	 顺序队列
// *	 循环队列
// *	 链式队列
// *
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//typedef int qelemtype;
//#define maxsize 9 //最大队列长度
// 
////顺序的 循环队列
//typedef struct
//{
//	qelemtype* base;//初始化的动态分配存储空间 存储队列的元素
//	// 队头 队尾
//	int front;//头指针 若队列不空 指向队列头元素
//	int rear;//尾指针 若队列不空 指向队尾元素的下一个位置
//}Queue;
//
////初始化
//void initqueue(Queue *q)
//{
//	q->base = (qelemtype*)malloc(sizeof(qelemtype) * maxsize);//数组存储 首元素的地址就是一个指针
//	if (!q->base)
//	{
//		printf("队列开辟失败！");
//		exit(-1);
//	}
//	q->front = 0;
//	q->rear = 0;
//}
////求队长
//int QueueLen(Queue *q)
//{
//	int len = (q->rear - q->front + maxsize) % maxsize;
//	//printf("%d", len);
//	return len;
//	//循环队列(q->rear - q->front + maxsize)%maxsize
//}
//
////入队
//int pushq(Queue *q,qelemtype x)
//{
//	
//	if ((q->rear+1)%maxsize == q->front)
//	{
//		printf("队满！");
//	}
//	q->base[q->rear] = x;
//	q->rear =( q->rear + 1) % maxsize;
//	return 1;
//}
////出队
//int popq(Queue *q)
//{
//	int x;
//	if (q->rear == q->front)
//	{
//		printf("队空！");
//	}
//	x = q->base[q->front];
//	q->front= (q->front + 1) % maxsize;
//	return x;
//}
////去队头元素
//int gettop(Queue *q)
//{
//	if (q->rear == q->front)
//	{
//		printf("队空！");
//	}
//	return  q->base[q->front];
//}
//
//int main()
//{
//	Queue q;
//	//int n;
//	printf("队列初始化！\n");
//	initqueue(&q);
//	printf("队列初始化成功！\n");
//	printf("请求入队:\n");
//	/*printf("输入入队个数：\n");
//	scanf("%d", &n);
//	printf("输入入队元素：\n");*/
//	pushq(&q, 1);
//	pushq(&q, 31);
//	pushq(&q, 41);
//	pushq(&q, 51);
//	pushq(&q, 1);
//	pushq(&q, 31);
//	pushq(&q, 41);
//	pushq(&q, 41);
//	printf("入队成功:\n");
//	printf("请求出队:\n");
//	printf("%d ", popq(&q));
//	printf("%d ", popq(&q));
//	printf("%d ", popq(&q));
//	
//
//	int len = QueueLen(&q);
//	printf("队长为：%d\n", len);
//	return 0;
//
//}