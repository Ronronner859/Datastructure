//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define MAXSIZE 100//定义顺序表的最大存储个数
//
//typedef struct SqList
//{
//    int* base;
//    int length;
//} SqList;//定义一个顺序表类型
//
////初始化
//void InitList(SqList* L)
//{
//    L->base = (int*)malloc(sizeof(int)*MAXSIZE);//为顺序表分配一个大小为MAXSIZE的空间
//    if (!L->base)//分配成功是！L->base为0；不执行 
//        printf("分配失败\n");
//    L->length = 0;
//}
//
////插入元素
//void CreatList(SqList* L)
//{
//    int n;
//    printf("你想要输入的元素个数为:\n");
//    scanf("%d", &n);
//    if (L->length > MAXSIZE)
//        printf("顺序表已满，不能输入\n");
//    printf("请输入元素\n");
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &L->base[i]);
//        L->length++;
//    }
//}
//
////查询顺序表的长度
//void ListLength(SqList* L)
//{
//    printf("当前顺序表的长度为:\n");
//    printf("%d\n", L->length);
//}
//
//
//void IsEmpty(SqList* L)
//{
//    if (!L->length)
//        printf("当前顺序表为空\n");
//    else
//        printf("顺序表不为空\n");
//}
//
//
////打印
//void ShowList(SqList* L)
//{
//    printf("当前顺序表中的元素为");
//    if (!L->length)//L->length==0时执行！L.length 
//        printf("单链表为空\n");
//    for (int i = 0; i < L->length; i++)
//    {
//        printf("%d ", L->base[i]);
//    }
//    printf("\n");
//}
//
////插入
//void Insert(SqList* L)
//{
//    if (L->length > MAXSIZE)
//    {
//        printf("数组已满\n");
//    }
//    else
//    {
//        int pos = 0;//定义变量来存储想要插入的元素的位置
//        int e = 0;//定义变量来存储想要插入的元素
//        printf("你想要插入的位置和元素是:\n");
//        scanf("%d%d", &pos, &e);
//        if (pos<1 || pos>L->length + 1)
//            printf("插入位置错误\n");
//        else
//        {
//            for (int i = L->length; i >= pos; i--)
//            {
//                L->base[i] = L->base[i - 1];//将想要插入位置以后的元素往后移一个单位 
//            }
//            L->base[pos - 1] = e;//将元素插入位置为pos的地方 
//            L->length++;
//        }
//    }
//}
//
////删除
//void DeleteList(SqList* L)
//{
//    int pos = 0;//定义变量来存储想要删除的元素位置 
//    printf("你想要删除的元素位置为:\n");
//    scanf("%d", &pos);
//    if (pos<1 || pos>L->length)
//        printf("位置错误\n");
//    else
//    {
//        for (int i = pos - 1; i < L->length; i++)
//        {
//            L->base[i] = L->base[i + 1];//从要删除的位置开始将后面元素前移 
//        }
//        L->length--;
//    }
//}
//
//
//
//int main()
//{
//    SqList L;//定义一个顺序表
//    InitList(&L);
//    printf("初始化成功\n");
//    CreatList(&L);
//    printf("创建成功\n");
//    ShowList(&L);
//    Insert(&L);
//    ShowList(&L);
//    DeleteList(&L);
//    ShowList(&L);
//    IsEmpty(&L);
//    ListLength(&L);
//    return 0;
//}