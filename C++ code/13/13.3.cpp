#include <iostream>
using namespace std;

// 定义分数类 Fraction
class Fraction {
private:
    int fz; // 分子
    int fm; // 分母

    // 求最大公约数的辅助函数（使用欧几里得算法）
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    // 构造函数：初始化分子和分母
    Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0) { // 分母不能为0
            cout << "分母不能为0，自动设置为1" << endl;
            denominator = 1;
        }
        fz = numerator;
        fm = denominator;
        Reduction(); // 在构造时进行约分
    }

    // 成员函数：输出分数
    void print() const {
        cout << fz << "/" << fm << endl;
    }

    // 成员函数：约分分数
    void Reduction() {
        int divisor = gcd(fz, fm); // 求分子和分母的最大公约数
        fz /= divisor;
        fm /= divisor;

        // 处理分母为负数的情况（规范化分数形式）
        if (fm < 0) {
            fz = -fz;
            fm = -fm;
        }
    }
};

int main() {
    int numerator, denominator;

    // 输入分子和分母
    cout << "请输入分数的分子: ";
    cin >> numerator;
    cout << "请输入分数的分母: ";
    cin >> denominator;

    // 创建 Fraction 对象并进行测试
    Fraction frac(numerator, denominator);

    cout << "约分后的分数为: ";
    frac.print();

	system("pause");
    return 0;
}
