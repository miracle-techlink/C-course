#include "iostream"    
using namespace std;
#define PI 3.14

int main()  
{  float x, y,s;  //������ͺ�����
   s = PI * (4 * 4 - 2 * 2); 
   cout<<"�������������:";    
   cin>>x>>y; 
   if(x*x+y*y<=16&&x*x+y*y>=4)    //�����в�����^,�ߴη���pow(x,2)
     cout<<"��Ӱ�������Ϊ"<<s;    
   else
	 cout<<0<<endl;
   system("pause");   
   return 0;  
}