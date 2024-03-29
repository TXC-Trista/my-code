/*4.8.7. 编写一个程序，将一个double类型的变量设置位1.0/3.0，一个float类型的变量设置位1.0/3.0。
分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
int main(void)
{
	double d_num = 1.0 / 3.0;
	float f_num = 1.0 / 3.0;

	printf("%.6f %.12f %.16f\n", d_num, d_num, d_num);
	printf("%.6f %.12f %.16f\n", f_num, f_num, f_num);
	

	printf("float的最少有效数字位数是：%d\n", FLT_DIG);
	printf("double的最少有效数字位数是：%d\n", DBL_DIG);

	return 0;
}