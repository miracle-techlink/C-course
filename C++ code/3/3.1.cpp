#include "iostream"
using namespace std;
int main()
{
  int x,y,r1,r2;
  cin>>x>>y;
  if(x==0||y==0){
	  cout<<"ÊäÈë´íÎó"<<endl;
	  system("pause");
	  return 1;
  }
  else
  {
    if(x>y)
	 {r1=x/y;r2=x%y;}
    else
	 {r1=y/x;r2=y%x;}
  }
  cout<<"ÉÌ="<<r1<<"ÓàÊý="<<r2<<endl;
  system("pause");
  return 0;
}