/*随机产生20个学生的计算机课程的成绩（0～100），按照从大到小的顺序排序，分别显示排序前和排序后的结果。*/

#include "iostream"
using namespace std;
int main()
{
//初始化+定义数组
        int a[20],i,j,t;
        for(i=0;i<20;i++)
        {
                a[i]=rand()%101;   //rand() 函数会返回一个介于0到RAND_MAX之间的伪随机整数
        }

/*		
//显示数组内容
        cout<<"数组a的内容如下:\n";
        for(i=0;i<20;i++)
        {
        cout<<a[i]<<' ';
        cout<<endl;
        }
*/

//冒泡排序
      for(i=0;i<20;i++)
	  {
		  for(j=i+1;j<20;j++)
		  {
			  if(a[i]<a[j])
			  {
                 t = a[i];
	             a[i]=a[j];
				 a[j]=t;
			  }
		  }
	  }

//输出结果
      for(i=0;i<20;i++)
		  cout<<a[i]<<'\t';
	  cout<<endl;

system("pause");
return 0;
}

