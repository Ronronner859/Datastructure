#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/

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
 *�����ͷָ�����ջ��
 *����Ҫ���
 *����������ջ�������
 *��ջ�൱��ͷָ��ָ���
 *�����ɾ��������ջ����ִ��
 *
 */
//��ʼ��
void initstack(snode *s)
{
	s = NULL;
}
void isempty(snode *s)
{
	if (s == NULL)
	{
		printf("ջ�գ�");
		exit(-1);
	}
	else
	{
		printf("��Ϊ�գ�");
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
		printf("ջ��");
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
	printf("��ջ��");
	pushs(&L, 1);
	pushs(&L, 31);
	pushs(&L, 41);
	pushs(&L, 51);
	printf("��ջ��");


}


/*
 *
 * ջ�͵ݹ�
 *
 * �ݹ�Ķ��壺
 *	һ�����󲿷ְ������Լ����������Լ����Լ�����
 *	һ������ֱ�ӻ��ӵĵ����Լ�
 *
 *	1.���ݺ��� �׳� 쳲�����
 *	2.���ݽṹ ����� ������
 *	3.���ʵ������ �Թ����� ��ŵ������
 *
 *	���η����Ѹ��ӵ�����ֳ�������
 *
 *  �ݹ� ���ַ�
 */