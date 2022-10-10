//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<errno.h>
//#include <cstdio>
//
//#define maxsize 30
//#define OVERFLOW -2
//#define OK 1
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
//}sqlist;
//
//
//int InitList(sqlist* L)
//{
//	L->elem = (student*)malloc(sizeof(student) * maxsize);
//	if (!L->elem)  exit(OVERFLOW);
//	L->length = 0;
//	return OK;
//}
//
//void Openfile(sqlist* L) {
//	int i = 0;
//	FILE* fp;
//	fp = fopen("mmp.txt", "r");
//	if ((fp = fopen("mmp.txt", "r")) == NULL)
//	{
//		printf("can't open the file!!!\n");
//		printf("error:%s\n", strerror(errno));
//		exit(0);
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s%d%d", L->elem[i].name, &L->elem[i].id, &L->elem[i].score);
//		/*fscanf()格式化读文件函数，这个函数以空格或换行区分两个不同的数据，如果使
//		用自己编写的文本，文本每个元素之间最好保持一个空格不要多个空格以免
//		出现不必要的错误*/
//		printf("%s%d%d\n", L->elem[i].name, L->elem[i].id, L->elem[i].score);
//		i++;
//		L->length++;
//	}
//	fclose(fp);
//}
//
//
//int InsertList(sqlist* L) {
//	int j, i;
//	student s;
//	printf("================输入要插入的学生信息==============\n");
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
//	return OK;
//}
//
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
//	return OK;
//}
//
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
//
//int main() {
//	sqlist L;
//	InitList(&L);             /*初始化*/
//	Openfile(&L);             /*导入文件*/
//	printList(&L);
//
//	InsertList(&L);          /*增，删，查，取*/
//	printList(&L);
//
//	DeleteList(&L);
//	printList(&L);
//
//	LocateElem(&L);
//	GetElement(&L);
//	return 0;
//}
//
//
//
