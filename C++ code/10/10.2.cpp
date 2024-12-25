#include <iostream>
using namespace std;

// �������ڽṹ��
struct Date {
    int year;  // ��
    int month; // ��
    int day;   // ��
};

// ����������ĳ�����Ǳ���ȵĵڼ���
int dayOfYear(Date d) {
    // ÿ���µ���������������꣩
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int dayOfYear = 0;

    // �ۼӵ�ǰ�·�֮ǰ�������·ݵ�����
    for (int i = 0; i < d.month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }

    // ���ϵ�ǰ�µ�����
    dayOfYear += d.day;

    return dayOfYear;
}

int main() {
    Date d;

    // ��������
    cout << "Enter year: ";
    cin >> d.year;
    cout << "Enter month: ";
    cin >> d.month;
    cout << "Enter day: ";
    cin >> d.day;

    // ���㲢������
    int result = dayOfYear(d);
    cout << "The date is the " << result << "th day of the year." << endl;

	system("pause");
    return 0;
}
