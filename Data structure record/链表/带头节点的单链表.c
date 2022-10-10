//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//typedef int ELEM_TYPE;
////带头结点的单链表
////有效节点的结构体设计
//typedef struct Lnode
//{
//	ELEM_TYPE data; //数据域    //保存节点有效值
//	struct Lnode* next; //指针域   //保存下一个有效节点的地址
//}Lnode, * PNode;
////typedef struct Node Node;
////typedef struct Node* PNode;
//
////单链表的初始化 -- 带头节点的单链表
////构建一个空表
//Lnode *InitList(Lnode *L)
//{
//	L = (Lnode*)malloc(sizeof(Lnode));//开辟一个结点指向L
//	L->next = NULL;//
//	return L;
//}
////插入数据：头插法
//void create_list(Lnode *L)
//{
//	Lnode* p;//新建一个结点指针 
//	int i = 1;
//	int j;
//	sacnf
//	while (i != 0) {
//		scanf("%d", &j);
//		if (j != -1) {
//			p = (Lnode*)malloc(sizeof(Lnode));//新建一个结点
//			p->data = j;//把输入的值赋值给新结点的指针域
//			p->next = L->next;//把新结点插入到表头 
//			L->next = p;//头结点要始终放在最前面 
//		}
//		else
//		{
//			i = 0;//如果输入-1则结束单链表的输入	
//		}
//	}
//}
//int main()
//{
//	return 0;
//}