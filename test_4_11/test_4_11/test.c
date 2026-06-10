#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//switch语句

//if和switch语句的对比
//输入任意一个整数值，计算除3之后的余数

//if的写法
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	//if
//	if (n % 3 == 0)
//	{
//		printf("余数是0\n");
//	}
//	else if (n % 3 == 1)
//	{
//		printf("余数是1\n");
//	}
//	else
//	{
//		printf("余数是2\n");
//	}
//	return 0;
//}


//switch的写法
/*
switch后面的表达式必须是整型表达式（字符类型也可以）
case后的值，必须是整型常量表达式

case 与后面的数字之间必须要有空格
case 后面的语句执行完后要跳出switch语句需要加上break
*/

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 1;
//
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

/*
输入一个1~7的数字，打印对应的星期几例如:
输入:1 输出:星期一
输入:2输出:星期二
输入:3输出:星期三
输入:4输出:星期四
输入:5输出:星期五
输入:6输出:星期六
输入:7输出:星期天


*/
//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

/*
输入1~5，输出的是“工作日”;
输入6~7，输出“休息日”

break的使用要视情况而定
default 当所有case不能匹配的时候匹配的选项
*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//switch语句中的case和default的顺序问题
/*
没有任何要求，可以放在switch-case语句中的任意位置


*/


//while循环
//int main()
//{
//	int n = 3;
//	while (n)
//		printf("hehe\n");
//
//	return 0;
//}


//在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}


/*
输入一个正的整数，逆序打印这个整数的每一位
例如:
输入:1234，输出:4 3 2 1
输入:521，输出:1 2 5
*/

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//
//	return 0;
//}



//for循环
/*
初始化部分只会被执行一次
*/

//在屏幕上打印1~10的值
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//练习
//计算1~100之间3的倍数的数字之和
//int main()
//{
//	int i = 0;
//	int sum = 0;//求和
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		sum += i;
//	//	}
//	//}
//
//	//优化
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//关于初始化变量i的定义和初始化
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	//
//	return 0;
//}


//do while循环
/*
循环体至少执行1次
*/

//屏幕上打印1~10的语句
//int main()
//{
//
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}



/*
输入一个正整数，计算这个整数是几位数?
例如:
输入:1234输出:4
输入:12输出:2
*/
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;//位数的计数
//
//	//do while的写法
//	//do
//	//{
//	//	cnt++;
//	//	n /= 10;
//	//} while (n);
//
//	//while
//	//if (n == 0)
//	//{
//	//	cnt = 1;
//	//}
//	//else
//	//{
//	//	while (n)
//	//	{
//	//		cnt++;
//	//		n /= 10;
//	//	}
//	//}
//
//	//for
//	if (n == 0)
//	{
//		cnt = 1;
//	}
//	else
//	{
//		for (; n != 0; n /= 10)
//		{
//			cnt++;
//		}
//	}
//
//	printf("%d\n", cnt);
//	
//	return 0;
//}



//break和continue
/*
break的作用是用于永久的终止循环，只要break 被执行，
直接就会跳出循环，继续往后执行。
continue的作用是跳过本次循环中continue后边的代码，
在for 循环和 while循环中有所差异的。


*/

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	} while (i <= 10);
//
//	return 0;
//}



//循环的嵌套
/*
找出100~200之间的素数，并打印在屏幕上。
注:素数又称质数，只能被1和本身整除的数字。

*/

//int main()
//{
//	int i = 0;
//	//产生100~200的数字
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设这个数是素数的标记
//		//拿2~i-1之间的数去和i相除，若有除尽的，则不是素数，若没有，则为素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//相除
//			{
//				flag = 0;//若除尽则标记,不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//无flag版本
//int main()
//{
//	int i = 0;
//	//产生100~200的数字
//	for (i = 100; i <= 200; i++)
//	{
//		//拿2~i-1之间的数去和i相除，若有除尽的，则不是素数，若没有，则为素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)//相除
//			{
//				break;
//			}
//		}
//		if (j > i - 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//优化的版本
#include <math.h>
/*
sqrt开平方函数
*/
//int main()
//{
//	int i = 0;
//	//产生100~200的数字
//	for (i = 101; i <= 200; i+=2)//偶数优化
//	{
//		int flag = 1;//假设这个数是素数的标记
//		//拿2~i-1之间的数去和i相除，若有除尽的，则不是素数，若没有，则为素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//一个数若可以写成a*b = i的形式，那么a和b 必然有一个数<=sqrt(i)
//		{
//			if (i % j == 0)//相除
//			{
//				flag = 0;//若除尽则标记,不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//goto
/*
在同一个函数内跳转到设置好的标记处

跳转到标记处，适用于多层循环的跳出

*/
//int main()
//{
//	printf("hehe\n");
//	goto flag;
//	printf("haha\n");
//flag:
//	printf("heihei\n");
//
//	return 0;
//}
//


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}


//作业
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求10 个整数中最大值
//int main()
//{
//	int cnt = 10;
//	int input = 0;
//	int max;
//
//	//直接将第一次输入的数作为最大值
//	scanf("%d", &max);
//	cnt--;
//
//	while (cnt)
//	{
//		scanf("%d", &input);
//		if (input > max)
//		{
//			max = input;
//		}
//		cnt--;
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

/*
计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

*/

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}


//数9的个数
//1到 100 的所有整数中出现多少个数字9
/*
9 19 29 39 49 59 69 79 89 90 
91 92 93 94 95 96 97 98 99

*/
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			cnt++;
//		}
//		if (i / 10 == 9)
//		{
//			cnt++;
//		}
//	}
//
//	printf("%d\n", cnt);
//	return 0;
//}

//打印100~200之间的素数
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	//产生100~200的数
//	for (i = 101; i <= 200; i+=2)//偶数优化
//	{
//		int flag = 1;//假设是素数
//		//用2~i-1的数去试除i，若除尽就不是素数，反之则是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//开平方优化
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//打印1000年到2000年之间的闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


/*
给定两个数，求这两个数的最大公约数

例如：

输入：20 40

输出：20

*/

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//求最大公约数
	int min = a < b ? a : b;
	int i = 0;
	for (i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}