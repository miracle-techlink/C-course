#include "iostream"
#include "string"
using namespace std;

int main() {
    string str;
    cout << "请输入一个字符串: ";
    getline(cin, str);  // 输入一个字符串

    // 双指针法倒序交换字符
    int start = 0;  // 字符串的开始位置
    int end = str.length() - 1;  // 字符串的结束位置

    while (start < end) {
        // 交换字符
        swap(str[start], str[end]);
        start++;  // 开始指针向右移动
        end--;    // 结束指针向左移动
    }

    // 输出倒序后的字符串
    cout << "倒序后的字符串: " << str << endl;

    system("pause");
    return 0;
}
