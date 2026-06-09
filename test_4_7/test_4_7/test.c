#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//
//	int a = 0;
//	scanf("%d", &a);
//
//	int b = a - 5;
//	printf("%d\n", b);
//	return 0;
//}

//3.占位符
/*
与printf基本一致
%[] 在方括号中指定一组匹配的字符
（比如%[0-9]）,遇到不在集合中的字符，匹配将停止

*/

//int main()
//{
//	char arr[100] = {0};
//	scanf("%[0-9]", arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//scanf除了%c之外，都会自动忽略起首的空白字符
//%c不忽略空白字符，总是返回当前第一个字符，无论是否为空格

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//
//	//scanf("%c", &ch);
//	//强制跳过空白字符
//	scanf(" %c", &ch);
//
//	printf("%c-----\n", ch);
//
//	return 0;
//}

/*

占位符%s 它的规则是，从当前第一个非空白字符开始读起，
直到遇到空白字符（即空格、换行符、制表符等)为止。

*/
//int main()
//{
//	char arr[20];//数组
//	scanf("%s", arr);//这里arr不需要取地址，因为数组名就是地址
//	printf("%s", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20];//数组
//	char arr2[20];//数组
//
//	//scanf("%s", arr1);
//	//scanf("%s", arr2);
//    /*
//	因为% s不会包含空白字符，所以无法用来读取多个单词，除非多个% s一起使用
//	scanf()遇到%s占位符，会在字符串变量末尾存储一个\0
//	*/
//	scanf("%s %s", arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}

/*
使用%s占位符时，指定读入字符串的最长长度，
即写成%[m]s，其中的[m]是一个整数，
表示读取字符串的最大长度，后面的字符将被丢弃,
防止越界访问

*/

//int main()
//{
//	char arr[5];//数组
//	//abcdefghi
//
//	scanf("%4s", arr);//4s表示最多读取4个字符，剩下的一个位置留给\0
//
//	printf("%s\n", arr);
//
//
//	return 0;
//}

//scanf读取含空格的字符串
/*
%[^\n]s
*/
//int main()
//{
//	char arr[20];//数组
//
//	scanf("%[^\n]s", arr);//读取一个字符串直到遇到\n才停止
//
//	printf("%s\n", arr);
//
//
//	return 0;
//}


//4.赋值忽略符
/*
原理就是scanf的格式字符串要严格匹配才能正确读取数据

*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//
//    scanf("%d-%d-%d", &year, &month, &day);
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}

//赋值忽略符号 在任意的占位符的%后添加一个*
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//
//    scanf("%d%*c%d%*c%d", &year, &month, &day);
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}



//第3章 分支和循环(上)

//if
/*
为真表达式执行，为假表达式不执行
0表示假，非0表示真

*/

//输入一个整数，判断是否为奇数
//int main()
//{
//	int n = 0;//初始化
//	//输入
//	scanf("%d", &n);
//	//判断是否是奇数
//	if (n % 2 == 1) //== 是判断相等， = 是赋值
//		printf("%d 是奇数\n", n);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;//初始化
//	//输入
//	scanf("%d", &n);
//	//判断是否是奇数
//	if (n % 2) //1 0
//		printf("%d 是奇数\n", n);
//
//	return 0;
//}

//else

//输入一个整数，判断是否为奇数，如果是奇数打印是奇数，否则打印偶数。

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2)
//	{
//		printf("是偶数\n");
//	}
//	else
//	{
//		printf("是奇数\n");
//	}
//
//	return 0;
//}

//输入一个年龄，>= 18岁就输出：成年，否则就输出：未成年


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}

//分支中包含多条语句
/*
默认情况下：if后面只能跟一条语句，如果
超过一条，就得带上{}，else也一样

*/
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}


//嵌套if - 多重判断
/*
要求输入一个整数,判断输入的整数是0，
还是正数或者负数。
*/
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num == 0)
//	{
//		printf("输入的数字是0\n");
//	}
//	else if (num > 0)
//	{
//		printf("输入的数字是正数\n");
//	}
//	else
//	{
//		printf("输入的数字是负数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num == 0)
//		printf("是0\n");
//	else //>0 <0
//	{
//		if (num > 0)
//			printf("正数\n");
//		else
//			printf("负数\n");
//
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num >= 0)
//	{
//		if (num > 0)
//			printf("正数\n");
//		else
//			printf("是0\n");
//	}
//	else
//		printf("负数\n");
//	return 0;
//}

//输入一个整数，如果是正数，再判断是奇数还是偶数，并输出；如果不是正数则输出：非正数。

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num > 0)
//	{
//		printf("正数\n");
//		if (num % 2 == 1)
//		{
//			printf("奇数\n");
//		}
//		else
//		{
//			printf("偶数\n");
//		}
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}


/*
输入一个人的年龄
如果年龄<18岁，打印"少年"
如果年龄在18岁至44岁打印"青年"
如果年龄在45岁至59岁打印"中老年"
如果年龄在60岁至89岁打印"老年"
如果90岁及以上打印"老寿星"

*/
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//第一种写法
//	//if (age < 18)
//	//{
//	//	printf("少年\n");
//	//}
//	//else
//	//{
//	//	if (age <= 44)
//	//	{
//	//		printf("青年\n");
//	//	}
//	//	else
//	//	{
//	//		if (age <= 59)
//	//		{
//	//			printf("中老年\n");
//	//		}
//	//		else
//	//		{
//	//			if (age <= 89)
//	//			{
//	//				printf("老年\n");
//	//			}
//	//			else
//	//			{
//	//				printf("老寿星\n");
//	//			}
//	//		}
//	//	}
//	//}
//
//	
//	//第二种写法
//	if (age < 18)
//	{
//		printf("少年n");
//	}
//	else if (age <= 44)//>= 18
//	{
//		printf("青年\n");
//	}
//	else if (age <= 59)//>=45
//	{
//		printf("中老年\n");
//	}
//	else if (age <= 89)//>=60
//	{
//		printf("老年\n");
//	}
//	else//>=90
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}


//悬空else
/*
如果有多个if和else，可以记住这样一条规则，
else总是跟最接近的if匹配。
*/

//#include <stdio.h>
//int main()
//{
//    //这段代码什么都不输出
//    int a = 0;
//    int b = 2;
//
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}


//关系操作符
/*
>
<
>=
<=
== 等于
!= 不等于

关系操作符通常返回0/1，表示真假
*/

//int main()
//{
//	int a = 10;
//	//如果一个变量和一个常量值比较相等的时候，建议将常量值放在==的左边
//	if (a = 5)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//如果a在90~100之间,优秀
//  //错误的写法
//	if (90 <= a <= 100)
//		printf("优秀\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//如果a在90~100之间,优秀
//	if (a >= 90 && a <= 100) //&& 并且
//		printf("优秀\n");
//
//	return 0;
//}
//我们输入一个年龄，如果年龄在18岁~36岁之间，我们输出青年。

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	
//	if (age >= 18 && age <= 36) //&& 并且
//		printf("青年\n");
//
//	return 0;
//}


//条件操作符（三目操作符）
/*
表达式1 ？ 表达式2：表达式3
表达式1如果为真，表达式2进行计算，表达式3不计算，表达式2的结果为整个表达式的结果
表达式1如果为假，表达式3进行计算，表达式2不计算，表达式3的结果为整个表达式的结果

*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	b = a > 5 ? 3 : -3;
//
//
//	printf("%d\n", b);
//	return 0;
//}

//使用条件表达式实现找两个数的最大值
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}


//逻辑操作符
/*
&& 逻辑与
|| 逻辑或
！ 逻辑取反


*/

//! - 取反
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	//flag 是真的时候，打印:呵呵
//	//if (flag)
//	//	printf("呵呵\n");
//	//flag 为假的时候，打印：哈哈
//	if (!flag)
//		printf("哈哈\n");
//
//	return 0;
//}

//&& - 并且 有一个为假则为假

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//
//	if (month >= 3 && month <= 5)
//	{
//		printf("春天\n");
//	}
//	return 0;
//}

//|| - 或者 有一个为真则为真
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬天\n");
//	}
//	return 0;
//}


//闰年的判断
/*
1．能被4整除并且不能被100整除是闰年
2．能被400整除是闰年

*/
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("平年\n");
//	}
//
//	return 0;
//}


//短路
/*
左边的结果已经能确定整个表达式的结果右边就不算了

&& 左边若为假，右边就不计算了
|| 左边若为真，右边就不计算了
*/


#include <stdio.h>
//
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//    i = a++ && ++b && d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 2 3 4
//
//    return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = a++ && ++b && d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);// 2 3 3 5
//
//    return 0;
//}


//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = a++ || ++b || d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);// 2 2 3 4
//
//    return 0;
//}

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//    i = a++ || ++b || d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 3 3 4
//
//    return 0;
//}



//作业
//写一个代码打印1 - 100之间所有3的倍数的数字
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


/*
写代码将三个整数数按从大到小输出。
例如：
输入：2 3 1

输出：3 2 1
*/

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d%d%d", &a, &b, &c);

	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}


	printf("%d %d %d", a, b, c);

	return 0;
}

