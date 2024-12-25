#include <iostream>
#include <cmath> // ���ڼ���ƽ����
#include <iostream>
using namespace std;

// ������� Point
class Point {
private:
    double x; // x����
    double y; // y����

public:
    // ���캯��
    Point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

    // ��������
    void setPoint(double x_val, double y_val) {
        x = x_val;
        y = y_val;
    }

    // �������
    void display() const {
        cout << "�������Ϊ: (" << x << ", " << y << ")" << endl;
    }

    // ��������֮��ľ���
    double distance(const Point& other) const {
        return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};

int main() {
    // �������������
    Point p1, p2;

    // ���õ������
    p1.setPoint(3.0, 4.0);
    p2.setPoint(0.0, 0.0);

    // ����������
    cout << "��һ��";
    p1.display();
    cout << "�ڶ���";
    p2.display();

    // ���㲢�������֮��ľ���
    cout << "����֮��ľ���Ϊ: " << p1.distance(p2) << endl;

	system("pause");
    return 0;
}
