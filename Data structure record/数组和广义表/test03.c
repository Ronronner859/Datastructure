//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//
//#include <stdio.h>
//#include <string.h>
//int BF(char *S,char *T,int pos)
//{
//	int i = pos;//开始匹配的位置
//	int j = 0;
//	if (pos<1 || pos>strlen(S))
//	{
//		printf("匹配位置有误！");
//		return 0;
//	}
//	while (i<=strlen(S) && j<=strlen(T))
//	{
//		if (S[i - 1] == T[j])
//		{
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j == strlen(T))
//		return i - strlen(T);
//	else
//		return 0;
//}
//int main()
//{
//	printf("BF算法：模式串T在主串S中的位置是：%d" ,BF("HELLO WORLD program", "gram", 1));
//	return 0;;
//}