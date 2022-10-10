#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/
/* -- ������Ľ��� --*/
#include <stdio.h>
#include <stdlib.h>

typedef int elemlist;

/*
 * 1.��ʼ������
 * 2.�ж������Ƿ�Ϊ��
 * 3.�������
 * 4.��������
 * 5.����ͷ�巨/����β�巨
 * 6.����
 * 7.ɾ��
 * 8.����
 * 9.��ӡ	
 */
//����ṹ����
typedef struct node
{
	//������
	elemlist data;
	//ָ����
	struct node* next;
}node,*listnode;

//�����ʼ�� ��Ϊ�ձ�
void initlist(node *L)
{
	L = (node*)malloc(sizeof(node));//����һ������L
	L->next = NULL;//���ý��ָ��ΪNULL
}
//�ж������Ƿ�Ϊ��
void isempty(node* L)
{
	if (L->next == NULL)
	{
		printf("����ʧ��!\n");
	}
	else
	{
		printf("���ٳɹ���\n");
	}

}
//�������
void qklist(node*L)
{
	node* p, * q;
	p = L->next;
	while (p!=NULL)
	{
		q = p->next;
		free(q);
		p = q;
	}
	L->next = NULL;
}
//ͷ���������
void createlist(node *L)
{
	node* p;
	int i = 1;
	int j;
	while (i!=0)
	{
		scanf("%d", &j);
		if (j!=-1)
		{
			p = (node*)malloc(sizeof(node));
			p->data = j;
			p->next = L->next;//�½ڵ���뵽��ͷ
			L->next = p;//ͷ�ڵ����ǰ
		}
		else
		{
			i = 0;
		}
	}
}

void creatfromtail(node* l) {//����β�巨����������
	node* p;//�½�һ�����ָ��
	node* r;//�ٽ���һ��βָ��
	int i = 1;
	int j;
	r = l;//����Ҫ��һ������βָ��rָ��ͷ���l,������β���� 
	while (i != 0) {
		scanf("%d", &j);
		if (j != -1) {
			p = (node*)malloc(sizeof(node));//����һ���½��
			p->data = j;
			r->next = p;//βָ���ָ����ָ���½��p
			r = p;//����βָ�����p���棬βָ����Զ����� 

		}
		else
		{
			i = 0;//����-1����� 
			r->next = NULL;//βָ���ָ��������Ϊ�գ���ʾ����Ľ��� 
		}
	}
}
//��ӡ
void printlist(node *L)
{
	node* p;
	p = L->next;
	printf("���������Ϊ��\n");
	while (p != NULL)
	{
		printf("%d ", p->data);//��Ԫ���ȡ������
		p = p->next;
	}
}



int main()
{
	node L;/*
	initlist(&L);*/
	//printf("ͷ�����������ݣ�\n");
	//createlist(&L);
	//printlist(&L);
	//qklist(&L);
	printf("β�����������ݣ�\n");
	creatfromtail(&L);
	printlist(&L);
	return 0;
}