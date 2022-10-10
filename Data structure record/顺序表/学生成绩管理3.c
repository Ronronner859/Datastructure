//#define _CRT_SECURE_NO_WARNINGS 1
///*加油！*/
///*  学生成绩登录 */
//
//
//#include <stdbool.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//#define MAXSize 100 // 顺序表容量
//
////学生结构体
//typedef  struct
//{
//    int num;//学号
//    char name[10];//姓名
//    int score;//成绩
//}student;
//
////顺序表结构体
//typedef  struct
//{
//    student  stu[MAXSize];//指向学生结构体的指针
//    int len;//存放的学生人数
//}list, * ls;
//
//
//
////初始化顺序表
//void initList(list* L)
//{
//    L->len = 0;
//    return;
//}
////向顺序表中插入元素
//int  insertList(list* L, int pos, student* stu)
//{
//    int i;
//    if (L->len == MAXSize)
//    {
//        printf("顺序表已满,不能插入元素!\n");
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
////在顺序表中删除元素
//int  deleteList(list* L, int pos, student* e)
//{
//    int i;
//    if (L->len == 0)
//    {
//        printf("顺序表已空,不能插入元素!\n");
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
////判断顺序表是否为空
//bool IsEmpty(list* L) {
//    if (L->len == 0) {
//        return false;
//    }
//    return true;
//}
////遍历输入顺序表中元素
//void traverseList(list* L)
//{
//    int i;
//    IsEmpty(L);
//    printf("        学号   姓名   分数 \n");
//    for (i = 0; i < L->len; i++)
//    {
//        printf("第%d个学生     ", i + 1);
//        printf("%-7d%-7s%-7d\n", L->stu[i].num, L->stu[i].name, L->stu[i].score);
//    }
//    return;
//}
//
////展示菜单
//void Menu()
//{
//    printf("_***********************************-\n");
//    printf("         顺序表实现学生成绩录入\n");
//    printf("\t    【1】登录学生成绩\n");
//    printf("\t    【2】插入学生成绩\n");
//    printf("\t    【3】删除学生成绩\n");
//    printf("\t    【4】查询学生成绩\n");
//    printf("\t    【5】退出系统\n");
//    printf("_***********************************-\n");
//    return;
//}
//
////完成学生score的输入
//void  inputInfor(list* L, int index)
//{
//    printf("学号=");
//    scanf("%d", &L->stu[index].num);
//    printf("姓名=");
//    scanf("%s", L->stu[index].name);
//    printf("分数=");
//    scanf("%d", &L->stu[index].score);
//    return;
//}
////创建班级学生成绩
//void createList(list* L, int lens)
//{
//    int i;
//    for (i = 0; i < lens; i++)
//    {
//        printf("请输入第%d个学生的成绩:\n", i + 1);
//        inputInfor(L, i);
//        L->len++;
//    }
//    return;
//}
//
////主函数
//int main(void)
//{
//    int choice, len, pos;
//    list stu_infor;
//    student insertElem, * pInsertElem;
//    initList(&stu_infor);
//    while (true)
//    {
//        Menu();
//        printf("请输入您的选择:");
//        scanf("%d", &choice);
//        system("cls");
//        switch (choice)
//        {
//        case 1: printf("请输入班级学生原始人数:");
//            scanf("%d", &len);
//            createList(&stu_infor, len);
//            printf("该班级学生成绩为:\n");
//            system("cls");
//            printf("___________________________________________\n");
//            printf("        创建的学生成绩显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 2: printf("请输入待插入学生的成绩:\n");
//            printf("学号=");
//            scanf("%d", &insertElem.num);
//            printf("姓名=");
//            scanf("%s", insertElem.name);
//            printf("成绩=");
//            scanf("%d", &insertElem.score);
//            pInsertElem = &insertElem;
//            while (0 == insertList(&stu_infor, pos, pInsertElem))
//            {
//                printf("___________________________________________\n");
//                printf("     插入学生前成绩显示\n");
//                traverseList(&stu_infor);
//                printf("___________________________________________\n\n");
//                printf("请输入需要插入学生成绩的位置:");
//                scanf("%d", &pos);
//                system("cls");
//            }
//            printf("___________________________________\n");
//            printf("    您需要插入学生显示\n");
//            printf("    学号   姓名   分数 \n");
//            printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//            printf("___________________________________________\n");
//            printf("        插入学生后成绩显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            break;
//        case 3: while (0 == deleteList(&stu_infor, pos, &insertElem))
//        {
//            printf("___________________________________________\n");
//            printf("        删除学生前成绩显示\n");
//            traverseList(&stu_infor);
//            printf("___________________________________________\n\n");
//            printf("请输入需要删除学生成绩的位置:");
//            scanf("%d", &pos);
//            system("cls");
//        }
//              printf("___________________________________\n");
//              printf("    您需要删除学生显示\n");
//              printf("    学号   姓名   成绩 \n");
//              printf("     %-7d%-7s%-7d\n", insertElem.num, insertElem.name, insertElem.score);
//              printf("___________________________________\n\n");
//              printf("___________________________________________\n");
//              printf("        删除学生后成绩显示\n");
//              traverseList(&stu_infor);
//              printf("___________________________________________\n\n");
//              break;
//        case 4: printf("___________________________________________\n");
//            printf("        班级学生成绩显示\n");
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
