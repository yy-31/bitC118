#define _CRT_SECURE_NO_WARNINGS 1

//关机程序
//程序运行起来一分钟内电脑关机，如果输入我是猪则取消关机
//不输入的话，一分钟内电脑就关机了

/*
shutdown 用来关机的
-s 设置关机
-t 倒计时

-a取消关机

*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };//字符数组，用来存放字符串
//	//运行起来就执行关机命令
//	//system函数用来执行命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入我是猪，就取消关机\n");
//	scanf("%s", input);//输入信息,input不需要取地址，因为数组名就是地址
//
//	//判断
//	//字符串的比较不能使用==来进行判断 需要使用strcmp - string compare
//	//两个字符串若相等,strcmp返回0
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机被取消\n");
//	}
//	else
//	{
//		//goto跳转重复执行
//		goto again;
//	}
//
//	return 0;
//}


//使用循环也可以做
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };//字符数组，用来存放字符串
//	//运行起来就执行关机命令
//	//system函数用来执行命令的
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟内关机，如果输入我是猪，就取消关机\n");
//		scanf("%s", input);//输入信息,input不需要取地址，因为数组名就是地址
//
//		//判断
//		//字符串的比较不能使用==来进行判断 需要使用strcmp - string compare
//		//两个字符串若相等,strcmp返回0
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("关机被取消\n");
//			break;
//		}
//	}
//
//
//	return 0;
//}





//rand()函数
//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//
//	//默认的种子设置的是1
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}


//srand() - 初始化随机数生成器的，种子不同rand()生成的随机数序列就不同
//time() - 返回一个时间戳，传NULL即可

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//
//	//要设置随机数的生成的种子
//	//要给srand()传递一个变化的值就行
//	srand((unsigned int)time(NULL));//srand不需要频繁调用，一次程序运行调用一次即可
//
//	//生成1~100的随机数
//	printf("%d\n", rand() % 100 + 1);//0~99 + 1 ---> 1~100
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//
//	//例如生成100~200
//	//rand() % 101 + 100
//	// 生成随机数a~b
//	/*
//	rand() % (b-a + 1) + a
//	*/
//	return 0;
//}


//猜数字游戏的实现
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********  1. play   *********\n");
//	printf("********  0. exit   *********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	int r_num = rand() % 100 + 1;
//
//	//2.猜数字
//	int guess = 0;
//	int cnt = 5;//猜数字的次数
//	//循环猜测
//	while (cnt)
//	{
//		printf("请输入猜测数字(1-100):>");
//		scanf("%d", &guess);
//
//		//判断猜测
//		if (guess > r_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了,数字是%d\n", r_num);
//			break;
//		}
//
//		cnt--;//每猜测一次次数减1
//	}
//
//	if (cnt == 0)
//	{
//		printf("很遗憾次数已用完，游戏失败\n");
//		printf("数字是%d\n", r_num);
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		//打印一个菜单
//		menu();
//		//选择
//		printf("请选择你的选项:>");
//		scanf("%d", &input);
//
//		//判断选择
//		switch (input)
//		{
//		case 1:
//			//printf("猜数字\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		//跳出后来到循环条件判断处
//	} while (input);
//
//	return 0;
//}


//数组

//数组的概念
/*
数组是一组相同类型的元素的集合
数组个数不能为0
数组的元素类型是相同的
*/

//一维数组的创建和初始化
//数组的创建
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//1~10
//	//100~200
//	//数组 - 一组数据
//
//	int math[20];//整型数组
//	char ch[10];//字符数组
//	double data[21];
//
//	return 0;
//}


//数组的初始化
//int main()
//{
//	//int arr1[5] = { 1,2,3,4,5 };//完全初始化
//	//int arr2[5] = { 1,2,3 };//不完全初始化，后面的元素默认初始化为0
//	////int arr3[5] = { 1,2,3,4,5,6 };//错误的
//
//	//double data[3] = { 1.2, 2.5, 6.5 };
//	//char ch1[10] = "hello";
//	//char ch2[10] = { 'h', 'e', 'l', 'l', 'o' };
//
//	int arr1[10] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	//数组只要初始化了，就可以省略掉数组的大小
//	//数组的大小会根据初始化的内容来推断
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };//?
//	int arr2[] = { 0 };//?
//
//	return 0;
//}


//数组的类型
//数组名去掉剩下的就是类型
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	printf("%zd\n", sizeof(num));
//	printf("%zd\n", sizeof(int));
//
//	int arr1[10];
//	printf("%zd\n", sizeof(arr1));//40 - 计算的是整个数组的大小，单位是字节
//	printf("%zd\n", sizeof(int [10]));
//
//
//	char ch[5];
//
//	//类型分别是int [10]、char [5]
//}


//一维数组的使用

//数组的下标
//[] - 下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	arr[5] = 60;
//	printf("%d\n", arr[5]);
//
//	return 0;
//}

//使用循环遍历整个数组
//数组的打印
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	//正的打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//	//倒的打印
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//数组的输入
//#include <stdio.h>
//int main()
//{
//	int arr[8] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//一维数组在内存中的存储

//#include <stdio.h>
//int main()
//{
//	int arr[8] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	//数组在内存中的存放是连续的
//	return 0;
//}


//sizeof计算数组元素的个数
//#include <stdio.h>
//
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//
//	//如何计算一个数组的元素个数
//	//sizeof(arr) 计算的是数组的总长度
//	//sizeof(arr[0]) 计算的是一个元素的长度
//	//printf("%zd\n", sizeof(arr) / sizeof(arr[0]));
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//二维数组
//二维数组的概念
/*
二维数组是数组元素为一维数组

*/


//二维数组的创建
//int main()
//{
//	int arr[3][5];
//	double data[2][8];
//
//	return 0;
//}


//二维数组的初始化
//int main()
//{
//	//不完全初始化
//	int arr1[3][5] = { 1,2 };
//	int arr2[3][5] = { 0 };
//
//	//完全初始化
//	int arr3[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//
//	//按行初始化
//	int arr4[3][5] = { {1,2},{3,4},{5,6} };
//	return 0;
//}


//二维数组的初始化可以省略行，不能省略列
//int main()
//{
//	int arr5[][5] = { 1,2,3 };
//	int arr6[][5] = { 1,2,3,4,5,6,7 };
//	int arr7[][5] = { {1,2}, {3,4}, {5,6} };
//
//	return 0;
//}

//二维数组的使用
//下标的使用
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf("%d\n", arr[2][4]);
//
//	return 0;
//}

//二维数组的输入和输出
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//
//	//给数组输入值
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//把数组内容打印出来
//	//按行打印
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//按列打印
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二维数组在内存中的存储
/*
二维数组在内存中的存储也是连续的
*/
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//变长数组
//int main()
//{
//	int arr1[10];
//	int arr2[3][5];
//	int n = 10;
//	//int arr3[n];//?
//
//	return 0;
//}


//作业
//猜数字游戏
/*
随机生成1~100的数字进行猜测
猜测过程中，大了或者小了都要给予反馈

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("***********************\n");
	printf("*******1. play*********\n");
	printf("*******0. exit*********\n");
	printf("***********************\n");
}

void game()
{
	//1.生成随机数
	int r_num = rand() % 100 + 1;
	//2.猜数字
	int guess = 0;

	while (1)
	{
		//输入猜测
		printf("请输入你的猜测数字(1-100):>");
		scanf("%d", &guess);

		if (guess > r_num)
		{
			printf("猜大了\n");
		}
		else if (guess < r_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了，数字是%d\n", r_num);
			break;
		}
	}

}
int main()
{
	int input = 0;

	//设置随机数种子
	srand((signed int)time(NULL));
	do
	{
		menu();
		//选择
		printf("请选择你的选项:>");

		scanf("%d", &input);

		//判断
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}

		//跳出后来到这
	} while (input);

	return 0;
}