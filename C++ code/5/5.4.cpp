/*
按由大到小的顺序输入10个int类型的数据将其存放在一个一维数组中，再输入一个整数到变量x，
用二分法查找x是否是数组中的元素，若是，输出其在数组中的位置，否则输出不在数组中的提示。
*/

‎
#define N 10
#include "iostream"
using namespace std;

int main()
{

//输入数组和需要查找的数
	int a[N],i;   
	cout << "请按递减顺序输入10个整数" << endl;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	cout << "请输入要查找的整数" << endl;

	system("pause");
	return 0;

//二分法
	int x,mid,bot,top;   //定义指针
	bot=0;
	top=N-1;
	mid=(bot+top)/2;
	while(bot<=top)
	{
		if(a[i]==a[mid])
			break;
		else if(x > a[mid])
			top=mid - 1;
		else
			bot = mid + 1;
	}
	if (bot > top)
		cout << x << "不在数组中" << endl;
	else
		cout << x << "是数组中的第" <<mid+1<<"个元素"<< endl;

	
}