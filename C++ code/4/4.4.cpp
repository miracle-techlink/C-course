#include <iostream>
#include "time.h"
using namespace std;

int main()
{int a,n,i,k;
 double s=0,temp=0;
 srand(time(NULL));  //用于初始化随机数生成器
 a=rand()%9+1;   //用rand()%9获取0-8的随机数，然后+1
 n=rand()%6+4;
 for(i=1;i<=n;i++)
	{temp=temp*10+a;
	 s=s+temp;
	}
cout<<"a="<<a<<","<<"b="<<n<<"时，"<<"s="<<s<<endl;
system("pause");
return 0;
}