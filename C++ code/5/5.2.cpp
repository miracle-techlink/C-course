/*�������20��ѧ���ļ�����γ̵ĳɼ���0��100�������մӴ�С��˳�����򣬷ֱ���ʾ����ǰ�������Ľ����*/

#include "iostream"
using namespace std;
int main()
{
//��ʼ��+��������
        int a[20],i,j,t;
        for(i=0;i<20;i++)
        {
                a[i]=rand()%101;   //rand() �����᷵��һ������0��RAND_MAX֮���α�������
        }

/*		
//��ʾ��������
        cout<<"����a����������:\n";
        for(i=0;i<20;i++)
        {
        cout<<a[i]<<' ';
        cout<<endl;
        }
*/

//ð������
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

//������
      for(i=0;i<20;i++)
		  cout<<a[i]<<'\t';
	  cout<<endl;

system("pause");
return 0;
}

