//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//typedef int ELEM_TYPE;
////��ͷ���ĵ�����
////��Ч�ڵ�Ľṹ�����
//typedef struct Lnode
//{
//	ELEM_TYPE data; //������    //����ڵ���Чֵ
//	struct Lnode* next; //ָ����   //������һ����Ч�ڵ�ĵ�ַ
//}Lnode, * PNode;
////typedef struct Node Node;
////typedef struct Node* PNode;
//
////������ĳ�ʼ�� -- ��ͷ�ڵ�ĵ�����
////����һ���ձ�
//Lnode *InitList(Lnode *L)
//{
//	L = (Lnode*)malloc(sizeof(Lnode));//����һ�����ָ��L
//	L->next = NULL;//
//	return L;
//}
////�������ݣ�ͷ�巨
//void create_list(Lnode *L)
//{
//	Lnode* p;//�½�һ�����ָ�� 
//	int i = 1;
//	int j;
//	sacnf
//	while (i != 0) {
//		scanf("%d", &j);
//		if (j != -1) {
//			p = (Lnode*)malloc(sizeof(Lnode));//�½�һ�����
//			p->data = j;//�������ֵ��ֵ���½���ָ����
//			p->next = L->next;//���½����뵽��ͷ 
//			L->next = p;//ͷ���Ҫʼ�շ�����ǰ�� 
//		}
//		else
//		{
//			i = 0;//�������-1����������������	
//		}
//	}
//}
//int main()
//{
//	return 0;
//}