//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
///* 1.˳����ʵ��
// * 2.�����ʵ��
// *   �� ˫ ѭ��
// * 3.ջ�Ͷ���
// *   ˳��ջ
// *	 ��ջ
// *	 ˳�����
// *	 ѭ������
// *	 ��ʽ����
// *
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//typedef int qelemtype;
//#define maxsize 9 //�����г���
// 
////˳��� ѭ������
//typedef struct
//{
//	qelemtype* base;//��ʼ���Ķ�̬����洢�ռ� �洢���е�Ԫ��
//	// ��ͷ ��β
//	int front;//ͷָ�� �����в��� ָ�����ͷԪ��
//	int rear;//βָ�� �����в��� ָ���βԪ�ص���һ��λ��
//}Queue;
//
////��ʼ��
//void initqueue(Queue *q)
//{
//	q->base = (qelemtype*)malloc(sizeof(qelemtype) * maxsize);//����洢 ��Ԫ�صĵ�ַ����һ��ָ��
//	if (!q->base)
//	{
//		printf("���п���ʧ�ܣ�");
//		exit(-1);
//	}
//	q->front = 0;
//	q->rear = 0;
//}
////��ӳ�
//int QueueLen(Queue *q)
//{
//	int len = (q->rear - q->front + maxsize) % maxsize;
//	//printf("%d", len);
//	return len;
//	//ѭ������(q->rear - q->front + maxsize)%maxsize
//}
//
////���
//int pushq(Queue *q,qelemtype x)
//{
//	
//	if ((q->rear+1)%maxsize == q->front)
//	{
//		printf("������");
//	}
//	q->base[q->rear] = x;
//	q->rear =( q->rear + 1) % maxsize;
//	return 1;
//}
////����
//int popq(Queue *q)
//{
//	int x;
//	if (q->rear == q->front)
//	{
//		printf("�ӿգ�");
//	}
//	x = q->base[q->front];
//	q->front= (q->front + 1) % maxsize;
//	return x;
//}
////ȥ��ͷԪ��
//int gettop(Queue *q)
//{
//	if (q->rear == q->front)
//	{
//		printf("�ӿգ�");
//	}
//	return  q->base[q->front];
//}
//
//int main()
//{
//	Queue q;
//	//int n;
//	printf("���г�ʼ����\n");
//	initqueue(&q);
//	printf("���г�ʼ���ɹ���\n");
//	printf("�������:\n");
//	/*printf("������Ӹ�����\n");
//	scanf("%d", &n);
//	printf("�������Ԫ�أ�\n");*/
//	pushq(&q, 1);
//	pushq(&q, 31);
//	pushq(&q, 41);
//	pushq(&q, 51);
//	pushq(&q, 1);
//	pushq(&q, 31);
//	pushq(&q, 41);
//	pushq(&q, 41);
//	printf("��ӳɹ�:\n");
//	printf("�������:\n");
//	printf("%d ", popq(&q));
//	printf("%d ", popq(&q));
//	printf("%d ", popq(&q));
//	
//
//	int len = QueueLen(&q);
//	printf("�ӳ�Ϊ��%d\n", len);
//	return 0;
//
//}