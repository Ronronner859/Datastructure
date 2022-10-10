//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
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
////���ṹ
//typedef struct QNode {
//	QElemType data;
//	struct QNode* next;
//}QNode, * QueuePtr;
//
////���е�����ṹ
//typedef struct {
//	QueuePtr front;//��ͷ
//	QueuePtr rear;//��β
//}LinkQueue;
//
//Status visit(QElemType e)
//{
//	printf("%d ", e);
//	return OK;
//}
//
////��ʼ���յĶ���
//Status InitQueue(LinkQueue* Q) {
//	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));
//	if (!Q->front)
//		exit(OVERFLOW);
//	Q->front->next = NULL;
//	return OK;
//}
//
////���ٶ���
//Status DestroyQueue(LinkQueue* Q) {
//	while (Q->front) {
//		Q->rear = Q->front->next;//�Ӷ�ͷ��ʼ����
//		free(Q->front);
//		Q->front = Q->rear;
//	}
//	return OK;
//}
//
////��ն��У���ͷָ�뻹��
//Status ClearQueue(LinkQueue* Q) {
//	QueuePtr p, q;
//	Q->rear = Q->front;//����ʼ״̬��ͬ��Q->rearָ��ͷ���
//	p = Q->front->next;//��ʼ���ٶ�ͷԪ�أ���ͷ����β��Ȼ����
//	Q->front->next = NULL;
//	while (p) {
//		q = p;
//		p = p->next;
//		free(q);
//	}
//	return OK;
//}
//
////�����Ƿ��
//Status QueueEmpty(LinkQueue Q) {
//	if (Q.front == Q.rear)
//		return TRUE;
//	else
//		return FALSE;
//}
//
////ȡ���г���
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
////��ȡ��ͷԪ��
//Status GetHead(LinkQueue Q, QElemType* e) {
//	QueuePtr p;
//	if (Q.front == Q.rear)//�ӿ�
//		return ERROR;
//	p = Q.front->next;
//	*e = p->data;
//	return OK;
//}
//
////��β����Ԫ��
//Status EnQueue(LinkQueue* Q, QElemType e) {
//	QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
//	if (!s)
//		exit(OVERFLOW);
//	s->data = e;
//	s->next = NULL;
//	Q->rear->next = s;//ԭ����β��nextָ���µ�Ԫ��
//	Q->rear = s;//����Ԫ�ر�Ϊ��β
//	return OK;
//}
//
////��ͷԪ�س���
//Status DeQueue(LinkQueue* Q, QElemType* e) {
//	QueuePtr p;
//	if (Q->front == Q->rear)
//		return ERROR;
//	p = Q->front->next;//��ָ���ͷԪ��
//	*e = p->data;
//	Q->front->next = p->next;//ͷ���ĺ��ָ���ͷ����һ��Ԫ��
//	if (Q->rear == p) {//��ͷ���ڶ�β��
//		Q->rear = Q->front;//��βָ��ͷ���
//	}
//	free(p);
//	return OK;
//}
//
////����Ԫ��
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
//	//��ӣ�����Ԫ��
//	for (int index = 0; index < MAXSIZE; index++) {
//		EnQueue(&q, index);
//	}
//	QueueTraverse(q);
//
//	DestroyQueue(&q);
//	printf("�����Ѿ�����,q.front=%p q.rear=%p\n", q.front, q.rear);
//
//	return 0;
//}