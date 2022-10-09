#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <malloc.h>
typedef int ElemType;

#define MaxSize 100 //�ռ��ʵ��������С

// * InitList(&L);���������Ա�
// * Destroy(&L);�������Ա�
// * ClearList(&L);��L����Ϊ�ձ�
// * ListEmpty(L);��LΪ�ձ�����True ���򷵻�False 
// * ListLength(L);����L������Ԫ�صĸ���
// * GetElem(L,i,&e);��ȡ���Ա�L�е�i��Ԫ�أ���e��ȡ��������
// * LocateElem(L,e);����Ԫ�ز��ң�����L�е�һ��ֵ����e��ȵ�Ԫ����ţ����������򷵻�0
// * ListInsert(&L,i,e);��L�ĵ�i��λ�ò���һ���µ�Ԫ�أ�L�ĳ��ȼ�1
// * ListDelete(&L,i,&e)ɾ��L�е�i��Ԫ�أ�����e���ر�ɾ��Ԫ�أ�L�ĳ��ȼ�һ

/*
 * ˳���Ĺ����Լ�����
 * ��̬ʵ��
 */

//1.�����ڲ���Ա
typedef struct L
{
	ElemType* a;//һ��ָ���������ٶ�̬�ڴ�ռ�
	int size;//�ռ������������ݸ���
	//int MaxSize;//�ռ��ʵ��������С
	//���������Լ��� Ŀǰֻ���������
}L,*LM;

void IsEmptyList(LM ps)
{
	if (ps->a == NULL)
	{
		printf("%s\n", strerror(errno));
	}
}
//���ٿռ�
void InitList(L* ps)
{
	
	ps->a = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
	IsEmptyList(ps);
	ps->size = 0;
}
void InsertList(LM ps,int x)
{
	
	ps->a[ps->size] = x;
	ps->size++;
}
void DisList(LM ps)
{
	for (int i = 0;i<ps->size;i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void DestroyList(LM ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
}

void AddElemList(LM ps,int x,int number)//ĳ��λ�ò���
{
	//�����ж��ǲ��ǿձ�
	IsEmptyList(ps);
	int temp = ps->a[x - 1];//�Ȱ����xλ�ÿճ���
	for (int i = ps->size-1;i>=x-1;i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[x-1] = number;
	ps->size++;
}
void DeleteElemList(LM ps, int x)//ĳ��λ��ɾ��
{
	//�����ж��ǲ��ǿձ�
	IsEmptyList(ps);
	int temp2 = ps->a[x - 1];
	for (int i =x; i<=ps->size; i++)
	{
		ps->a[i -1] = ps->a[i];
	}
	ps->size--;

}
ElemType FindListElem(LM ps, int number)//������ͬԪ�� ���ض�Ӧ�±�
{
	for (int i = 0;i<ps->size;i++)
	{
		if (ps->a[i] == number)
		{
			return i;
		}
	}
	return -1;
}
void meun()
{
}
int main()
{
	LM list = NULL;
	InitList(list);
	InsertList(list, 1);
	InsertList(list, 21);
	InsertList(list, 13);
	InsertList(list, 14);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	
	InsertList(list, 15);
	InsertList(list, 15);
	InsertList(list, 15);
	DisList(list);
	AddElemList(list, 2, 100);
	
	DeleteElemList(list, 1);
	DisList(list);
	int res = FindListElem(list, 100);
	if (res != -1)
	{
		printf("Find! ps->a[%d]\n",res);
	}
	else
	{
		printf("û�и�ֵ��");
	}
	
	DestroyList(list);
}