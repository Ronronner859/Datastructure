//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//#include <malloc.h>
//#include <stdbool.h>
//typedef int ElemType;
//#define MaxSize 100 //�ռ��ʵ��������С
//
//typedef struct s_score
//{
//	ElemType* a;
//	int size;
//	ElemType grade;//ѧ���ɼ�
//}sl;
//
//��ʼ��
//void init(sl *s)
//{
//	s ->a = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
//	if (s->a==NULL)
//	{
//		printf("����ʧ�ܣ�");
//	}
//	s->size = 0;
//}
//�ж��Ƿ�Ϊ��
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
//������Ա�
//void clear(sl *s)
//{
//	if (isempty(s))
//	{
//		exit(-1);
//	}
//	free(s);
//}
//��¼�ɼ�
//void dl(sl *s,ElemType score)
//{
//	s->a[s->grade] = score;
//	s->grade++;
//}
//��ѯ
//void dis(sl *s)
//{
//	for (int i = 0;i<s->grade;i++)
//	{
//		printf("��%dΪͬѧ�ĳɼ�Ϊ:%d\n", i, s->a[i]);
//	}
//}
//void menu()
//{
//	printf("********ѧ���ɼ�����********\n");
//	printf("1---��¼ѧ���ɼ�---\n");
//	printf("2---��ѯѧ���ɼ�---\n");
//	printf("3---����ѧ���ɼ�---\n");
//	printf("4---ɾ��ѧ���ɼ�---\n");
//	sl s_L;
//	int num;
//	while (true)
//	{
//	{
//		int n;
//		printf("�����������");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			printf("¼��ѧ���ɼ�\n");
//			init(&s_L);
//			for (int i = 0;i<10;i++)
//			{
//				scanf("%d", &num);
//				dl(&s_L, num);
//			}
//			dis(&s_L);
//			break;
//		case 2:
//			printf("��ѯѧ���ɼ�\n");
//			break;
//		case 3:
//			printf("����ѧ���ɼ�\n");
//		}
//	}
//}
//int main()
//{
//	menu();
//	clear(&s_L);
//	return 0;
//}