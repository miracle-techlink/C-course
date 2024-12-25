#include <iostream>
#include <algorithm>  // 用于 sort 函数
using namespace std;

// （2）通过引用参数返回优秀人数与不及格人数
void fun2(int s[], int n, int &x, int &y) {
    x = 0;  // 优秀人数初始化为0
    y = 0;  // 不及格人数初始化为0
    
    // 排序，按照从高到低
    sort(s, s + n, greater<int>());
    
    // 统计优秀与不及格的人数
    for (int i = 0; i < n; i++) {
        if (s[i] >= 90) {
            x++;  // 优秀
        }
        if (s[i] < 60) {
            y++;  // 不及格
        }
    }
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

    // 方法2：使用引用参数来获取统计数据
    int excellent2, fail2;
    fun2(s, n, excellent2, fail2);
    cout << "优秀人数 = " << excellent2 << ", 不及格人数 = " << fail2 << endl;

    delete[] s;  // 释放动态分配的内存

    system("pause");
    return 0;
}
