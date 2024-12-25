#include "iostream"    
using namespace std;
#define PI 3.14

int main()  
{  float x, y,s;  //纵坐标和横坐标
   s = PI * (4 * 4 - 2 * 2); 
   cout<<"请输入横纵坐标:";    
   cin>>x>>y; 
   if(x*x+y*y<=16&&x*x+y*y>=4)    //代码中不包含^,高次方是pow(x,2)
     cout<<"阴影部分面积为"<<s;    
   else
	 cout<<0<<endl;
   system("pause");   
   return 0;  
}