#include <iostream>
#include "time.h"
using namespace std;

int main()
{int a,n,i,k;
 double s=0,temp=0;
 srand(time(NULL));  //���ڳ�ʼ�������������
 a=rand()%9+1;   //��rand()%9��ȡ0-8���������Ȼ��+1
 n=rand()%6+4;
 for(i=1;i<=n;i++)
	{temp=temp*10+a;
	 s=s+temp;
	}
cout<<"a="<<a<<","<<"b="<<n<<"ʱ��"<<"s="<<s<<endl;
system("pause");
return 0;
}