#define _CRT_SECURE_NO_WARNINGS 1
/*���ͣ�*/
/*
 * ��:˳��洢�ṹ
 */

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#define Maxsize 255
typedef struct string //˳�򴮵Ľṹ��
{
	char ch[Maxsize + 1];//��0��ʼ �洢����һά����
	int len;
}str;
int i = 0, j = 0;
//��ʼ�� ���и�ֵ
int StrAssign(str *s,char chs[]) //����һ����ֵ�����ַ�������chs�Ĵ�s
{
	int i = 0;
	while (chs[i]!= '\0')  //ѭ�� ��chs��ֵ��ֵ��s
	{
		s->ch[i] = chs[i];
		++i;
	}
	s->len = i;//
	return  0;
}
//���ĸ���
void Strcopy(str *s1,str *s2)
{
	for (i = 0;i<s1->len;i++)
	{
		s2->ch[i] = s1->ch[i];
	}
	s2->len = s1->len;
}
//�󴮵ĳ���
int StrLength(str *s)
{
	return  s->len;
}
//�жϴ��Ƿ�Ϊ��
bool StrEmpty(str *s)
{
	if (s->len == 0)
	{
		return true;
	}
	return false;
}
//��ӡ��
int ShowString(str *s)
{
	if (StrEmpty(s))
	{
		printf("��ǰ��Ϊ�գ�");
		return 0;
	}
	for (i = 0;i<s->len;i++)
	{
		printf("%c", s->ch[i]);
	}
	printf("\n");
	return 0;
}
//��s������s1��s2���ӵ��´�
int ConcatString(str *s,str *s1,str *s2)
{
	for (i=0;i<s1->len;i++)//��ֵs1��
	{
		s->ch[i] = s1->ch[i];
	}
	s->len = s1->len;
	for (j=0;j<s2->len;j++)//��ֵs2��
	{
		s->ch[i] = s2->ch[i];
		++s->len;
	}
	return  0;
}
///��sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�
int SubString(str *sub,str *s,int pos,int len)
{
	//�ж�һ�½�������
	if ((pos<1)||(pos>s->len)||(len<0)||(len > s->len - pos + 1))
	{
		printf("��������\n");
		return 0;
	}
	j = 0;
	while(j<len)
	{
		sub->ch[j] = s->ch[pos - 1];
		++j;
		++pos;
	}
	sub->len = len;
	return 0;
}
					//���ص�ģʽƥ���㷨
//int Index_BF(str* S, str* T, int pos)		//�����Ӵ�T������S�е�pos���ַ�֮���λ�ã��������ڣ�����0
//{
//	if (pos < 1 || pos > S->len)
//	{
//		printf("��������");
//		return 0;
//	}
//	int i = pos;
//	int j = 1;
//	while (i <= S->len && j <= T->len)
//	{
//		if (S->ch[i] == T->ch[j])
//		{
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 2;				//i�˻ص��ϴ�ƥ����λ����һλ
//			j = 1;
//		}
//	}
//	if (j >= T->len)
//		return i - T->len;
//	else
////		return 0;
//}

//BF�㷨 ������ⷨ ʵ�ַ���ģʽ��T������s�е�pos���ַ���ʼ��һ�γ��ֵ�λ�� ���ǲ������򷵻�0��
//int Index_BF(str *s,str *t,int pos)
//{
//	i = pos;//�ӵ�pos���ַ���ʼ
//	j = 1;//ģʽ����j=1��ʼ
//	while ((i<=s->len)&&(j<=t->len)) //ֻ�е�������ģʽ�������������������ƥ��
//	{
//		if (s->ch[i] == t->ch[j])
//		{
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 2; //ָ����� �ص���ʼλ�õ���һ��λ��
//			j = 1;
//		}
//	}
//	if (j >=t->len) //ƥ��ɹ�
//		return i - t->len;
//	else
//		return 0;//ƥ��ʧ��
//}

	//BF�㷨
int Index_BF(str *s,str *t,int pos)
{
	int i = pos;
	int j = 0;
	if (pos<1||pos>s->len)
	{
		printf("��������");
		return 0;
	}
	while (i<=s->len && j<=t->len)
	{
		if (s->ch[i - 1] == t->ch[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == t->len)
		return  i - t->len;
	else
		return 0;
	
}
//���ģʽ���е�nextֵ
void get_next(str *t,int *next)
{
	int i = 1;
	next[1] = 0;
	int j = 0;
	while(i<t->len)
	{
		if (j==0||t->ch[i-1] == t->ch[j])
		{
			++i;
			++j;
			next[i] = j;
		}
		else
		{
			j = next[j];
		}
	}
}
//KMP�㷨
int Index_KMP(str *s,str *t,int pos)
{
	int i = pos;
	int j = 0;
	int next[255];
	get_next(t, next);
	if (pos<1 || pos>s->len)
	{
		printf("�鵽��λ������");
		return 0;
	}
	while (i<=s->len && j<=t->len)
	{
		if (j==0 || s->ch[i-1]==t->ch[j])
		{
			++i;
			++j;
		}
		else
		{
			j = next[j];
		}
	}
	if (j == t->len)
		return  i - t->len;
	else
		return 0;
}
int main()
{
	str S;
	str N;
	str M;
	str T;
	str L;
	str P;
	char ch[] = { "hello world" };
	char ch1[] = { "program" };
	char ch2[] = { "hello world red" };
	char ch3[] = { "red" };
	StrAssign(&S, ch);
	StrAssign(&N, ch1);
	StrAssign(&M, ch2);
	printf("S����");
	ShowString(&S);
	printf("��ǰS���ĳ���Ϊ%d\n", StrLength(&S));
	printf("N����");
	ShowString(&N);
	printf("��ǰN���ĳ���Ϊ%d\n", StrLength(&N));
	printf("M����");
	ShowString(&M);
	printf("��ǰN���ĳ���Ϊ%d\n", StrLength(&M));
	StrAssign(&T, ch3);
	printf("T����");
	ShowString(&T);
	printf("��ǰT���ĳ���Ϊ%d\n", StrLength(&T));
	printf("BF�㷨���ģʽ�Ӵ���λ�ã�\n");
	printf("(BF����ģʽƥ���㷨)�Ӵ�T������M�е�λ�ã�%d\n", Index_BF(&M, &T, 1));
	printf("��sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�:\n");
	SubString(&L,&S,7,5);
	printf("��ʾS���е�7���ַ��𳤶�Ϊ5���Ӵ�L��");
	ShowString(&L);
	printf("(KMPģʽƥ���㷨)�Ӵ�L������S�е�λ��Ϊ%d\n", Index_KMP(&M, &T, 1));
	/*printf("��P������s1��s2���ӵ��´�:\n");
	ConcatString(&P, &N, &M);
	printf("��ʾP������S��T���ӵ��´�:");
	ShowString(&P);*/
	system("pause");
	return 0;
}

