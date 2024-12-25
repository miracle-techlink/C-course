#include <iostream>
using namespace std;

// 判断是否为素数
bool isprime(int m) {
    if (m <= 1) return false; // 1及以下的数字不是素数
    for (int i = 2; i * i <= m; i++) { // 只检查到sqrt(m)即可
        if (m % i == 0) {
            return false; // 如果能被i整除，则m不是素数
        }
    }
    return true; // 否则，m是素数
}

int main() {
    int count = 0; // 计数器，用于输出10对孪生素数
    int num = 2;   // 从2开始判断素数
    while (count < 10) {
        if (isprime(num) && isprime(num + 2)) {  // 判断num和num+2是否是孪生素数
            cout << "<" << num << "," << num + 2 << ">" << endl;
            count++;  // 输出一对后，计数器加1
        }
        num++;  // 继续检查下一个数字
    }

	system("pause");
    return 0;
}
