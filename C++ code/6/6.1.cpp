#include "iostream"
#include "iomanip"  // 用于setw
using namespace std;

#include "iostream"
#include "iomanip"  // 用于setw
using namespace std;

int main() {
    int n;
    cout << "请输入一个小于10的正整数n: ";
    cin >> n;

    // 定义二维数组，用于存储杨辉三角形的数值
    int a[10][10] = {0}; 

    // 填充杨辉三角形的数组
    for (int i = 0; i < n; i++) {
        a[i][0] = 1; // 每行第一个数为1
        a[i][i] = 1; // 每行的主对角线上的数为1
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j]; // 其它位置的数值
        }
    }

    // 输出杨辉三角形
    for (int i = 0; i < n; i++) {
        cout << setw((n - i) * 2) << ""; // 设置每行前的空格，用于居中对齐
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << a[i][j]; // 固定宽度输出每个元素，确保对齐
        }
        cout << endl; // 输出完一行后换行
    }

    system("pause");
    return 0;
}
