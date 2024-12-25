#include <iostream>
using namespace std;

// 定义字符串类 Mystring
class Mystring {
private:
    char* str;     // 字符串存储
    int length;    // 字符串长度

public:
    // 构造函数：初始化空字符串
    Mystring() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }

    // 带参构造函数：从输入字符串初始化
    Mystring(const char* input) {
        length = 0;
        while (input[length] != '\0') { // 手动计算字符串长度
            length++;
        }

        str = new char[length + 1]; // 分配内存
        for (int i = 0; i < length; i++) {
            str[i] = input[i]; // 复制字符串
        }
        str[length] = '\0'; // 添加结束符
    }

    // 析构函数：释放内存
    ~Mystring() {
        delete[] str;
    }

    // 计算字符串长度
    int getLength() const {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    // 连接两个字符串
    Mystring concat(const Mystring& other) const {
        int newLength = length + other.length; // 新字符串的长度
        char* newStr = new char[newLength + 1]; // 分配新空间

        // 复制第一个字符串
        for (int i = 0; i < length; i++) {
            newStr[i] = str[i];
        }

        // 复制第二个字符串
        for (int i = 0; i < other.length; i++) {
            newStr[length + i] = other.str[i];
        }
        newStr[newLength] = '\0'; // 添加结束符

        return Mystring(newStr);
    }

    // 输入字符串
    void input() {
        char temp[1000]; // 临时缓冲区
        cout << "请输入字符串: ";
        cin >> temp;

        // 重新分配空间并存储输入字符串
        length = 0;
        while (temp[length] != '\0') {
            length++;
        }

        delete[] str; // 释放旧空间
        str = new char[length + 1];
        for (int i = 0; i < length; i++) {
            str[i] = temp[i];
        }
        str[length] = '\0';
    }

    // 输出字符串
    void output() const {
        cout << str << endl;
    }
};

int main() {
    // 创建 Mystring 对象
    Mystring str1, str2, str3;

    // 输入第一个字符串
    cout << "输入第一个字符串: ";
    str1.input();

    // 输入第二个字符串
    cout << "输入第二个字符串: ";
    str2.input();

    // 输出字符串内容
    cout << "第一个字符串为: ";
    str1.output();
    cout << "第二个字符串为: ";
    str2.output();

    // 计算并输出字符串长度
    cout << "第一个字符串长度: " << str1.getLength() << endl;
    cout << "第二个字符串长度: " << str2.getLength() << endl;

    // 连接两个字符串
    str3 = str1.concat(str2);
    cout << "连接后的字符串为: ";
    str3.output();

	system("pause");
    return 0;
}
