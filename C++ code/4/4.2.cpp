#include "iostream"
using namespace std;

int main() {
    int x;
	cout<<"������һ��������:"<<endl;
	cin>>x;
	if (x<=0)
	   cout<<"����Ҫ����һ����������"<<endl;
	else
	   while(x!=0){
		  cout<<x%10;
	      x=x/10;
	   }
    system("pause");
    return 0;
}