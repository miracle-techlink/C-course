#include "iostream"
using namespace std;

int main() {
	int i,a,b,c;
    for(i=100;i<1000;i++)
	{
		a=i/100;  //��λ
	    b=i/10%10;  //ʮλ
		c=i%10;    //��λ
		if(a*a*a+b*b*b+c*c*c==i)
			cout<<i<<"��ˮ�ɻ�����"<<"\n";
	}
    system("pause");
    return 0;
}