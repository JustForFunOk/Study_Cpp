//////////////作用域运算符::////////////////
//功能：指定所需要的作用域
//注意：1、::不能访问函数中的局部变量
//      2、内存分为：栈区(stack)、堆区(heap)、全局区(静态区)(static)、文字常量区、程序代码区
//////////////示例程序/////////////////
#include <iostream>//标准输入输出流，需要引用std的空间名
using namespace std;//标准C++库的所有组件都是在std的名字空间中声明和定义的
//全局变量
int a=888;//储存在全局区
///////////////主函数//////////////////
int main()//只能是int main()
{
	int a=666;//储存在栈区
	cout<<"a="<<a<<endl;//此函数的局部变量有更高的优先权
	cout<<"::a="<<::a<<endl;//::a表示全局作用域中的变量a
	return 0; 
}