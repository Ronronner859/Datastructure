//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
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
//		/*fscanf()��ʽ�����ļ���������������Կո��������������ͬ�����ݣ����ʹ
//		���Լ���д���ı����ı�ÿ��Ԫ��֮����ñ���һ���ո�Ҫ����ո�����
//		���ֲ���Ҫ�Ĵ���*/
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
//	printf("================����Ҫ�����ѧ����Ϣ==============\n");
//	printf("*****����:");	scanf("%s", s.name);
//	printf("*****ѧ��:");	scanf("%d", &s.id);
//	printf("*****�ɼ�:");	scanf("%d", &s.score);
//	printf("�������\n\n");
//	printf("����Ҫ�����λ����Ϣ:");
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
//	printf("����Ҫɾ��λ��");
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
//	printf("����Ҫ���ҵ�ѧ��\n");
//	scanf("%d", &k);
//	for (i = 0; i < L->length; i++) {
//		if (L->elem[i].id == k) printf("�����ĳɼ�Ϊ:%d\n", L->elem[i].score);
//	}
//	return 0;
//}
//
//int GetElement(sqlist* L) {
//	int i;
//	student e;
//	printf("����ȡֵλ����Ϣ\n");      scanf("%d", &i);
//	if ((i < 1) || (i > L->length + 1)) return 0;
//	e = L->elem[i - 1];
//	printf("********��ѧ������Ϣ********\n");
//	printf("����: %s\n", e.name);
//	printf("ѧ��: %d\n", e.id);
//	printf("�ɼ�: %d\n", e.score);
//
//	return OK;
//}
//
//
//void printList(sqlist* L) {
//	int i = 0;
//	printf("====================ѧ���ɼ���==================\n");
//	for (i = 0; i < L->length; i++) {
//		printf("������%s\n", L->elem[i].name);
//		printf("ѧ�ţ�%d\n", L->elem[i].id);
//		printf("�ɼ���%d\n\n", L->elem[i].score);
//	}
//	printf("\n");
//}
//
//int main() {
//	sqlist L;
//	InitList(&L);             /*��ʼ��*/
//	Openfile(&L);             /*�����ļ�*/
//	printList(&L);
//
//	InsertList(&L);          /*����ɾ���飬ȡ*/
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
