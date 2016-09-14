//////////////变量的定义////////////////
//功能：和C的不同之处
//注意：1、C++中新增了类数据(即class)类型
//      2、C语言中，局部变量说明必须置于可执行代码之前 
//         C++允许局部变量声明和可执行代码混编 ,允许变量定义出现在程序任何位置
//      3、C++允许直接使用结构体名定义变量,同样的联合名，枚举名也行
//////////////示例程序/////////////////
#include <iostream>//标准输入输出流，需要引用std
using namespace std;//标准C++库的所有组件都是在std的名字空间中声明和定义的
//////////////主函数//////////////////
int main()//只能是int main()
{
	struct student
	{
		int score;
	};
	student SJ;//C中为struct student SJ;C++允许直接使用结构体名定义变量
	cout<<"SJ's score is:";
	cin>>SJ.score;
	int LuckyNumber=666;//C++允许变量定义出现在程序任何位置
	if (SJ.score==100)
	{
		cout<<"SJ "<<LuckyNumber<<endl;
	}
	return 0; // 新标准主函数的返回值这条语句可以省略  
}