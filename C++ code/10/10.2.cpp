#include <iostream>
using namespace std;

// 定义日期结构体
struct Date {
    int year;  // 年
    int month; // 月
    int day;   // 日
};

// 函数：计算某日期是本年度的第几天
int dayOfYear(Date d) {
    // 每个月的天数（假设非闰年）
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int dayOfYear = 0;

    // 累加当前月份之前的所有月份的天数
    for (int i = 0; i < d.month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }

    // 加上当前月的天数
    dayOfYear += d.day;

    return dayOfYear;
}

int main() {
    Date d;

    // 输入日期
    cout << "Enter year: ";
    cin >> d.year;
    cout << "Enter month: ";
    cin >> d.month;
    cout << "Enter day: ";
    cin >> d.day;

    // 计算并输出结果
    int result = dayOfYear(d);
    cout << "The date is the " << result << "th day of the year." << endl;

	system("pause");
    return 0;
}
