#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/
//˳���ȱ�ݣ�
//1.�ռ䲻������Ҫ���ݣ�������Ҫ��������
//2.����Ƶ�����ݣ��ռ����˻����Ͼ����������������ܾͻᵼ��һ���Ŀռ���˷�
//3.˳���Ҫ�����ݴӿ�ʼλ�������洢����ô��ֻ����ͷ�������м�λ�ò���ɾ�����ݣ�����Ҫ����Ų�����ݣ�Ч�ʵ�
//���˳����ȱ�� ����Ƴ�������
//�����Ŀռ� �����Ǿ�ֻ��¼��һλ�õĵ�ַ�Ϳ����� �Ϳ���ͨ��������������������λ�õ�ַ
#include "test.h"
/*
 * phead��һ��ָ��ָ���һ�����  ����ǵ�һ�����ĵ�ַ
 * cut  = phead
 *
 * ����ṹ
 * �߼��ṹ
 *˳���
 *����ȱ�� 1.�ռ䲻���������ݣ����������� 2.�����ɾ����ҪŲ������  3.����ɿռ��˷�
 *�ŵ㣺֧���������
 *����
 *1.��������ռ䣬�����˾��ͷſռ䣨�������ʹ���˿ռ�)
 *2.ͷ���м����ɾ�����ݣ�����ҪŲ������
 *3.�����ڿռ��˷�
 *ȱ�㣺
 *	1.ÿһ�����ݣ���Ҫ��һ��ָ��ȥ���Ӻ�������ݽڵ�
 *	2.��֧��������ʣ����±�ֱ�ӷ��ʵ�i����
 */
void ListPrint(SL* phead)
{
	SL* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next; //? next �������һ�����ĵ�ַ
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