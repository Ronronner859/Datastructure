//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//
//#include <stdio.h>
//#include <string.h>
//int BF(char *S,char *T,int pos)
//{
//	int i = pos;//��ʼƥ���λ��
//	int j = 0;
//	if (pos<1 || pos>strlen(S))
//	{
//		printf("ƥ��λ������");
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
//	printf("BF�㷨��ģʽ��T������S�е�λ���ǣ�%d" ,BF("HELLO WORLD program", "gram", 1));
//	return 0;;
//}