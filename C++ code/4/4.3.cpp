#include "iostream"
using namespace std;

int main() {
	int i,a,b,c;
    for(i=100;i<1000;i++)
	{
		a=i/100;  //百位
	    b=i/10%10;  //十位
		c=i%10;    //个位
		if(a*a*a+b*b*b+c*c*c==i)
			cout<<i<<"是水仙花数！"<<"\n";
	}
    system("pause");
    return 0;
}