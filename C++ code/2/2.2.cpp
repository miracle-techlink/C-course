#include <iostream>    
#define PI 3.14
using namespace std;

int main()  
{  int a,b,c,min;  //������ͺ�����
   cout<<"����������������:";   
   cin>>a>>b>>c;
   if (a<b)
        min=a;
   else
        min=b;
   if (min<c)
        min=min;
   else
        min=c;
   cout<<"��СֵΪ"<<min<<endl;
   system("pause");   
   return 0;  
}