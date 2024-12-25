#include "iostream"
#include "string"
using namespace std;

int main() {
    string str = "aaaasdfga"; // 已知的字符串
    char ch = 'a'; // 要删除的字符
    string result = ""; // 用于存储删除后的结果

    // 遍历字符串，删除指定字符
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) { // 如果当前字符不是要删除的字符
            result += str[i]; // 将其添加到结果字符串中
        }
    }

    // 输出删除后的字符串
    cout << "删除后的字符串: " << result << endl;

    system("pause");
    return 0;
}
