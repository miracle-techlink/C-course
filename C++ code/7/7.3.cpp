#include "iostream"
#include "ctime"   // 用于随机数生成
using namespace std;

int main() {
    int arr[10];           // 定义一个包含10个整数的数组
    int *p = arr;          // 定义指针指向数组
    int *pMax = arr, *pMin = arr;  // 定义指针用于指向最大和最小值

    // 随机数种子
    srand(time(0));

    // 随机生成数组的10个元素
    cout << "原数组内容: ";
    for (int i = 0; i < 10; i++) {
        *(p + i) = rand() % 101;  // 生成 0~100 的随机数
        cout << *(p + i) << " ";
    }
    cout << endl;

    // 找到最大和最小值的指针
    for (int i = 1; i < 10; i++) {
        if (*(p + i) > *pMax) {  // 找最大值
            pMax = p + i;
        }
        if (*(p + i) < *pMin) {  // 找最小值
            pMin = p + i;
        }
    }

    // 交换最大值和最小值
    int temp = *pMax;
    *pMax = *pMin;
    *pMin = temp;

    // 输出交换后的数组内容
    cout << "交换后数组内容: ";
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
