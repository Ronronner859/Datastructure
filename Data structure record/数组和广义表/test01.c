#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/
/*
 * 串:顺序存储结构
 */

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#define Maxsize 255
typedef struct string //顺序串的结构体
{
	char ch[Maxsize + 1];//从0开始 存储串的一维数组
	int len;
}str;
int i = 0, j = 0;
//初始化 进行赋值
int StrAssign(str *s,char chs[]) //生成一个其值等于字符串常量chs的串s
{
	int i = 0;
	while (chs[i]!= '\0')  //循环 将chs的值赋值给s
	{
		s->ch[i] = chs[i];
		++i;
	}
	s->len = i;//
	return  0;
}
//串的复制
void Strcopy(str *s1,str *s2)
{
	for (i = 0;i<s1->len;i++)
	{
		s2->ch[i] = s1->ch[i];
	}
	s2->len = s1->len;
}
//求串的长度
int StrLength(str *s)
{
	return  s->len;
}
//判断串是否为空
bool StrEmpty(str *s)
{
	if (s->len == 0)
	{
		return true;
	}
	return false;
}
//打印串
int ShowString(str *s)
{
	if (StrEmpty(s))
	{
		printf("当前串为空！");
		return 0;
	}
	for (i = 0;i<s->len;i++)
	{
		printf("%c", s->ch[i]);
	}
	printf("\n");
	return 0;
}
//用s返回由s1和s2连接的新串
int ConcatString(str *s,str *s1,str *s2)
{
	for (i=0;i<s1->len;i++)//赋值s1串
	{
		s->ch[i] = s1->ch[i];
	}
	s->len = s1->len;
	for (j=0;j<s2->len;j++)//赋值s2串
	{
		s->ch[i] = s2->ch[i];
		++s->len;
	}
	return  0;
}
///用sub返回串S的第pos个字符起长度为len的子串
int SubString(str *sub,str *s,int pos,int len)
{
	//判断一下结束条件
	if ((pos<1)||(pos>s->len)||(len<0)||(len > s->len - pos + 1))
	{
		printf("输入有误！\n");
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
					//朴素的模式匹配算法
//int Index_BF(str* S, str* T, int pos)		//返回子串T在主串S中第pos个字符之后的位置，若不存在，返回0
//{
//	if (pos < 1 || pos > S->len)
//	{
//		printf("输入有误！");
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
//			i = i - j + 2;				//i退回到上次匹配首位的下一位
//			j = 1;
//		}
//	}
//	if (j >= T->len)
//		return i - T->len;
//	else
////		return 0;
//}

//BF算法 暴力求解法 实现返回模式串T在主串s中第pos个字符开始第一次出现的位置 若是不存在则返回0、
//int Index_BF(str *s,str *t,int pos)
//{
//	i = pos;//从第pos个字符开始
//	j = 1;//模式串从j=1开始
//	while ((i<=s->len)&&(j<=t->len)) //只有当主串和模式串不溢出才能正常进行匹配
//	{
//		if (s->ch[i] == t->ch[j])
//		{
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 2; //指针回溯 回到开始位置的下一个位置
//			j = 1;
//		}
//	}
//	if (j >=t->len) //匹配成功
//		return i - t->len;
//	else
//		return 0;//匹配失败
//}

	//BF算法
int Index_BF(str *s,str *t,int pos)
{
	int i = pos;
	int j = 0;
	if (pos<1||pos>s->len)
	{
		printf("输入有误！");
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
//获得模式串中的next值
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
//KMP算法
int Index_KMP(str *s,str *t,int pos)
{
	int i = pos;
	int j = 0;
	int next[255];
	get_next(t, next);
	if (pos<1 || pos>s->len)
	{
		printf("查到的位置有误！");
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
	printf("S串：");
	ShowString(&S);
	printf("当前S串的长度为%d\n", StrLength(&S));
	printf("N串：");
	ShowString(&N);
	printf("当前N串的长度为%d\n", StrLength(&N));
	printf("M串：");
	ShowString(&M);
	printf("当前N串的长度为%d\n", StrLength(&M));
	StrAssign(&T, ch3);
	printf("T串：");
	ShowString(&T);
	printf("当前T串的长度为%d\n", StrLength(&T));
	printf("BF算法求解模式子串的位置：\n");
	printf("(BF暴力模式匹配算法)子串T在主串M中的位置：%d\n", Index_BF(&M, &T, 1));
	printf("用sub返回串S的第pos个字符起长度为len的子串:\n");
	SubString(&L,&S,7,5);
	printf("显示S串中第7个字符起长度为5的子串L：");
	ShowString(&L);
	printf("(KMP模式匹配算法)子串L在主串S中的位置为%d\n", Index_KMP(&M, &T, 1));
	/*printf("用P返回由s1和s2连接的新串:\n");
	ConcatString(&P, &N, &M);
	printf("显示P返回由S和T连接的新串:");
	ShowString(&P);*/
	system("pause");
	return 0;
}

