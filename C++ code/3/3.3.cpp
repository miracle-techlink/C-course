#include <iostream>
using namespace std;
int main()
{
  int i = 1, s = 3;

  do {
    s += i++;       // s����i��ֵ��Ȼ��i����1
    if (s % 7 == 0)  // ���s��7�ı���
        continue;    // ����else�飬ֱ�ӽ�����һ��ѭ��
    else
        ++i;         // ����i����1
}    while (s < 15);    // ��sС��15ʱ������ѭ��
     cout<<i<<endl;
	 system("pause");
	 return 0;
}






