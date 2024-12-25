/*随机产生10个数，输入1~10之间的正整数m，使数组元素右移m位，移出的元素再从左移入。
如，假设原来的数组元素依次为：1  2  3  4  5  6  7  8  9  10，假设m为2，则右移2位后的数组元素依次为：
9  10  1  2  3  4  5  6  7  8*/

#include "iostream"
using namespace std;
int main()
{

//随机产生10个数与输入m
	int a[10],i,m;
	cout<<"数组为:"<<"\n";
	for(i=0;i<10;i++)
	{
		a[i]=rand()%11;
		cout<<a[i]<<endl;
	}
	cout<<"请输入位移量"<<endl;
	cin>>m;

//对数组进行平移
	int j,t;
    for(j=0;j<m;j++)  //平移次数
    {  
	   t=a[9];        //t赋值最后一个
       for(i=8;i>=0;i--)        
	   a[i+1]=a[i];     //从倒数第二个开始开始每个右移
        a[0]=t;         //第一个赋值最后一个
    }

//打印数组
	for(i=0;i<10;i++)
	   cout<<a[i]<<'\n';
	cout<<"输出完毕!"<<endl;

system("pause");
return 0;
}