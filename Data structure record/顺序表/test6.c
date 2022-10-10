#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/

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
//��ʼ�� ���ٿռ�
void init(s *L)
{
	L->a = (elemtype*)malloc(sizeof(elemtype)*maxsize);
	if (L->a == NULL)
	{
		printf("����ʧ�ܣ�");
	}
	L->len = 0;

}
//�ж��Ƿ�Ϊ��
bool IsEmpty(s *L)
{
	if (!L->len)
		return false;
	else
		return true;
}
//����Ԫ��
void create(s *L)
{
	int n;
	printf("������Ԫ�صĸ�����\n");
	scanf("%d", &n);
	if (L->len == maxsize)
	{
		printf("�ռ��Ѿ����ˣ��޷�����");
		exit(-1);
	}
	printf("������Ԫ�أ�");
	for (int i = 0;i<n;i++)
	{
		scanf("%d", &L->a[i]);
		L->len++;
	}
}
//��ӡ
void print(s *L)
{
	printf("��ǰ˳����Ԫ��Ϊ��\n");
	if (L->len == 0)
	{
		printf("��Ϊ�գ�");
	}
	for (int i = 0;i<L->len;i++)
	{
		printf("%d ", L->a[i]);
	}
	printf("\n");
}
//��
void len(s *L)
{
	printf("����Ϊ��\n");
	
	printf("%d\n", L->len);
}
////����
void Insert(s* L)
{
    if (L->len > maxsize)
    {
        printf("����\n");
    }
    else
    {
        int pos = 0;//����������洢��Ҫ�����Ԫ�ص�λ��
        int e = 0;//����������洢��Ҫ�����Ԫ��
        printf("����Ҫ�����λ����:\n");
        scanf("%d", &pos);
		printf("����Ҫ�����Ԫ����:\n");
		scanf("%d", &e);
        if (pos<1 || pos>L->len + 1)
            printf("����λ�ô���\n");
        else
        {
            for (int i = L->len; i >= pos; i--)
            {
                L->a[i] = L->a[i - 1];//����Ҫ����λ���Ժ��Ԫ��������һ����λ 
            }
            L->a[pos - 1] = e;//��Ԫ�ز���λ��Ϊpos�ĵط� 
            L->len++;
        }
    }
}

//ɾ��
void DeleteList(s* L)
{
    int pos = 0;//����������洢��Ҫɾ����Ԫ��λ�� 
    printf("����Ҫɾ����Ԫ��λ��Ϊ:\n");
    scanf("%d", &pos);
    if (pos<1 || pos>L->len)
        printf("λ�ô���\n");
    else
    {
        for (int i = pos - 1; i < L->len; i++)
        {
            L->a[i] = L->a[i + 1];//��Ҫɾ����λ�ÿ�ʼ������Ԫ��ǰ�� 
        }
        L->len--;
    }
}

void Reverse(s* L)
{
	printf("��˳����е�Ԫ�ص���:\n");
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
	printf("\t    ��0������\n");
    printf("\t    ��1������\n");
    printf("\t    ��2��ɾ��\n");
    printf("\t    ��3���鿴\n");
	printf("\t    ��4������\n");
	printf("\t    ��5������\n");
    printf("\t    ��6���˳�\n");
    return;
}

int main()
{
	s L;
	printf("˳����ʼ��:\n");
	init(&L);
	printf("˳����ʼ���ɹ�!\n");
	int m;
	while (true)
	{
		printf("����ѡ��Ĳ�����\n");
		showMenu();
		printf("�����룺\n");
		scanf("%d", &m);
		switch (m)
		{
		case 0:
			create(&L);
			print(&L);
			printf("˳������ɹ���\n");
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
				printf("��������");
		}
	}
	
	
	
	
	return 0;
}