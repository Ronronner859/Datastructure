//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
#include "test.h"
#define MAXSIZE 100
typedef int selemtype;

//ͨ�������ʾջ -- ��ջ  ջ�Ľ������
/*
 * ��ջ��ָ�뷽����ǰ��Ԫ��
 *
 * 1.�����ͷָ�����ջ��
 * 2.��ջ����Ҫͷ�ڵ�
 * 3.����������ջ�������
 * 4.��ջ�൱��ͷָ��ָ���
 * 5.�����ɾ������ջ����ִ��
 *
 */
typedef struct snode
{
	selemtype data;
	struct snode* next;
}snode,*ls;

//��ʼ�� ���ǿ��ٿռ������������
void init(snode *s)
{
	s = NULL;
}

bool isempty(snode *s)
{
	if (s==NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

//����Ԫ��
//void create(snode *s)
//{
//	
//	
//	printf("��ջ������Ԫ�أ�\n");
//	int n;
//	printf("�������Ϊ��\n");
//	scanf("%d", &n);
//	printf("������Ԫ�أ�\n");
//	for (int i = 0;i<n;i++)
//	{
//		scanf("%d", &s->data[i]);
//	}
//}
//��ջ
void push(snode *s,int x)
{
	//ջ�����Ԫ�� ջ�� ���ҳ�һ���ռ� ָ��pָ����� ��������ֵ �ͳ�Ϊ��ջ��Ԫ�� ��ָ��s��next��  Ȼ�����޸�ջ����ָ��p Ȼ��s����ջ�ʹ������
	snode* p;
	p = (snode*)malloc(sizeof(snode)*MAXSIZE);
	if (p==NULL)
	{
		printf("��㿪��ʧ�ܣ�");
		exit(-1);
	}
	//�����ݸ�pָ���data��
	p->data = x;
	//��p��nextָ��s��ջ��
	p->next = s;
	//�޸�ջ��ָ��
	s = p;
	
}

void  pop(snode* s)
{
	snode* p;
	int x;
	p = (snode*)malloc(sizeof(snode));
	if (s == NULL)
	{
		printf("ջ�գ�");
	}
	x = p->data;
	p = s;
	s = s->next;
	free(p);
	
}
//ȡջ��Ԫ��
int gettop(snode*s)
{
	if (s!= NULL)
	{
		return s->data;
	}
	return 1;
}
//��ջ��
//void slen(snode *s)
//{
//	if (!isempty(&s))
//	{
//		exit(-1);
//	}
//	int len = ;
//	printf("ջ��Ϊ��%d\n", len);
//}
int main()
{
	
	snode s;
	printf("��ջ��ʼ��\n");
	init(&s);
	printf("��ջ��ʼ���ɹ�\n");
	printf("������ջ��\n");
	push(&s,1);
	push(&s, 21);
	push(&s, 31);
	push(&s, 51);
	printf("��ջ�ɹ���\n");
	printf("���г�ջ��\n");
	pop(&s);
	pop(&s);
	pop(&s);
	printf("��ջ������\n");
	//slen(&s);
	
	
}