#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 递归函数，计算数组累加和
int sum(int a[], int n) {
    if (n == 0) {
        return 0;  // 递归结束条件，空数组和为0
    } else {
        return a[n - 1] + sum(a, n - 1);  // 递归计算数组从0到n-1的和
    }
}

int main() {
    srand(time(0));  // 设置随机种子
    
    int a[10];  // 定义数组，存储10个随机数

    // 随机生成10个两位数
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 90 + 10;  // 生成10到99之间的随机数
    }

    // 输出随机生成的数组
    cout << "生成的随机数为: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 调用sum函数，计算数组的和
    int result = sum(a, 10);
    
    // 输出累加和
    cout << "数组元素的累加和为: " << result << endl;

    system("pause");
    return 0;
}
