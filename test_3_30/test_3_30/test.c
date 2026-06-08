#define _CRT_SECURE_NO_WARNINGS 1


//转义字符

#include <stdio.h>

//int main()
//{
//	//单引号
//	printf("%c\n", '\'');
//
//
//	return 0;
//}

//int main()
//{
//	//printf("%s\n", "abcdef");
//	//printf("%s\n", "x");
//  //双引号
//	//printf("%s\n", "\"");
//	//printf("''''\n");
//	//printf("%s\n", "''''");
//
//
//	return 0;
//}

//c:\test\test.c
//int main()
//{
//	//\t - tab
//	//printf("c:\\test\\test.c");
//	// \t 表示光标移动到下一个水平制表符的位置 4/8（字节）的倍数
//	printf("a\tbc\tdef\tqqqq\twwwww\tx");
//
//	return 0;
//}


//int main()
//{
//	printf("\a");
//	return 0;
//}

//int main()
//{
//	//光标往回退一格
//	printf("xxxx\b\by");
//	
//	getchar();//函数，用来在键盘上得到一个字符
//	return 0;
//}

//int main()
//{
//	//换行
//	printf("abc\ndef\nqqqq");
//	return 0;
//}


//int main()
//{
//	//回车符 - 光标移动到同一行的开头
//	printf("abc\rxyzqwe");
//	getchar();
//
//	return 0;
//}

//int main()
//{
//	/*
//	\ddd ddd表示1~3个八进制数字
//	\xdd dd表示1~2个十六进制数字
//	//二者的表现形式转换为十进制不能超过127
//
//	\0 就是\ddd 的一种形式 用来表示字符串的结束标志null字符
//	
//	*/
//	printf("%c\n", '\130');//'X'
//	printf("%c\n", '\x33');//'3'
//
//	return 0;
//}


#include <string.h>

//int main()
//{
//	int len = strlen("abcedf");//strlen - string length - 统计字符串的长度
//
//	//strlen统计的是字符串中\0之前的字符个数
//	printf("%d\n", len);//6
//	return 0;
//}

//int main()
//{
//	int len = strlen("c:\test\198\abc\test.c");
//	printf("%d\n", len);//18
//	return 0;
//}

//int main()
//{
//	int len = strlen("c:\test\098\abc\test.c");
//	printf("%d\n", len);//6
//	return 0;
//}


//语句和语句分类
/*
空语句
表达式语句
复合语句
函数调用语句
控制语句
*/



//int main()
//{
//	;//空语句
//	3+5;//表达式语句
//	printf("hehe");//调用了printf函数，就是函数调用语句
//	return 0;
//}


//注释
//单行注释
/*多行注释*/

//int main()
//{
//	printf("hehe\n");/*调用printf函数，打印hehe在屏幕上*/
//
//	return 0;
//}


/*
C语言的注释风格：不支持嵌套注释
fun：函数的名字
参数:
x: xxxxxx
y: xxxxxx
返回值的类型：xxxxx
*/


//int fun(int x, int y)
//{
//	return x + y;
//}


// /**/ 这种注释可以插入在行内


//c++风格的注释
//int main()
//{
//	//int a = 10;
//	//写一个代码来完成加法操作
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	return 0;
//}


//注释会被替换成一个空格



//第2章 - C语言数据类型和变量
/*
内置类型：
字符类型
char

整型类型
short
int(字面量默认)
long
long long

浮点型类型
float - 单精度
double（字面量默认）- 双精度
long double - 精度更高

布尔类型 - 使用必须包含头文件stdbool.h
_Bool
取值：true / false

0表示假，非0表示真
#define bool _Bool
#define true 1
#define false 0

*/

#include <stdbool.h>

//int main()
//{
//	//_Bool islike = true;
//	bool islike = false;
//	if (islike)
//		printf("I like C\n");
//	else
//		printf("I don't like C\n");
//
//	return 0;
//}


//数据类型的长度 sizeof()
/*
单位是字节，操作数可以是类型也可以是变量
sizeof  计算的值如果需要打印的话，格式应该使用%zd或者%zu

sizeof的返回值是无符号整数，没有规定具体类型
例如unsigned int、unsigned long、unsigned long long
对应的打印格式printf() %u、%lu、%llu
创建了size_t来表示sizeof的返回值类型

*/

//int main()
//{
//	//int a = 100;
//	//printf("%zd\n", sizeof(a));
//	//printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof(3 + 5));
//	////                     int + int = int
//
//	////sizeof的操作数是表达式的时候，括号可以省略
//	//printf("%zd\n", sizeof a);
//	//printf("%zd\n", sizeof 3 + 5);//9 - 先计算3的长度再加5
//
//	//printf("%zd\n", sizeof(3 + 3.5));//8
//	//                     int + double = double
//
//
//	//各类型的长度
//
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	//sizeof(long) >= sizeof(int)
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	//sizeof(long double) >= sizeof(double)
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}


//sizeof()中的表达式不计算
/*
sizeof在代码进行编译的时候，就根据表达式的结果的类型，推导并确定了类型的长度，
而表达式真要被执行，却要在程序运行期间才会发生，
如果在编译期间已经将sizeof处理掉了，所以在运行期间就不会执行表达式了。
*/

//#include <stdio.h>
//int main()
//{
//    short s = 2;
//    int b = 10;
//
//    //截断(截断高字节)
//    printf("%zd\n", sizeof(s = b   + 1));//2
//    //                         int   int
//    //                   short int
//    //                   short
//    printf("s = %d\n", s);//2
//
//    return 0;
//}


//signed 和 unsigned
/*
用来修饰字符型和整型
signed 有符号的 表示可以有正负号和0
unsigned 无符号的 表示正和0

char
signed char
unsigned char
默认的char是由系统决定的

short 
signed short == short
unsigned short

int 
signed int == int
unsigned int

long
signed long == long
unsigned long

long long
signed long long == long long
unsigned long long

unsigned的好处在于同样长度的内存可以表示的最大整数值，增大了一倍


*/
//int main()
//{
//	//二者相等
//	//signed a;
//	signed int a;
//	return 0;
//}


//数据类型的取值范围
/*
整型定义最大值最小值在limits.h
浮点型定义最大值最小值在float.h

*/


//变量
//类型就是用来创建变量的
/*
变量的命名以数字、字母、下划线组成
不能以数字开头
长度不能超过63个字符
变量名区分大小写的
变量名不能使用关键字

*/
//int main()
//{
//	int _2b;//?
//	int char;//err
//	return 0;
//}


//int main()
//{
//	int age1;//创建变量
//	int age = 10;//初始化
//  变量不能重定义
//	float score = 85.5f;
//	double num = 123.45;
//	char ch = 'w';
//
//	return 0;
//}

//变量的分类
/*
全局变量：大括号外
作用域：整个工程

局部变量：大括号内
作用域：所在的局部区域

*/

//int num2 = 200;//全局变量 - 共享单车
//
//int main()
//{
//	{
//		int num1 = 100;//局部变量 - 私家自行车
//		printf("%d\n", num1);
//	}
//	printf("%d\n", num2);
//
//	return 0;
//}


int num1 = 200;//全局变量

int main()
{
	{
		//局部优先：当全局和局部的名字相同时
		int num1 = 100;//局部变量
		printf("%d\n", num1);
	}

	return 0;
}