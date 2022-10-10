//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include "stdio.h"    
//#include "stdlib.h"   
//#include "io.h"  
//#include "math.h"  
//#include "time.h"
//
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//#define MAXSIZE 20 
//
//typedef int Status;
//typedef int QElemType;
//
////结点结构
//typedef struct QNode {
//	QElemType data;
//	struct QNode* next;
//}QNode, * QueuePtr;
//
////队列的链表结构
//typedef struct {
//	QueuePtr front;//队头
//	QueuePtr rear;//对尾
//}LinkQueue;
//
//Status visit(QElemType e)
//{
//	printf("%d ", e);
//	return OK;
//}
//
////初始化空的队列
//Status InitQueue(LinkQueue* Q) {
//	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));
//	if (!Q->front)
//		exit(OVERFLOW);
//	Q->front->next = NULL;
//	return OK;
//}
//
////销毁队列
//Status DestroyQueue(LinkQueue* Q) {
//	while (Q->front) {
//		Q->rear = Q->front->next;//从队头开始销毁
//		free(Q->front);
//		Q->front = Q->rear;
//	}
//	return OK;
//}
//
////清空队列，队头指针还在
//Status ClearQueue(LinkQueue* Q) {
//	QueuePtr p, q;
//	Q->rear = Q->front;//跟初始状态相同，Q->rear指向头结点
//	p = Q->front->next;//开始销毁队头元素，队头，对尾依然保留
//	Q->front->next = NULL;
//	while (p) {
//		q = p;
//		p = p->next;
//		free(q);
//	}
//	return OK;
//}
//
////队列是否空
//Status QueueEmpty(LinkQueue Q) {
//	if (Q.front == Q.rear)
//		return TRUE;
//	else
//		return FALSE;
//}
//
////取队列长度
//int QueueLength(LinkQueue Q) {
//	int i = 0;
//	QueuePtr p = Q.front;
//	while (Q.rear != p) {
//		i++;
//		p = p->next;
//	}
//	return i;
//}
//
////获取队头元素
//Status GetHead(LinkQueue Q, QElemType* e) {
//	QueuePtr p;
//	if (Q.front == Q.rear)//队空
//		return ERROR;
//	p = Q.front->next;
//	*e = p->data;
//	return OK;
//}
//
////对尾插入元素
//Status EnQueue(LinkQueue* Q, QElemType e) {
//	QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
//	if (!s)
//		exit(OVERFLOW);
//	s->data = e;
//	s->next = NULL;
//	Q->rear->next = s;//原来对尾的next指向新的元素
//	Q->rear = s;//将新元素变为对尾
//	return OK;
//}
//
////队头元素出队
//Status DeQueue(LinkQueue* Q, QElemType* e) {
//	QueuePtr p;
//	if (Q->front == Q->rear)
//		return ERROR;
//	p = Q->front->next;//ｐ指向队头元素
//	*e = p->data;
//	Q->front->next = p->next;//头结点的后继指向队头的下一个元素
//	if (Q->rear == p) {//队头等于对尾了
//		Q->rear = Q->front;//对尾指向头结点
//	}
//	free(p);
//	return OK;
//}
//
////遍历元素
//Status QueueTraverse(LinkQueue Q) {
//	QueuePtr p;
//	p = Q.front->next;
//	while (p) {
//		visit(p->data);
//		p = p->next;
//	}
//	printf("\n");
//	return OK;
//}
//
//int main() {
//	int i;
//	QElemType d;
//	LinkQueue q;
//	i = InitQueue(&q);
//
//	//入队１０个元素
//	for (int index = 0; index < MAXSIZE; index++) {
//		EnQueue(&q, index);
//	}
//	QueueTraverse(q);
//
//	DestroyQueue(&q);
//	printf("队列已经销毁,q.front=%p q.rear=%p\n", q.front, q.rear);
//
//	return 0;
//}