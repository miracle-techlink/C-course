#include <iostream>
#include <algorithm>  // 用于 sort 函数
using namespace std;

// （1）通过返回值返回优秀人数，指针返回不及格人数
int fun1(int s[], int n, int* x) {
    int excellent = 0, fail = 0;
    
    // 排序，按照从高到低
    sort(s, s + n, greater<int>());
    
    // 统计优秀与不及格的人数
    for (int i = 0; i < n; i++) {
        if (s[i] >= 90) {
            excellent++;  // 优秀
        }
        if (s[i] < 60) {
            fail++;  // 不及格
        }
    }

    *x = fail;  // 通过指针返回不及格人数
    return excellent;  // 返回优秀人数
}

int main() {
    int n;
    cout << "请输入学生人数: ";
    cin >> n;

    int* s = new int[n];  // 动态分配一个数组来存储学生成绩
    cout << "请输入每个学生的成绩: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // 方法1：使用返回值和指针来获取统计数据
    int fail1;
    int excellent1 = fun1(s, n, &fail1);
    cout << "优秀人数 = " << excellent1 << ", 不及格人数 = " << fail1 << endl;

    delete[] s;  // 释放动态分配的内存

    system("pause");
    return 0;
}

