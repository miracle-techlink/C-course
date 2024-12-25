#include <iostream>
#include <cstring>  // 用于strlen函数
using namespace std;

// 判断字符串是否为回文
int huiwen(char s[]) {
    int len = strlen(s);  // 获取字符串的长度
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {  // 如果对应位置的字符不相同
            return 0;  // 不是回文，返回0
        }
    }
    return 1;  // 是回文，返回1
}

int main() {
    char str[100];  // 定义一个字符串数组
    cout << "请输入一个字符串: ";
    cin >> str;  // 输入字符串

    // 调用 huiwen 函数判断字符串是否为回文
    if (huiwen(str) == 1) {
        cout << "该字符串是回文。" << endl;
    } else {
        cout << "该字符串不是回文。" << endl;
    }
	system("pause");
    return 0;
}
