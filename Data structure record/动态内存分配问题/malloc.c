#define _CRT_SECURE_NO_WARNINGS 1
/*加油！*/


#include "Test.h"
typedef int ElemEype;

/*
  动态内存管理

  栈区：局部变量  函数的形式参数

  堆区：动态内存分配

  静态区：全局变量 静态变量 Statint int a = 10;

内存的使用方式：

    1.变量：开辟一个空间
    int a = 10;
    2.数组：开辟一个连续的空间
    int arr[10]
    3.创建可变长数组 c99支持 不一定所有语言都支持

	4.动态内存分配：
		内存使用率更高！
		堆区：四个函数：malloc  : 用法 malloc(开辟个数*所占字节) malloc(10 * sizeof(int)) 开辟整形的空间需要转换成整形指针
									1.开辟成功，则返回一个指向开辟好空间的指针
									2.如果开辟失败，则返回一个NULL指针，因此Malloc的返回值一定要做检查
									3.返回值的类型是void* 所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
									4.如果参数size为0，malloc的行为是标准未定义的，取决与编译器
						free		5.与函数free连用，专门用来动态内存的释放和回收的。
									6.头文件引用：stdlib.h
						calloc:     calloc(个数, 字节大小)
									1.为num个大小为size的元素开辟一块空间，并且把空间的每个字节都初始化为0
									2.与malloc区别在于calloc会在返回地址之前把申请的空间的每个字节初始化为0
						realloc:   更具灵活性  功能：调整动态内存开辟空间的大小

									void* realloc(void *p,size);
									//上面空间已经不满足了！ 用realloc来调整动态内存的空间
									int* p2 = (int*)realloc(p, 100 * sizeof(int));
                                    1.如果p指向空间 之后有足够的内存空间可以追加，则可以直接返回 后返回p
                                    2.如果没有足够的内存空间，则realloc函数会找一块新的内存区域开辟满足需求的空间，并且把原来内存中的数据拷贝回来，
                                    释放旧的内存空间，最后返回新开辟的内存空间地址
									3.原有空间没有足够大的空间 属于异地扩 再其他的地方进行扩充 再拷贝数据到新空间 再释放新空间 对内存要求比较高
									4.原有空间有足够大的空间 原地扩
									5.也能对calloc和malloc的一个空间的追加
									6.重新开辟：realloc(NULL,40);
	5.常见的动态内存错误
	  1.没有进行合理性判断 有可能分配失败
	  首先进行返回值的判断 对空指针进行简引用操作
	  2.对动态开辟的内存越界访问
	  实际开辟内存小于分配的内存--属于越界访问
	  3.对非动态内存分配的释放 errno
	  4.使用free释放动态开辟内存的一部分  free只能从起始位置开始释放
	  5.对同一块动态内存多次释放
	  6.对动态开辟的内存忘记释放 导致内存泄露

	  顺序表缺陷：
	  1.空间不够了需要扩容，增容是要付出代价
	  2.避免频繁扩容，空间满了基本上就是扩充两倍，可能就会导致一定的空间的浪费
	  3.顺序表要求数据从开始位置连续存储，那么就只能在头部或者中间位置插入删除数据，就需要进行挪动数据，效率低
	  针对顺序表的缺陷 就设计出了链表
	  连续的空间 ：我们就只记录第一位置的地址就可以了 就可以通过简引用来访问其他的位置地址
*/ 
//
//struct S
//{
//    char name[20];
//    int age;
//};
//

void malloc()
{
    int* p = (ElemEype*)malloc(10 * sizeof(ElemEype));
    int* p2 = (ElemEype*)realloc(p, 50 * sizeof(ElemEype));
}

void fun()
{
    int a = 10;
    int* p = &a;
    free(p);//错误
    return;
}


void fun2()
{
    int* m = (int*)calloc(50, sizeof(int));
    
        int i = 0;
        for (i = 0; i < 50; i++)
        {
            *(m + i) = i;
        }
        for (i = 0; i < 50; i++)
        {
            printf("%d ", *(m + i));
        }
    
    free(m);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    m = NULL;
}
void fun3()
{
    int* m = (int*)calloc(50, sizeof(int));
    if (m == NULL)
    {
        printf("%s\n", strerror(errno));//打印错误
    }
    else
    {
        int i = 0;
        for (i = 0; i < 50; i++)
        {
            *(m + i) = i;
        }
        for (i = 0; i < 150; i++)
        {
            printf("%d ", *(m + i));
        }
    }
    free(m);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    m = NULL;
}
void fun4()
{
    int* m = (int*)calloc(50, sizeof(int));
    if (m == NULL)
    {
        printf("%s\n", strerror(errno));//打印错误
    }
    else
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            *m = i;
        }
        for (i = 0; i < 50; i++)
        {
            printf("%d ", *(m + i));
        }
    }
    free(m);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    m = NULL;
}
int main()
{
    //向内存申请10个整形的空间
    int* p =(ElemEype*)malloc(50 * sizeof(ElemEype)); //指向的是50个整形空间
    if (p==NULL)
    {
        printf("%s\n", strerror(errno));//打印错误
    }
    else
    {
        int i = 0;
        for (i = 0;i<50;i++)
        {
            *(p + i) = i;
        }
        for (i = 0; i < 50; i++)
        {
            printf("%d ", *(p + i));
        }
        printf("\n");
    }
    //free(p);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    //p = NULL;

    int* m = (int*)calloc(50, sizeof(int));
    if (m == NULL)
    {
        printf("%s\n", strerror(errno));//打印错误
    }
    else
    {
        int i = 0;
        for (i = 0; i < 50; i++)
        {
            *(m + i) = i;
        }
        for (i = 0; i < 50; i++)
        {
            printf("%d ", *(m + i));
        }
    }
    free(m);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    m= NULL;
    //上面空间已经不满足了！ 用realloc来调整动态内存的空间
    int* ptr = (int*)realloc(p, 100 * sizeof(int));
    if (ptr == NULL)
    {
        printf("%s\n", strerror(errno));//打印错误
    }
    else
    {
        p = ptr;
        for (int i = 50; i < 100; i++)
        {
            *(p + i) = i;
        }
        for (int i = 0; i < 100; i++)
        {
            printf("%d ", *(p + i));
        }
        
    }
    printf("\n");
    free(p);//把空间释放 就不要占用了   动态内存的释放和回收 操作系统收回
    p = NULL;
    return 0;
}
