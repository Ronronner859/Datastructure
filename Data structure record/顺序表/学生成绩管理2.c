//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
//#include <stdbool.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define listSize 100
//
////ѧ����Ϣ�ṹ��
//typedef  struct
//{
//    long num;//ѧ��
//    char name[10];//����
//    int score;//�ɼ�
//}STUDENT;
//
////˳���ṹ��
//typedef  struct
//{
//    STUDENT stu[listSize];
//    int length;
//}LIST;
//
////����ǰ������
//void showMenu();
//void initList(LIST* L);
//void createList(LIST* L, int len);
//int  insertList(LIST* L, int pos, STUDENT* stu);
//void inputInfor(LIST* L);
//void traverseList(LIST* L);
//
////չʾϵͳ�˵�
//void showMenu()
//{
//    printf("___________________________________________\n");
//    printf("         ****ѧ���ɼ�����ϵͳ\n");
//    printf("\t    ��1������ѧ����Ϣ\n");
//    printf("\t    ��2������ѧ����Ϣ\n");
//    printf("\t    ��3��ɾ��ѧ����Ϣ\n");
//    printf("\t    ��4����ʾѧ����Ϣ\n");
//    printf("\t    ��5���˳�ϵͳ\n");
//    printf("___________________________________________\n");
//    return;
//}
//
////��ʼ��˳���
//void initList(LIST* L)
//{
//    L->length = 0;
//    return;
//}
//
////���ѧ����Ϣ������
//void  inputInfor(LIST* L, int index)
//{
//    printf("ѧ��=");
//    scanf("%d", &L->stu[index].num);
//    printf("����=");
//    scanf("%s", L->stu[index].name);
//    printf("����=");
//    scanf("%d", &L->stu[index].score);
//    return;
//}
//
////�����༶ѧ����Ϣ
//void createList(LIST* L, int len)
//{
//    int i;
//    for (i = 0; i < len; i++)
//    {
//        printf("�������%d��ѧ������Ϣ:\n", i + 1);
//        inputInfor(L, i);
//        L->length++;
//    }
//    return;
//}
//
////��˳����в���Ԫ��
//int  insertList(LIST* L, int pos, STUDENT* stu)
//{
//    int i;
//    if (L->length == listSize)
//    {
//        printf("˳�������,���ܲ���Ԫ��!\n");
//        return -1;
//    }
//    else if (pos<1 || pos>L->length + 1)
//    {
//        return 0;
//    }
//    else
//    {
//        for (i = L->length; i >= pos; i--)
//        {
//            L->stu[i] = L->stu[i - 1];
//        }
//        L->stu[pos - 1] = *stu;
//        L->length++;
//        return 1;
//    }
//}
//
////��˳�����ɾ��Ԫ��
//int  deleteList(LIST* L, int pos, STUDENT* e)
//{
//    int i;
//    if (L->length == 0)
//    {
//        printf("˳����ѿ�,���ܲ���Ԫ��!\n");
//        return -1;
//    }
//    else if (pos<1 || pos>L->length)
//    {
//        return 0;
//    }
//    else
//    {
//        *e = L->stu[pos - 1];
//        for (i = pos; i < L->length; i++)
//        {
//            L->stu[i - 1] = L->stu[i];
//        }
//        L->length--;
//        return 1;
//    }
//}
//
////��������˳�����Ԫ��
//void traverseList(LIST* L)
//{
//    int i;
//    if (0 == L->length)    //���˳����Ƿ�Ϊ��,���ղ��ܱ���
//    {
//        printf("˳���Ϊ��!\n");
//        return;
//    }
//
//    printf("        ѧ��   ����   ���� \n");
//    for (i = 0; i < L->length; i++)
//    {
//        printf("��%d��ѧ��     ", i + 1);
//        printf("%-7d%-7s%-7d\n", L->stu[i].num, L->stu[i].name, L->stu[i].score);
//    }
//    return;
//}
//
////������
//int main(void)
//{
//    int choice, len, pos;
//    LIST stu_infor;
//    STUDENT insertElem, * pInsertElem;
//    initList(&stu_infor);
//    while (true)
//    {
//        showMenu();
//        printf("����������ѡ��:");
//        scanf("%d", &choice);
//        system("cls");
//        switch (choice)
//        {
//        case 1: printf("������༶ѧ��ԭʼ����:");
//            scanf("%d", &len);
//            createList(&stu_infor, len);
//            printf("�ð༶ѧ����ϢΪ:\n");
//            system("cls");
//            printf("___________________________________________\n");
//            printf("        ������ѧ����Ϣ��ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 2: printf("�����������ѧ������Ϣ:\n");
//            printf("ѧ��=");
//            scanf("%d", &insertElem.num);
//            printf("����=");
//            scanf("%s", insertElem.name);
//            printf("����=");
//            scanf("%d", &insertElem.score);
//            pInsertElem = &insertElem;
//            while (0 == insertList(&stu_infor, pos, pInsertElem))
//            {
//                printf("___________________________________________\n");
//                printf("     ����ѧ��ǰ��Ϣ��ʾ\n");
//                traverseList(&stu_infor);
//                printf("___________________________________________\n\n");
//                printf("��������Ҫ����ѧ����Ϣ��λ��:");
//                scanf("%d", &pos);
//                system("cls");
//            }
//            printf("___________________________________\n");
//            printf("    ����Ҫ����ѧ����ʾ\n");
//            printf("    ѧ��   ����   ���� \n");
//            printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//            printf("___________________________________________\n");
//            printf("        ����ѧ������Ϣ��ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 3: while (0 == deleteList(&stu_infor, pos, &insertElem))
//        {
//            printf("___________________________________________\n");
//            printf("        ɾ��ѧ��ǰ��Ϣ��ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            printf("��������Ҫɾ��ѧ����Ϣ��λ��:");
//            scanf("%d", &pos);
//            system("cls");
//        }
//              printf("___________________________________\n");
//              printf("    ����Ҫɾ��ѧ����ʾ\n");
//              printf("    ѧ��   ����   ���� \n");
//              printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//              printf("___________________________________\n\n");
//              printf("___________________________________________\n");
//              printf("        ɾ��ѧ������Ϣ��ʾ\n");
//              traverseList(&stu_infor);
//              printf("___________________________________________\n\n");
//              break;
//        case 4: printf("___________________________________________\n");
//            printf("        �༶ѧ����Ϣ��ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 5:
//            exit(0);
//        default:printf("������������!\n");
//        }
//    }
//    return 0;
//}