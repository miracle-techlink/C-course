#include "iostream"    
using namespace std;

int main()  
{  int x,y;
   cout<<"�������������:"; //���������ʾ��Ϣ
   cin>>x>>y; //�Ӽ�������������
   int t;   t=x;//������t��ʼ��Ϊx��ֵ
   x=y;//��y��ֵ����x   
   y=t;//��t��ֵ����ԭ����x������y   
   cout<<"x="<<x<<",y ="<<y<<endl; //���������Ľ��   
   system("pause");   
   return 0;  
}