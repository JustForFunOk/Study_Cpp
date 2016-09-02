//////////////namespace////////////////
//功能：解决程序合并时可能会出现的名字冲突
//注意：1、声明块（花括号括起来的部分）中可包括类、变量、函数
//      2、名字空间可分层嵌套，同样有分层屏蔽作用
//      3、using namespace后只能加空间名，不能加类名或变量名
//////////////示例程序/////////////////
#include <iostream>//标准输入输出流，需要引用std的空间名
using namespace std;//标准C++库的所有组件都是在std的名字空间中声明和定义的
//名字空间的定义
namespace SJ
{
	//类，此处缺示例
	int a,b;//变量，可同时赋初值
	namespace SJ_Model//SJ_Model嵌套在SJ内
	{
		Add(int x1,int x2)//函数
		{
			return x1+x2;
		}
	}
}
///////////////主函数//////////////////
int main()//只能是int main()
{
	using SJ::a;//注意此处不加namespace，namespace后只加空间名
	using SJ::b;//表示main函数中的b都相当于SJ::b
	cout<<"a+b=?"<<endl<<"Input a and b:";//endl即换行符
	cin >>a>>b;//输入a和b，a和b之间可用回车或空格分离
	cout<<a<<"+"<<b<<"="<<SJ::SJ_Model::Add(a,b)<<endl;//若已调用using namespace SJ;则可直接使用SJ_Model::Add(a,b)调用
	return 0; // 新标准主函数的返回值这条语句可以省略  
}