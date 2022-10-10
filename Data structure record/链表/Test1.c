#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/
//顺序表缺陷：
//1.空间不够了需要扩容，增容是要付出代价
//2.避免频繁扩容，空间满了基本上就是扩充两倍，可能就会导致一定的空间的浪费
//3.顺序表要求数据从开始位置连续存储，那么就只能在头部或者中间位置插入删除数据，就需要进行挪动数据，效率低
//针对顺序表的缺陷 就设计出了链表
//连续的空间 ：我们就只记录第一位置的地址就可以了 就可以通过简引用来访问其他的位置地址
#include "test.h"
/*
 * phead是一个指针指向第一个结点  存的是第一个结点的地址
 * cut  = phead
 *
 * 物理结构
 * 逻辑结构
 *顺序表：
 *三个缺陷 1.空间不够可以扩容，但是有消耗 2.插入和删除需要挪动数据  3.会造成空间浪费
 *优点：支持随机访问
 *链表
 *1.按需申请空间，不用了就释放空间（更合理的使用了空间)
 *2.头部中间插入删除数据，不需要挪动数据
 *3.不存在空间浪费
 *缺点：
 *	1.每一个数据，都要存一个指针去链接后面的数据节点
 *	2.不支持随机访问（用下标直接访问第i个）
 */
void ListPrint(SL* phead)
{
	SL* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next; //? next 存的是下一个结点的地址
	}
}
void Listpushback(SL* phead, ElemType x)
{
	SL* tail = phead;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = x;
	newnode->next = NULL;

	tail->next = newnode;
}
void TestSList()
{
	SL* plist = NULL;
	Listpushback(&plist, 1);
	Listpushback(&plist, 21);
	Listpushback(&plist, 31);
	Listpushback(&plist, 41);
	Listpushback(&plist, 51);

	ListPrint(plist);

}
int mian()
{
	TestSList();
		return 0;
}