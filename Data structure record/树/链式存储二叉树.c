#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/

/*  二叉树 链式存储*/
#include <stdio.h>
#define Telemtype int

//递归定义
typedef struct Binode
{
	Telemtype data;
	struct Binode* lchild; //左孩子
	struct Binode* rchild; //右孩子
}Binode,*Bitree;