/*�������10��30~100(����30��100)���������������ǵ����ֵ����Сֵ��ƽ��ֵ��
����ʾ���������ֵ�ͽ����*/

#include "iostream"
using namespace std;
int main()
{
//��ʼ��+��������
	int a[10],i,max,min;
    float ave;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%71+30;   //rand() �����᷵��һ������0��RAND_MAX֮���α�������
	}

//��ʾ��������
	cout<<"����a����������:\n";
    for(i=0;i<10;i++)
	{
	cout<<a[i]<<' ';
    cout<<endl;
	}

//�������ֵ
	max=min=ave=a[0];
	for(i=0;i<10;i++)
	{
		ave=ave+a[i];
	    if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}

//������
    cout<<"���ֵ��"<<max;
	cout<<"��Сֵ��"<<min;
	cout<<"ƽ��ֵ��"<<ave/10;
	cout<<endl;

system("pause");
return 0;
}