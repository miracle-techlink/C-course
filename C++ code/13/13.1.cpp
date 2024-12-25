#include <iostream>
#include <cmath> // 用于计算平方根
#include <iostream>
using namespace std;

// 定义点类 Point
class Point {
private:
    double x; // x坐标
    double y; // y坐标

public:
    // 构造函数
    Point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

    // 设置坐标
    void setPoint(double x_val, double y_val) {
        x = x_val;
        y = y_val;
    }

    // 输出坐标
    void display() const {
        cout << "点的坐标为: (" << x << ", " << y << ")" << endl;
    }

    // 计算两点之间的距离
    double distance(const Point& other) const {
        return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};

int main() {
    // 定义两个点对象
    Point p1, p2;

    // 设置点的坐标
    p1.setPoint(3.0, 4.0);
    p2.setPoint(0.0, 0.0);

    // 输出点的坐标
    cout << "第一个";
    p1.display();
    cout << "第二个";
    p2.display();

    // 计算并输出两点之间的距离
    cout << "两点之间的距离为: " << p1.distance(p2) << endl;

	system("pause");
    return 0;
}
