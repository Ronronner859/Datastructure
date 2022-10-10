#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>



typedef int elemtype;
#define maxsize 100

typedef struct sl
{
	elemtype* a;
	int len;
}s;
//初始化 开辟空间
void init(s *L)
{
	L->a = (elemtype*)malloc(sizeof(elemtype)*maxsize);
	if (L->a == NULL)
	{
		printf("开辟失败！");
	}
	L->len = 0;

}
//判断是否为空
bool IsEmpty(s *L)
{
	if (!L->len)
		return false;
	else
		return true;
}
//插入元素
void create(s *L)
{
	int n;
	printf("请输入元素的个数：\n");
	scanf("%d", &n);
	if (L->len == maxsize)
	{
		printf("空间已经满了！无法输入");
		exit(-1);
	}
	printf("请输入元素：");
	for (int i = 0;i<n;i++)
	{
		scanf("%d", &L->a[i]);
		L->len++;
	}
}
//打印
void print(s *L)
{
	printf("当前顺序表的元素为：\n");
	if (L->len == 0)
	{
		printf("表为空！");
	}
	for (int i = 0;i<L->len;i++)
	{
		printf("%d ", L->a[i]);
	}
	printf("\n");
}
//表长
void len(s *L)
{
	printf("长度为：\n");
	
	printf("%d\n", L->len);
}
////插入
void Insert(s* L)
{
    if (L->len > maxsize)
    {
        printf("已满\n");
    }
    else
    {
        int pos = 0;//定义变量来存储想要插入的元素的位置
        int e = 0;//定义变量来存储想要插入的元素
        printf("你想要插入的位置是:\n");
        scanf("%d", &pos);
		printf("你想要插入的元素是:\n");
		scanf("%d", &e);
        if (pos<1 || pos>L->len + 1)
            printf("插入位置错误\n");
        else
        {
            for (int i = L->len; i >= pos; i--)
            {
                L->a[i] = L->a[i - 1];//将想要插入位置以后的元素往后移一个单位 
            }
            L->a[pos - 1] = e;//将元素插入位置为pos的地方 
            L->len++;
        }
    }
}

//删除
void DeleteList(s* L)
{
    int pos = 0;//定义变量来存储想要删除的元素位置 
    printf("你想要删除的元素位置为:\n");
    scanf("%d", &pos);
    if (pos<1 || pos>L->len)
        printf("位置错误\n");
    else
    {
        for (int i = pos - 1; i < L->len; i++)
        {
            L->a[i] = L->a[i + 1];//从要删除的位置开始将后面元素前移 
        }
        L->len--;
    }
}

void Reverse(s* L)
{
	printf("将顺序表中的元素倒置:\n");
	int i = 0;
	int j = L->len - 1;
	while (i < j)
	{
		int t = L->a[i];
		L->a[i] = L->a[j];
		L->a[j] = t;
		i++;
		j--;
	}
}
void SortList(s* L)
{
	for (int i = 0; i < L->len; i++)
	{
		for (int j = i + 1; j < L->len; j++)
		{
			if (L->a[i] < L->a[j])
			{
				int t = L->a[i];
				L->a[i] = L->a[j];
				L->a[j] = t;
			}
		}
	}
}

void showMenu()
{
	printf("\t    【0】输入\n");
    printf("\t    【1】插入\n");
    printf("\t    【2】删除\n");
    printf("\t    【3】查看\n");
	printf("\t    【4】倒置\n");
	printf("\t    【5】排序\n");
    printf("\t    【6】退出\n");
    return;
}

int main()
{
	s L;
	printf("顺序表初始化:\n");
	init(&L);
	printf("顺序表初始化成功!\n");
	int m;
	while (true)
	{
		printf("你想选择的操作：\n");
		showMenu();
		printf("请输入：\n");
		scanf("%d", &m);
		switch (m)
		{
		case 0:
			create(&L);
			print(&L);
			printf("顺序表创建成功！\n");
			break;
		case 1:
			Insert(&L);
			print(&L);
			break;
		case 2:
			DeleteList(&L);
			break;
		case 3:
			print(&L);
			len(&L);
			break;
		case 4:
			Reverse(&L);
			print(&L);
			break;
		case 5:
			SortList(&L);
			print(&L);
			break;
		case 6:
			exit(-1);
			default:
				printf("输入有误！");
		}
	}
	
	
	
	
	return 0;
}