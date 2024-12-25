#include "iostream"
using namespace std;

int main() {
    char s[100], t[100];  // 定义字符串数组 s 和 t
    char *ps = s, *pt = t;  // 字符指针，分别指向 s 和 t
    int n;

    // 输入字符串 s 和要复制的起始位置 n
    cout << "请输入字符串s: ";
    cin.getline(s, 100);  // 输入字符串 s
    cout << "请输入起始位置n(从1开始): ";
    cin >> n;

    // 将指针 ps 移动到第 n 个字符 (注意数组从 0 开始)
    ps = s + (n - 1);  

    // 从第 n 个字符开始复制到字符串 t
    while (*ps != '\0') {  // 遍历直到字符串结尾
        *pt = *ps;  // 将当前字符复制到 t 中
        ps++;  // 移动到下一个字符
        pt++;  // 移动到 t 中的下一个位置
    }
    *pt = '\0';  // 给字符串 t 加上结束符

    // 输出复制后的字符串 t
    cout << "复制到字符串t的内容: " << t << endl;

    system("pause");
    return 0;
}