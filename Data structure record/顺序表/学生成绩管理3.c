//#define _CRT_SECURE_NO_WARNINGS 1
///*���ͣ�*/
///*  ѧ���ɼ���¼ */
//
//
//#include <stdbool.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//#define MAXSize 100 // ˳�������
//
////ѧ���ṹ��
//typedef  struct
//{
//    int num;//ѧ��
//    char name[10];//����
//    int score;//�ɼ�
//}student;
//
////˳���ṹ��
//typedef  struct
//{
//    student  stu[MAXSize];//ָ��ѧ���ṹ���ָ��
//    int len;//��ŵ�ѧ������
//}list, * ls;
//
//
//
////��ʼ��˳���
//void initList(list* L)
//{
//    L->len = 0;
//    return;
//}
////��˳����в���Ԫ��
//int  insertList(list* L, int pos, student* stu)
//{
//    int i;
//    if (L->len == MAXSize)
//    {
//        printf("˳�������,���ܲ���Ԫ��!\n");
//        return -1;
//    }
//    else if (pos<1 || pos>L->len + 1)
//    {
//        return 0;
//    }
//    else
//    {
//        for (i = L->len; i >= pos; i--)
//        {
//            L->stu[i] = L->stu[i - 1];
//        }
//        L->stu[pos - 1] = *stu;
//        L->len++;
//        return 1;
//    }
//}
//
////��˳�����ɾ��Ԫ��
//int  deleteList(list* L, int pos, student* e)
//{
//    int i;
//    if (L->len == 0)
//    {
//        printf("˳����ѿ�,���ܲ���Ԫ��!\n");
//        return -1;
//    }
//    else if (pos<1 || pos>L->len)
//    {
//        return 0;
//    }
//    else
//    {
//        *e = L->stu[pos - 1];
//        for (i = pos; i < L->len; i++)
//        {
//            L->stu[i - 1] = L->stu[i];
//        }
//        L->len--;
//        return 1;
//    }
//}
////�ж�˳����Ƿ�Ϊ��
//bool IsEmpty(list* L) {
//    if (L->len == 0) {
//        return false;
//    }
//    return true;
//}
////��������˳�����Ԫ��
//void traverseList(list* L)
//{
//    int i;
//    IsEmpty(L);
//    printf("        ѧ��   ����   ���� \n");
//    for (i = 0; i < L->len; i++)
//    {
//        printf("��%d��ѧ��     ", i + 1);
//        printf("%-7d%-7s%-7d\n", L->stu[i].num, L->stu[i].name, L->stu[i].score);
//    }
//    return;
//}
//
////չʾ�˵�
//void Menu()
//{
//    printf("_***********************************-\n");
//    printf("         ˳���ʵ��ѧ���ɼ�¼��\n");
//    printf("\t    ��1����¼ѧ���ɼ�\n");
//    printf("\t    ��2������ѧ���ɼ�\n");
//    printf("\t    ��3��ɾ��ѧ���ɼ�\n");
//    printf("\t    ��4����ѯѧ���ɼ�\n");
//    printf("\t    ��5���˳�ϵͳ\n");
//    printf("_***********************************-\n");
//    return;
//}
//
////���ѧ��score������
//void  inputInfor(list* L, int index)
//{
//    printf("ѧ��=");
//    scanf("%d", &L->stu[index].num);
//    printf("����=");
//    scanf("%s", L->stu[index].name);
//    printf("����=");
//    scanf("%d", &L->stu[index].score);
//    return;
//}
////�����༶ѧ���ɼ�
//void createList(list* L, int lens)
//{
//    int i;
//    for (i = 0; i < lens; i++)
//    {
//        printf("�������%d��ѧ���ĳɼ�:\n", i + 1);
//        inputInfor(L, i);
//        L->len++;
//    }
//    return;
//}
//
////������
//int main(void)
//{
//    int choice, len, pos;
//    list stu_infor;
//    student insertElem, * pInsertElem;
//    initList(&stu_infor);
//    while (true)
//    {
//        Menu();
//        printf("����������ѡ��:");
//        scanf("%d", &choice);
//        system("cls");
//        switch (choice)
//        {
//        case 1: printf("������༶ѧ��ԭʼ����:");
//            scanf("%d", &len);
//            createList(&stu_infor, len);
//            printf("�ð༶ѧ���ɼ�Ϊ:\n");
//            system("cls");
//            printf("___________________________________________\n");
//            printf("        ������ѧ���ɼ���ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 2: printf("�����������ѧ���ĳɼ�:\n");
//            printf("ѧ��=");
//            scanf("%d", &insertElem.num);
//            printf("����=");
//            scanf("%s", insertElem.name);
//            printf("�ɼ�=");
//            scanf("%d", &insertElem.score);
//            pInsertElem = &insertElem;
//            while (0 == insertList(&stu_infor, pos, pInsertElem))
//            {
//                printf("___________________________________________\n");
//                printf("     ����ѧ��ǰ�ɼ���ʾ\n");
//                traverseList(&stu_infor);
//                printf("___________________________________________\n\n");
//                printf("��������Ҫ����ѧ���ɼ���λ��:");
//                scanf("%d", &pos);
//                system("cls");
//            }
//            printf("___________________________________\n");
//            printf("    ����Ҫ����ѧ����ʾ\n");
//            printf("    ѧ��   ����   ���� \n");
//            printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//            printf("___________________________________________\n");
//            printf("        ����ѧ����ɼ���ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 3: while (0 == deleteList(&stu_infor, pos, &insertElem))
//        {
//            printf("___________________________________________\n");
//            printf("        ɾ��ѧ��ǰ�ɼ���ʾ\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            printf("��������Ҫɾ��ѧ���ɼ���λ��:");
//            scanf("%d", &pos);
//            system("cls");
//        }
//              printf("___________________________________\n");
//              printf("    ����Ҫɾ��ѧ����ʾ\n");
//              printf("    ѧ��   ����   �ɼ� \n");
//              printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//              printf("___________________________________\n\n");
//              printf("___________________________________________\n");
//              printf("        ɾ��ѧ����ɼ���ʾ\n");
//              traverseList(&stu_infor);
//              printf("___________________________________________\n\n");
//              break;
//        case 4: printf("___________________________________________\n");
//            printf("        �༶ѧ���ɼ���ʾ\n");
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
