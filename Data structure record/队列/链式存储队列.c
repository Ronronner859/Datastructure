//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
///*
// * 1.˳���
// *   ��̬˳���
// * 2.����
// *   ������˳��洢
// *			 ��̬�洢
// * 3.ջ
// *		˳��ջ
// *		��̬ջ
// * 4.����
// *		˳�����
// *		��̬����
// */
///*
// *	���е���ʽ��ʾ��ʵ��
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
////��ʼ�� �ҵ�ͷ�ڵ�
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
////�ͷŶ���
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
////���
//int push(linkqueue *q,int x)
//{
//	qnode* p;
//	if (q->front == NULL)
//	{
//		printf("����Ϊ�գ�");
//		exit(-1);
//	}
//	p = (qnode*)malloc(sizeof(qnode));//��һ�����
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