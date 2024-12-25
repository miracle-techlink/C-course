#include <iostream>
using namespace std;
int main()
{
  int i = 1, s = 3;

  do {
    s += i++;       // s加上i的值，然后i增加1
    if (s % 7 == 0)  // 如果s是7的倍数
        continue;    // 跳过else块，直接进入下一次循环
    else
        ++i;         // 否则，i增加1
}    while (s < 15);    // 当s小于15时，继续循环
     cout<<i<<endl;
	 system("pause");
	 return 0;
}






