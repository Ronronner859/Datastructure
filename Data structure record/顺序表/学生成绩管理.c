//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//#include <malloc.h>
//#include <stdbool.h>
//typedef int ElemType;
//#define MaxSize 100 //空间的实际容量大小
//
//typedef struct s_score
//{
//	ElemType* a;
//	int size;
//	ElemType grade;//学生成绩
//}sl;
//
//初始化
//void init(sl *s)
//{
//	s ->a = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
//	if (s->a==NULL)
//	{
//		printf("开辟失败！");
//	}
//	s->size = 0;
//}
//判断是否为空
//bool isempty(sl *s)
//{
//	if (s->a == NULL)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//清空线性表
//void clear(sl *s)
//{
//	if (isempty(s))
//	{
//		exit(-1);
//	}
//	free(s);
//}
//登录成绩
//void dl(sl *s,ElemType score)
//{
//	s->a[s->grade] = score;
//	s->grade++;
//}
//查询
//void dis(sl *s)
//{
//	for (int i = 0;i<s->grade;i++)
//	{
//		printf("第%d为同学的成绩为:%d\n", i, s->a[i]);
//	}
//}
//void menu()
//{
//	printf("********学生成绩管理********\n");
//	printf("1---登录学生成绩---\n");
//	printf("2---查询学生成绩---\n");
//	printf("3---插入学生成绩---\n");
//	printf("4---删除学生成绩---\n");
//	sl s_L;
//	int num;
//	while (true)
//	{
//	{
//		int n;
//		printf("请输入操作：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			printf("录入学生成绩\n");
//			init(&s_L);
//			for (int i = 0;i<10;i++)
//			{
//				scanf("%d", &num);
//				dl(&s_L, num);
//			}
//			dis(&s_L);
//			break;
//		case 2:
//			printf("查询学生成绩\n");
//			break;
//		case 3:
//			printf("插入学生成绩\n");
//		}
//	}
//}
//int main()
//{
//	menu();
//	clear(&s_L);
//	return 0;
//}