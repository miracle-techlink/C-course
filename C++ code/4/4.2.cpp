#include "iostream"
using namespace std;

int main() {
    int x;
	cout<<"请输入一个正整数:"<<endl;
	cin>>x;
	if (x<=0)
	   cout<<"你需要输入一个正整数！"<<endl;
	else
	   while(x!=0){
		  cout<<x%10;
	      x=x/10;
	   }
    system("pause");
    return 0;
}