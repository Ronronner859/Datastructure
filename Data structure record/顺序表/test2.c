//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<errno.h>
//
//#define maxsize 50
//#define OVERFLOW -1
//
//
//typedef struct {
//	char name[8];
//	int  id;
//	int score;
//}student;
//
//typedef struct {
//	student* elem;
//	int length;
//}sqlist,*sq;
//
////初始化
//int InitList(sqlist* L)
//{
//	//开辟空间
//	L->elem = (student*)malloc(sizeof(student) * maxsize);
//	if (!L->elem)  exit(OVERFLOW);
//	L->length = 0;
//	return 1;
//}
//
//int InsertList(sqlist* L) {
//	int j, i;
//	student s;
//	printf("================学生成绩管理==============\n");
//	printf("*****姓名:");	scanf("%s", s.name);
//	printf("*****学号:");	scanf("%d", &s.id);
//	printf("*****成绩:");	scanf("%d", &s.score);
//	printf("输入完成\n\n");
//	printf("输入要插入的位置信息:");
//	scanf("%d", &i);
//	if ((i < 1) || (i > L->length + 1)) return 0;
//	if (L->length == maxsize) return 0;
//	for (j = L->length - 1; j >= i - 1; j--) {
//		L->elem[j + 1] = L->elem[j];
//	}
//	L->elem[i - 1] = s;
//	L->length++;
//}
//
//int DeleteList(sqlist* L) {
//	int j, i;
//	printf("输入要删除位置");
//	scanf("%d", &i);
//	if ((i < 1) || (i > L->length + 1)) return 0;
//	for (j = i - 1; j < L->length - 1; j++) {
//		L->elem[j] = L->elem[j + 1];
//	}
//	L->length--;
//	return 1;
//}
//
//int LocateElem(sqlist* L) {
//	int k, i = 0;
//	printf("输入要查找的学号\n");
//	scanf("%d", &k);
//	for (i = 0; i < L->length; i++) {
//		if (L->elem[i].id == k) printf("该生的成绩为:%d\n", L->elem[i].score);
//	}
//	return 0;
//}
//
//int GetElement(sqlist* L) {
//	int i;
//	student e;
//	printf("输入取值位置信息\n");      scanf("%d", &i);
//	if ((i < 1) || (i > L->length + 1)) return 0;
//	e = L->elem[i - 1];
//	printf("********该学生的信息********\n");
//	printf("姓名: %s\n", e.name);
//	printf("学号: %d\n", e.id);
//	printf("成绩: %d\n", e.score);
//
//	return 1;
//}
//
//void printList(sqlist* L) {
//	int i = 0;
//	printf("====================学生成绩表==================\n");
//	for (i = 0; i < L->length; i++) {
//		printf("姓名：%s\n", L->elem[i].name);
//		printf("学号：%d\n", L->elem[i].id);
//		printf("成绩：%d\n\n", L->elem[i].score);
//	}
//	printf("\n");
//}