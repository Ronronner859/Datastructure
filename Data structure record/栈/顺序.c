//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//
//
//#include "test.h"
//
////���ִ洢�ṹ ���ǲ������޵����Ա�
///*
// * 1.˳��ջ
// * 2.��ջ
// */
////˳��ջ�ı�ʾ��ʵ�� һ���ַ�����Ĵ洢��һ�δ��ջ�׵�ջ��������Ԫ�� ջ��һ���ڵ͵�ַ��
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
//	selemtype* base;//ջ��ָ��
//	selemtype* top;//ջ��ָ��
//	int stacksize;//ջ����
//}st;
//
////��ʼ�� �ڴ��п���һ�οռ���ʹ�� top == base ��ָ��ջ��
//void initstack(st *s)
//{
//	s->top = (int*)malloc( MAXSIZE*sizeof(int));//����ռ� ��СΪ100 ָ������ռ����Ԫ��
//	if (s->top == NULL)
//	{
//		printf("����ʧ��");
//		exit(-1);
//	}
//	s->base = s->top;
//	s->stacksize = MAXSIZE;
//	printf("ջ�Ѿ����ٳɹ�!\n");
//}
//
////˳��ջ�Ƿ�Ϊ��
//bool isempty(st *s)
//{
//	if (s->base == s->top)
//	{
//		return true;
//		printf("ջ�գ�");
//	}
//	else
//	{
//		return false;
//		printf("ջ���գ�");
//	}
//}
////��ջlen
//int lenstack(st *s)
//{
//	return (s->top - s->base);
//}
////���˳��ջ
//void qkstack(st *s)
//{
//	if (s->base)
//	{
//		s->top = s->base;
//		printf("ջ�Ѿ�����ˣ�");
//	}
//}
////����ջ
//void destoryst(st *s)
//{
//	if (s->base)
//	{
//		free(s->base);
//		s->stacksize = 0;
//		s->base = s->top = NULL;
//		printf("ջ�Ѿ��ͷ��ˣ��ջ��ڴ�");
//	}
//}
////��ջ
//void pushstack(st *s,selemtype x)
//{
//	if ((lenstack(s)) == s->stacksize)
//	{
//		exit(-1);
//	}
//	else
//	{
//		*(s->top) = x;//������
//		s->top++;
//		//*(s->top)++ = x;
//	}
//	printf("%d ", x);
//}
////��ջ
//void  popstack(st* s)
//{
//	int x;
//	if (isempty(s))
//	{
//		printf("ջ�գ�");
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
//		printf("ջ�գ�");
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
//	printf("��ʼ����\n");
//	initstack(&s1);
//	printf("��ջ������\n");
//	scanf("%d", &x);
//	printf("����ջ�д�������:\n");
//	for (int i = 0;i<x;i++)
//	{
//		scanf("%d", &n);
//		pushstack(&s1, n);
//	}
//	printf("��ջ�ɹ���\n");
//	printf("ջlen:\n");
//	int len = lenstack(&s1);
//	printf("len = %d\n", len);
//	printf("��ջ��\n");
//	for (int i = 0; i < x; i++)
//	{
//		popstack(&s1);
//	}
//	destoryst(&s1);
//}