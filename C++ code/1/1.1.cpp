#include "iostream"    
using namespace std;

int main()  
{  int x,y;
   cout<<"请输出两个整数:"; //添加输入提示信息
   cin>>x>>y; //从键盘输入两个数
   int t;   t=x;//将变量t初始化为x的值
   x=y;//将y的值赋给x   
   y=t;//将t的值（即原来的x）赋给y   
   cout<<"x="<<x<<",y ="<<y<<endl; //输出交换后的结果   
   system("pause");   
   return 0;  
}