/*随机产生10个30~100(包括30，100)的正整数，求它们的最大值、最小值、平均值，
并显示整个数组的值和结果。*/

#include "iostream"
using namespace std;
int main()
{
//初始化+定义数组
	int a[10],i,max,min;
    float ave;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%71+30;   //rand() 函数会返回一个介于0到RAND_MAX之间的伪随机整数
	}

//显示数组内容
	cout<<"数组a的内容如下:\n";
    for(i=0;i<10;i++)
	{
	cout<<a[i]<<' ';
    cout<<endl;
	}

//计算各个值
	max=min=ave=a[0];
	for(i=0;i<10;i++)
	{
		ave=ave+a[i];
	    if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}

//输出结果
    cout<<"最大值是"<<max;
	cout<<"最小值是"<<min;
	cout<<"平均值是"<<ave/10;
	cout<<endl;

system("pause");
return 0;
}