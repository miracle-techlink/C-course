#include "iostream"
using namespace std;

int main() {
    char str[100];  // 定义一个字符数组存储输入的字符串
    char *p = str;  // 指向字符串的指针

    cout << "请输入一个字符串: ";
    cin.getline(str, 100);  // 获取输入的字符串

    // 遍历字符串，进行大小写转换
    while (*p != '\0') {  // 当指针没有指向字符串的结尾'\0'时
        // 判断字符是否为大写字母
        if (*p >= 'A' && *p <= 'Z') {
            *p = *p + 32;  // 将大写字母转换为小写
        }
        // 判断字符是否为小写字母
        else if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;  // 将小写字母转换为大写
        }
        p++;  // 移动指针到下一个字符
    }

    // 输出转换后的字符串
    cout << "转换后的字符串: " << str << endl;

    system("pause");
    return 0;
}
