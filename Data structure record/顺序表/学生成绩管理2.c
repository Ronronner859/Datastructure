//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
//#include <stdbool.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define listSize 100
//
////学生信息结构体
//typedef  struct
//{
//    long num;//学号
//    char name[10];//姓名
//    int score;//成绩
//}STUDENT;
//
////顺序表结构体
//typedef  struct
//{
//    STUDENT stu[listSize];
//    int length;
//}LIST;
//
////函数前置声明
//void showMenu();
//void initList(LIST* L);
//void createList(LIST* L, int len);
//int  insertList(LIST* L, int pos, STUDENT* stu);
//void inputInfor(LIST* L);
//void traverseList(LIST* L);
//
////展示系统菜单
//void showMenu()
//{
//    printf("___________________________________________\n");
//    printf("         ****学生成绩管理系统\n");
//    printf("\t    【1】创建学生信息\n");
//    printf("\t    【2】插入学生信息\n");
//    printf("\t    【3】删除学生信息\n");
//    printf("\t    【4】显示学生信息\n");
//    printf("\t    【5】退出系统\n");
//    printf("___________________________________________\n");
//    return;
//}
//
////初始化顺序表
//void initList(LIST* L)
//{
//    L->length = 0;
//    return;
//}
//
////完成学生信息的输入
//void  inputInfor(LIST* L, int index)
//{
//    printf("学号=");
//    scanf("%d", &L->stu[index].num);
//    printf("姓名=");
//    scanf("%s", L->stu[index].name);
//    printf("分数=");
//    scanf("%d", &L->stu[index].score);
//    return;
//}
//
////创建班级学生信息
//void createList(LIST* L, int len)
//{
//    int i;
//    for (i = 0; i < len; i++)
//    {
//        printf("请输入第%d个学生的信息:\n", i + 1);
//        inputInfor(L, i);
//        L->length++;
//    }
//    return;
//}
//
////向顺序表中插入元素
//int  insertList(LIST* L, int pos, STUDENT* stu)
//{
//    int i;
//    if (L->length == listSize)
//    {
//        printf("顺序表已满,不能插入元素!\n");
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
////在顺序表中删除元素
//int  deleteList(LIST* L, int pos, STUDENT* e)
//{
//    int i;
//    if (L->length == 0)
//    {
//        printf("顺序表已空,不能插入元素!\n");
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
////遍历输入顺序表中元素
//void traverseList(LIST* L)
//{
//    int i;
//    if (0 == L->length)    //检查顺序表是否为空,不空才能遍历
//    {
//        printf("顺序表为空!\n");
//        return;
//    }
//
//    printf("        学号   姓名   分数 \n");
//    for (i = 0; i < L->length; i++)
//    {
//        printf("第%d个学生     ", i + 1);
//        printf("%-7d%-7s%-7d\n", L->stu[i].num, L->stu[i].name, L->stu[i].score);
//    }
//    return;
//}
//
////主函数
//int main(void)
//{
//    int choice, len, pos;
//    LIST stu_infor;
//    STUDENT insertElem, * pInsertElem;
//    initList(&stu_infor);
//    while (true)
//    {
//        showMenu();
//        printf("请输入您的选择:");
//        scanf("%d", &choice);
//        system("cls");
//        switch (choice)
//        {
//        case 1: printf("请输入班级学生原始人数:");
//            scanf("%d", &len);
//            createList(&stu_infor, len);
//            printf("该班级学生信息为:\n");
//            system("cls");
//            printf("___________________________________________\n");
//            printf("        创建的学生信息显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 2: printf("请输入待插入学生的信息:\n");
//            printf("学号=");
//            scanf("%d", &insertElem.num);
//            printf("姓名=");
//            scanf("%s", insertElem.name);
//            printf("分数=");
//            scanf("%d", &insertElem.score);
//            pInsertElem = &insertElem;
//            while (0 == insertList(&stu_infor, pos, pInsertElem))
//            {
//                printf("___________________________________________\n");
//                printf("     插入学生前信息显示\n");
//                traverseList(&stu_infor);
//                printf("___________________________________________\n\n");
//                printf("请输入需要插入学生信息的位置:");
//                scanf("%d", &pos);
//                system("cls");
//            }
//            printf("___________________________________\n");
//            printf("    您需要插入学生显示\n");
//            printf("    学号   姓名   分数 \n");
//            printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//            printf("___________________________________________\n");
//            printf("        插入学生后信息显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 3: while (0 == deleteList(&stu_infor, pos, &insertElem))
//        {
//            printf("___________________________________________\n");
//            printf("        删除学生前信息显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            printf("请输入需要删除学生信息的位置:");
//            scanf("%d", &pos);
//            system("cls");
//        }
//              printf("___________________________________\n");
//              printf("    您需要删除学生显示\n");
//              printf("    学号   姓名   分数 \n");
//              printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//              printf("___________________________________\n\n");
//              printf("___________________________________________\n");
//              printf("        删除学生后信息显示\n");
//              traverseList(&stu_infor);
//              printf("___________________________________________\n\n");
//              break;
//        case 4: printf("___________________________________________\n");
//            printf("        班级学生信息显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 5:
//            exit(0);
//        default:printf("您的输入有误!\n");
//        }
//    }
//    return 0;
//}