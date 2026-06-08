#define _CRT_SECURE_NO_WARNINGS 1

//在屏幕上打印hello C

#include <stdio.h>
//
//int main()
//{
//
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//
//	return 0;
//}

//运行代码
/*
先编译再链接，运行代码
ctrl + f5

*/


//main函数（主函数）的模板
//int - 整型（整数）
//main函数会返回一个整型的值
/*
main函数有且只有一个
main函数是程序的入口
程序从main函数的第一行开始执行

*/

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//main函数的其他写法
//这种写法非常古老的写法 - 不建议
//void 是无（空）的意思，main函数执行结束后什么都不返回

//void main()
//{
//
//}

//int main(void)//void 是无（空）的意思，这里表示main函数是不需要参数的
//{
//	return 0;
//}


//main函数是可以接收参数的
//但是main函数的参数是有特殊意义和用途的
//这里不讲
//int main(int argc, char* argv, char* envp[])
//{
//	//...
//	return 0;
//}


//printf和库函数
/*
printf -- print + format  格式化输出，按照格式打印
用于屏幕上的打印输出
%d %c 叫做占位符，会被后边的值替换
""括起来的是一个字符串

*/


//包含头文件
#include <stdio.h>
/*

stdio.h
standard input output
.h 头文件
标准输入输出头文件

库函数 - 由编译器厂商根据实现标准实现的一组函数，
称之为标准库，这些函数就叫做库函数

一个系列的函数声明再同一个头文件，所以库函数的使用需要包含头文件
*/
//#include <stdio.h>
//
//int main()
//{
//	//printf("hello C\n");
//	//printf("你好，C语言\n");
//	//printf("hello world\n");
//
//	//打印字符
//	//printf("%c", 'q');//''括起来的是一个字符
//	//printf("%d", 123);//%d 用来打印整数
//	printf("%f", 3.5);//%f 是用来打印小数的，默认小数点后打印6位
//
//
//	return 0;
//}


//关键字
/*
保留给C语言使用的
创建标识符不能和关键字重复
关键字不能自己创建

*/
//int main()
//{
//	//int char;//error
//
//	return 0;
//}


//字符和ascii编码
/*
字符以ascii编码存储在内存中 字符型是特殊的整型
'A' - 65
'a' - 97
'0' - 48

dec - 十进制
oct - 八进制
hex - 十六进制

*/
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 'b');
//	printf("%c\n", 'A');
//	printf("%c\n", 'A' + 32);
//
//	printf("%c\n", 'x');
//	printf("%c\n", 'x' - 32);
//
//
//	return 0;
//}


//把可打印的字符打印到屏幕上
//int main()
//{
//
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}


//字符串和\0
//%c 打印字符
//%d 打印整数
//%f 打印小数
//%s 打印字符串

//int main()
//{
//	//"abcdef";
//	//"abc";
//	//"a";
//	//"";//空字符串
//
//	printf("hehe\n");
//	printf("%s", "hehe");
//
//	return 0;
//}

//'\0'

//int main()
//{
//
//	"abcedf";//字符串的末尾隐藏着一个\0字符，作为字符串的结束标志
//	"abc";
//	//数组 - 一组相同的类型的数据
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//
//	//printf在打印字符串的时候，要遇到\0才打印结束
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0; 
//}


//转义字符 - 转变原来的意义

//int main()
//{
//	'a';
//	'x';
//	'\0';//转义字符
//	'\n';//转义字符
//	return 0;
//}

//int main()
//{
//	printf("\nabc\ndef\n");
//
//	return 0;
//}

int main()
{
	printf("(are you ok\?\?)");
	//(are you ok]
	//??) - 三字母词
	//??) -> ]
	//??( -> [
	//??> -> }
	//??< -> {
	return 0;
}