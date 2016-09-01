  //Method 1//推荐使用这种方法
#include <iostream>//标准输入输出流，需要引用std
using namespace std;//标准C++库的所有组件都是在std的名字空间中声明和定义的
  //Method 2//没用到名字空间有点偏离C++的做法
//#include <iostream.h>//非标准输入输出流,继承C语言标准库文件，未引入名字空间定义
//cout<<"Hello World"<<endl;//此时可以直接使用cout
  //Method 3//使用C++标准库里的组件时肯定不用这种啊
//#include <iostream>
//std::cout<<"Hello World!"<<std::endl;//这种，每使用一个都要声明std：： 太麻烦
  //Method 4//使用C++标准库里的组件时肯定不用这种啊
//#include <iostream>
//using std::cout;//使用每个成员之前都要先指定修饰的名字空间
//using std::endl;
//cout<<"Hello World!"<<endl;
int main()//只能是int main(),注意void main()和main()这两种都是错的
{
	int a,b;
	cout<<"a+b=?"<<endl<<"Input a and b:";//endl即end of line相当于换行符
	cin >>a>>b;//输入a和b，a和b之间可用回车或空格分离
	cout<<a<<"+"<<b<<"="<<a+b<<endl;//cout后输出内容可为常量、变量、表达式
	cout<<"Hello World!"<<endl;//cout和cin可类比C语言中的printf()和scanf()
//	system("pause");//此处可省略，若只有输出时无此句会导致直接运行.exe时闪退
	return 0; // 新标准主函数的返回值这条语句可以省略  
}