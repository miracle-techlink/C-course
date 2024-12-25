#include "iostream"    
using namespace std;

int main()
{   int a,b,c,S;  //分别表示长宽高和面积
    cout<<"请分别输入长，宽，高：";
	cin>>a>>b>>c;
	S = (a+b)*c/2;
	cout<<"面积大小为"<<S<<endl;
	system("pause");    
   return 0;  
}  


