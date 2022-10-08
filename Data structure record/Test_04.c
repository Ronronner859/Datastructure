#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef void status;

typedef struct Lnode //�����������ͺ�ָ�����ָ������
{
	ElemType data;//��������� ������
	struct Lnode* next;//һ���ṹ���ָ��ָ����һ��Ԫ�صĵ�ַ  ָ������ȡ����ָ���Լ�����洢���������� nextָ�������һ���ṹ����Ԫ�صĵ�ַ ����next����һ���ṹ�������
}Lnode,*LinkList;//LinkListΪָ��ṹ��Lnode��ָ������
void PrintList(Lnode* L);

//��ʼ������ͷ�ڵ��ָ������Ϊ�գ�������ʹ��
Lnode *InitList(Lnode *L)
{
	L = (Lnode*)malloc(sizeof(Lnode));
	L->next = NULL;
	return L;
}
void Init(Lnode* L)
{
	
	L->next = NULL;//->������Ա
	
}
//�������ݣ�ͷ�巨 
void create_list(Lnode* L)
{
	Lnode* p; //����һ���½�㣬�����ݷ��뵽�½��֮�У�Ȼ���½����뵽ͷ�ڵ�֮�󼴿ɡ�
	int n = 0;
	int num;
	printf("������Ԫ�ظ�����\n");
	scanf("%d", &n);
	printf("������Ԫ�أ�\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //��������
		p = (Lnode*)malloc(sizeof(Lnode));  //���½�һ�����
		p->data = num;  //�������ֵ��ֵ���½���������
		p->next = L->next;  //���½����뵽��ͷ 
		L->next = p;  //ͷ���Ҫʼ�շ�����ǰ�� 
	}

}
//�������ݣ�β�巨 ���½����뵽��ǰ������ı�β
void creatfromtail(Lnode* L) {
	Lnode* p;//�½�һ�����ָ��
	int n = 0;
	int num;
	printf("������Ԫ�ظ�����\n");
	scanf("%d", &n);
	printf("������Ԫ�أ�\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //��������
		p = (Lnode*)malloc(sizeof(Lnode));//����һ���½��
		p->data = num;
		L->next = p;   //βָ���ָ����ָ���½��p
		L = p;   //����βָ�����p���棬βָ����Զ����� 
	}

}
//�ж������Ƿ�Ϊ�գ�

int IsEmpty(Lnode *L)
{
	if (L->next == NULL)
	{
		printf("222");
		return -1;
	}
	else
	{
		printf("111");
		return 1;
	}
}
//����������� �ͷſռ�  ����ͷָ���ͷ�ڵ���Ȼ����
void DestroyList(Lnode *L)
{
	Lnode* p;
	while (L != NULL)
	{
		p = L;//�ѵ�ǰ��㸳��p L����ͷ�ڵ��ַ 
		L = L->next;//��һ��㸳��L ��һ���ĵ�ַ���ǵ�ǰ����Next
		free(p);//����ǰ���Ŀռ��ͷ�
	}
}
//������� ͷ�ڵ�ָ��������Ϊ��
void QkList(Lnode *L)
{
	Lnode* p, * q;
	p = L->next;//��Ԫ���ĵ�ַ�� p
	while (p != NULL)
	{
		q = p->next;//��һ���ĵ�ַ
		free(p);
		p = q;
		
	}
	L->next = NULL;//ͷ�ڵ�ָ����Ϊ��
}
//������ı�
int length(Lnode *L)
{
	Lnode* p;
	p = L->next;//ָ���һ������ַ
	int n = 0;
	if (p)//��ǰ�Ľ��Ϊ�յ�ʱ����ǽ�����ʱ��
	{
		n++;
		p = p->next;//��һ���ĵ�ַ
	}
	return  n;
}
//ȡ��ĳ��λ�õ�ֵ
int FindElemList(Lnode *L,int i,ElemType e)
{
	Lnode* p;
	//˳���ȡ һ��������
	p = L->next;
	int j = 1;
	while (p&&j<i)
	{
		p = p->next;
		++j;
	}
	if (!p||j>i)//̫���̫С
	{
		return -1;
	}
	e = p->data;
	return e;
}
//�������� ���ַ��� 1.����ָ�� 2.����ָ��
int SearchList(Lnode *L, int x)
{
	int i = 1;
	Lnode* p;
	p = L->next;
	while (p && p->data!=x)
	{
		p = p->next;
		i++;
	}
	if (p != NULL)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
//���� ��i�����ǰ����ΪֵΪe���½��
void Insert_List(Lnode* L, int i, ElemType e)
{
	Lnode* p, * s;
	p = L;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i - 1)
	{
		printf("Erron!");
	}
	s = (LinkList)malloc(sizeof(Lnode));
	s->data = e;
	s->next = p->next;
	p->next = s;
}
//ɾ��
void deletelist(Lnode *L,int i)
{
	Lnode* p,*q;
	p = L;
	int j = 0;
	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i - 1)
	{
		printf("Erron!");
	}
	q = p->next;
	p->next = q->next;
	//p->next = p->next->next;
	//x = q->data;
	free(q);
}
void PrintList(Lnode* L)
{
	printf("�����������Ϊ��");
	while (L->next != NULL) {
		printf("%d ", L->next->data);
		L = L->next;
	}
	printf("\n");
}
LinkList Connect(Lnode* L, Lnode* M)
{
	Lnode* p;
	p = L->next; //��p�����L��ͷ�ڵ�
	L->next = M->next->next; //��M�ĵı�ͷ����L�ı�β
	free(M->next);//�ͷ�M�ı�ͷ
	M->next = p;
	return M;
}
void showMenu()
{
	printf("\t    ��0��ͷ�巨����\n");
	printf("\t    ��1��β�巨����\n");
	printf("\t    ��2������\n");
	printf("\t    ��3��ɾ��\n");
	printf("\t    ��4��ĳ��λ�ò�������\n");
	printf("\t    ��5���˳�\n");
	return;
}

int main()
{
	Lnode *L = NULL;
	//�������� L
	Lnode* M= NULL;
	Lnode* M2 = NULL;//�ϲ�����������
	//�������� M
	int m,x,y;
	printf("����L��ʼ��:\n");
	L = InitList(L);
	printf("����L��ʼ���ɹ�:\n");
	printf("����L��ʼ��:\n");
	M = InitList(M);
	printf("����M��ʼ���ɹ�:\n");
	while (true)
	{
		printf("����ѡ��Ĳ�����\n");
		showMenu();
		printf("�����룺\n");
		scanf("%d", &m);
		switch (m)
		{
		case 0:
			printf("��ͷ�巨��������L��\n");
			create_list(L);
			PrintList(L);
			break;
		case 1:
			printf("��β�巨��������M��\n");
			creatfromtail(M);
			PrintList(M);
			break;
		case 2:
			printf("�����ѯ���ݣ�\n");
			scanf("%d", &x);
			printf("%d��Ԫ���е�λ��Ϊ��%d\n", x,SearchList(L, x));
			break;
		case 3:
			printf("����ɾ����λ�ã�\n");
			scanf("%d", &x);
			deletelist(L, x);
			PrintList(L);
			break;
		case 4:
			printf("�������λ�ã�\n");
			scanf("%d", &x);
			printf("�������ݣ�\n");
			scanf("%d", &y);
			Insert_List(L, 2, y);
			printf("����ɹ���\n");
			PrintList(L);
			break;
		case 5:
			exit(-1);
		default:
			printf("��������");
		}
	}
	return 0;
}