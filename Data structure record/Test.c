#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <malloc.h>
typedef int ElemType;

#define MaxSize 100 //空间的实际容量大小

// * InitList(&L);构建空线性表
// * Destroy(&L);销毁线性表
// * ClearList(&L);将L重置为空表
// * ListEmpty(L);若L为空表，返回True 否则返回False 
// * ListLength(L);返回L中数据元素的个数
// * GetElem(L,i,&e);获取线性表L中第i个元素，用e获取返回内容
// * LocateElem(L,e);按照元素查找，返回L中第一个值域与e相等的元素序号，若不存在则返回0
// * ListInsert(&L,i,e);在L的第i个位置插入一个新的元素，L的长度加1
// * ListDelete(&L,i,&e)删除L中第i个元素，并用e返回被删除元素，L的长度减一

/*
 * 顺序表的构建以及操作
 * 动态实现
 */

//1.构建内部成员
typedef struct L
{
	ElemType* a;//一个指针用来开辟动态内存空间
	int size;//空间中所含的数据个数
	//int MaxSize;//空间的实际容量大小
	//其他变量自己定 目前只用三个解决
}L,*LM;

void IsEmptyList(LM ps)
{
	if (ps->a == NULL)
	{
		printf("%s\n", strerror(errno));
	}
}
//开辟空间
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

void AddElemList(LM ps,int x,int number)//某个位置插入
{
	//首先判断是不是空表
	IsEmptyList(ps);
	int temp = ps->a[x - 1];//先把这个x位置空出来
	for (int i = ps->size-1;i>=x-1;i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[x-1] = number;
	ps->size++;
}
void DeleteElemList(LM ps, int x)//某个位置删除
{
	//首先判断是不是空表
	IsEmptyList(ps);
	int temp2 = ps->a[x - 1];
	for (int i =x; i<=ps->size; i++)
	{
		ps->a[i -1] = ps->a[i];
	}
	ps->size--;

}
ElemType FindListElem(LM ps, int number)//查找相同元素 返回对应下标
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
		printf("没有该值！");
	}
	
	DestroyList(list);
}