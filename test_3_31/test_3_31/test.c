#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
变量创建的本质是
向内存中申请一块空间


内存：

栈区：局部变量/函数参数
堆区：动态内存管理malloc/calloc/realloc/free
静态区：全局变量/静态变量

*/
//int num1 = 100;
//
//int main()
//{
//
//	int num2 = 200;
//	return 0;
//}


//算术操作符
/*
+、-、*、/、%
*/

//+
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = num1 + num2;
//
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 + num2;
//
//	printf("%d\n", r);
//
//	return 0;
//}

//-
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 - num2;
//
//	printf("%d\n", r);
//
//	return 0;
//}

//*
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 * num2;
//
//	printf("%d\n", r);
//
//	return 0;
//}

// /
/*
除号两端如果都是整数，那么执行的是整数除法，得到
的结果也是整数
得到是商

要执行小数除法，除号的两端要至少有一个小数

*/
//int main()
//{
//	int r = 6 / 4;//1
//
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	double r = 6.0 / 4.0;//1.5
//
//	printf("%lf\n", r);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}

//% - 取模/取余
/*
取模运算符只能操作整数类型

负数求模的规则是，结果的正负号是由第一个运算符的正负号来决定的

*/
//int main()
//{
//	int r = 6 % 4;//2
//
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 11 % -5);//1
//	printf("%d\n", -11 % -5);//-1
//	printf("%d\n", -11 % 5);//1
//
//	return 0;
//}

//赋值操作符=和复合赋值
//int main()
//{
//	int n = 0;//初始化
//	n = 10;//赋值
//
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//连续赋值，从右向左依次赋值的
//
//	//等价 b = a+3; c = b;便于调试
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//复合赋值
//int main()
//{
//	int a = 10;
//	//a = a + 3;
//	a += 3;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a -= 3;
//	//a *= 3;//a = a*3;
//	//a /= 3;//a = a/3;
//	a %= 3;//a = a % 3;
//	printf("%d\n", a);
//
//	return 0;
//}

//为什么变量要初始化呢？
//一个局部变量不初始化的时候，他的值是随机值
//一个全局变量不初始化时，他的值会默认初始化为0

//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}

//单目操作符：++、--、+、-
//++、--

//完成-1的操作
//int main()
//{
//	int a = 10;
//	//a = a - 1;
//	//a -= 1;
//	//a--;
//	--a;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a--;//后置--：先使用，再-1
//	//b=a, a=a-1
//	int b = --a;//前置--：先-1，再使用
//	//a=a-1, b=a
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//a++;
//	//++a;
//	//int b = a++;//后置++：先使用，后+1
//	//b=a, a=a+1；
//	int b = ++a;//前置++：先+1，后使用
//	//a=a+1, b=a
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//  //这是一个错误的示范
//	int r = (a++) + (a++) + (a++);
//	printf("%d\n", r);
//
//	return 0;
//}

//+、-正负
/*
正号对正负值没有影响

*/
//int main()
//{
//	int a = 10;
//	int b = -10;
//	printf("%d\n", -a);
//	printf("%d\n", -b);
//
//	return 0;
//}


//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	return 0;
//}


//printf()函数
/*
将参数文本输出到屏幕上
使用要包含头文件stdio.h

*/

//#include <stdio.h>
//int main()
//{
//    //printf("Hello\nWorld\n");
//    printf("Hello\n");
//    printf("World\n");
//    //getchar();
//    return 0;
//}

//int main()
//{
//	int ch = getchar();//读取一个字符
//	//printf("%c\n", ch);
//	putchar(ch);//把ch打印在屏幕上
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//占位符
/*
占位符的第一个字符一律为%，第二个字符表示占位符的类型

*/
//int main()
//{
//	printf("there are %d apples\n", 3);
//	return 0;
//}

//int main()
//{
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "lisi");
//
//	return 0;
//}


/*
有n个占位符，就有n+1个参数，若参数个数少于占位符个数，
那么输出的时候是内存中的任意值

*/
//int main()
//{
//	printf("zhangsan says it is 10 o'clock\n");
//	printf("%s says it is %d o'clock\n", "zhangsan", 10);
//	printf("%s says it is %d o'clock\n", "lisi", 20);
//
//
//	return 0;
//}

//常用的占位符
/*
%c char字符类型
%d 十进制的有符号int
%u 十进制无符号int
%hd 十进制short
%hu 十进制无符号short
%ld 十进制long
%lu 十进制无符号long
%lld 十进制long long
%Lf long double
%o 八进制数
%x 十六进制数
%p 打印指针（地址）
%s 打印字符串
%zd 打印size_t
%% 打印一个%
*/

//int main()
//{
//	//输出百分之多少
//	printf("%d%%\n", 100);
//	return 0;
//}

//int main()
//{
//	int num1 = -10;
//	printf("%d\n", num1);
//
//	unsigned int num2 = -20;
//	printf("%u\n", num2);
//
//	return 0;
//}



//输出格式

//1.限定宽度 - 限定占位符的最小宽度

//限定整数
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);//  123 - 默认右对齐前面补上空格
//	printf("%05d\n", 123);//右对齐时在最小宽度前加上0就是用0补齐
//	printf("%5d\n", 1234567);//超过最小宽度就是多少位就是多少位
//	//左对齐在最小宽度前加上-
//	printf("%-5d", 123);//123  hehe
//	printf("hehe\n");
//
//
//	return 0;
//}

//限定小数
//int main()
//{
//	//printf在输出小数的时候，默认小数点后面打印6位
//	printf("%f\n", 123.45);
//	printf("%12f\n", 123.45);//包含小数点
//
//	return 0;
//}

//2.总是显示正负号
//int main()
//{
//	//printf("%d\n",12);
//	//printf("%d\n", -12);
//
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);
//
//	return 0;
//}

//3.限定小数位数
/*
会发生四舍五入

*/
//int main()
//{
//	printf("%f\n", 123.4567);
//	printf("%.3f\n", 123.4561);
//
//	return 0;
//}

//限定最小宽度和小数位数结合
/*
最小宽度和小数位数可以用*替代
*/
//int main()
//{
//	printf("%10.2f\n",123.4567);
//
//	printf("%*.*f\n", 10, 2, 123.4567);
//
//	return 0;
//}


//4.输出部分字符串
/*
%s占位符用来输出字符串，默认是全部输出。
如果只想输出开头的部分，可以用%.[m]s指定输出的长度，
其中[m]代表一个数字，表示所要输出的长度。

*/
//int main()
//{
//	printf("%s\n", "hello world");
//	printf("%20s\n", "hello world");//限定最小宽度
//
//	printf("%.8s\n", "hello world");
//
//	return 0;
//}


//scanf
/*
scanf用于从键盘上读取数据
第一个参数是格式化字符串（里面放置占位符）与printf基本一致
scanf必须提前知道用户输入的数据类型才能去解读数据
其余参数就是存放用户输入的变量，格式字符串有多少占位符
就有多少个变量


注意：变量前面必须加上&运算符（指针变量除外），因为
scanf()传递的不是值，而是地址，即是将变量的地址指向用户输入的值，
将值存入到地址所在的内存空间

*/
//int main()
//{
//	int score = 0;
//	//给score这个变量中输入一个值
//	printf("请输入成绩:");
//	scanf("%d", &score);//& -取地址操作符
//
//	//输出到屏幕上
//	printf("成绩是: %d\n", score);
//	return 0;
//}


/*
scanf()处理数值占位符时，会自动过滤空白字符，
包括空格、制表符、换行符等。

*/
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0;
//	float y = 0.0;
//
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//
//	printf("i = %d\n", i);
//	printf("j = %d\n", j);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}


//scanf的输入原理
/*
用户输入的数据先放入缓存，等按下回车后，按照
占位符开始进行解读，解读时会从上一次解读遗留的
第一个字符开始，直到读完缓存，或者遇到第一个不符合条件的字符为止
*/


#include <stdio.h>

//int main()
//{
//    int x = 0;
//    float y = 0.0;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    printf("%f\n", y);
//    return 0;
//}

//浮点数在内存中有可能不能精确保存
//0.449999994880*10^12


//scanf的返回值
/*
scanf是有返回值的
scanf()的返回值是一个整数,表示成功读取的变量个数。
如果没有读取任何项，或者匹配失败，则返回0。
如果在成功读取任何数据之前，发生了读取错误或者遇到读取到文件结尾，则返回常量EOF(-1)。
EOF - end of file文件结束标志
*/

#include <stdio.h>
int main()
{
    //EOF
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf("%d %d %f", &a, &b, &f);
    if (r == 3)
        printf("a=%d b=%d f=%f\n", a, b, f);
    else
    {
        printf("读取到的数据可能存在问题\n");
        printf("a=%d b=%d f=%f\n", a, b, f);
    }

    printf("r = %d\n", r);
    return 0;
}