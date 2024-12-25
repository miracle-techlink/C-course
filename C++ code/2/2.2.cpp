#include <iostream>    
#define PI 3.14
using namespace std;

int main()  
{  int a,b,c,min;  //纵坐标和横坐标
   cout<<"请依次输入三个数:";   
   cin>>a>>b>>c;
   if (a<b)
        min=a;
   else
        min=b;
   if (min<c)
        min=min;
   else
        min=c;
   cout<<"最小值为"<<min<<endl;
   system("pause");   
   return 0;  
}