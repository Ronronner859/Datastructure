//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define MAXSIZE 100//����˳�������洢����
//
//typedef struct SqList
//{
//    int* base;
//    int length;
//} SqList;//����һ��˳�������
//
////��ʼ��
//void InitList(SqList* L)
//{
//    L->base = (int*)malloc(sizeof(int)*MAXSIZE);//Ϊ˳������һ����СΪMAXSIZE�Ŀռ�
//    if (!L->base)//����ɹ��ǣ�L->baseΪ0����ִ�� 
//        printf("����ʧ��\n");
//    L->length = 0;
//}
//
////����Ԫ��
//void CreatList(SqList* L)
//{
//    int n;
//    printf("����Ҫ�����Ԫ�ظ���Ϊ:\n");
//    scanf("%d", &n);
//    if (L->length > MAXSIZE)
//        printf("˳�����������������\n");
//    printf("������Ԫ��\n");
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &L->base[i]);
//        L->length++;
//    }
//}
//
////��ѯ˳���ĳ���
//void ListLength(SqList* L)
//{
//    printf("��ǰ˳���ĳ���Ϊ:\n");
//    printf("%d\n", L->length);
//}
//
//
//void IsEmpty(SqList* L)
//{
//    if (!L->length)
//        printf("��ǰ˳���Ϊ��\n");
//    else
//        printf("˳���Ϊ��\n");
//}
//
//
////��ӡ
//void ShowList(SqList* L)
//{
//    printf("��ǰ˳����е�Ԫ��Ϊ");
//    if (!L->length)//L->length==0ʱִ�У�L.length 
//        printf("������Ϊ��\n");
//    for (int i = 0; i < L->length; i++)
//    {
//        printf("%d ", L->base[i]);
//    }
//    printf("\n");
//}
//
////����
//void Insert(SqList* L)
//{
//    if (L->length > MAXSIZE)
//    {
//        printf("��������\n");
//    }
//    else
//    {
//        int pos = 0;//����������洢��Ҫ�����Ԫ�ص�λ��
//        int e = 0;//����������洢��Ҫ�����Ԫ��
//        printf("����Ҫ�����λ�ú�Ԫ����:\n");
//        scanf("%d%d", &pos, &e);
//        if (pos<1 || pos>L->length + 1)
//            printf("����λ�ô���\n");
//        else
//        {
//            for (int i = L->length; i >= pos; i--)
//            {
//                L->base[i] = L->base[i - 1];//����Ҫ����λ���Ժ��Ԫ��������һ����λ 
//            }
//            L->base[pos - 1] = e;//��Ԫ�ز���λ��Ϊpos�ĵط� 
//            L->length++;
//        }
//    }
//}
//
////ɾ��
//void DeleteList(SqList* L)
//{
//    int pos = 0;//����������洢��Ҫɾ����Ԫ��λ�� 
//    printf("����Ҫɾ����Ԫ��λ��Ϊ:\n");
//    scanf("%d", &pos);
//    if (pos<1 || pos>L->length)
//        printf("λ�ô���\n");
//    else
//    {
//        for (int i = pos - 1; i < L->length; i++)
//        {
//            L->base[i] = L->base[i + 1];//��Ҫɾ����λ�ÿ�ʼ������Ԫ��ǰ�� 
//        }
//        L->length--;
//    }
//}
//
//
//
//int main()
//{
//    SqList L;//����һ��˳���
//    InitList(&L);
//    printf("��ʼ���ɹ�\n");
//    CreatList(&L);
//    printf("�����ɹ�\n");
//    ShowList(&L);
//    Insert(&L);
//    ShowList(&L);
//    DeleteList(&L);
//    ShowList(&L);
//    IsEmpty(&L);
//    ListLength(&L);
//    return 0;
//}