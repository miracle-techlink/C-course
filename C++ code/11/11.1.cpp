#include <iostream>
#include <cstring>
using namespace std;

// 定义职工信息结构体
struct staff {
    char num[6];      // 职工工号
    char name[20];    // 职工姓名
    double wage;      // 职工工资
    staff *next;      // 指向下一个结点的指针
};

// 删除链表中第n个结点
void deln(staff *&head, int n) {
    if (head == nullptr || n <= 0) {
        cout << "Invalid position." << endl;
        return;
    }

    staff *temp = head;

    // 如果删除的是第一个结点
    if (n == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    // 找到第n-1个结点
    for (int i = 1; temp != nullptr && i < n - 1; i++) {
        temp = temp->next;
    }

    // 如果第n个结点不存在
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position exceeds the list length." << endl;
        return;
    }

    // 删除第n个结点
    staff *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

// 输出职工信息
void printList(staff *head) {
    staff *temp = head;
    while (temp != nullptr) {
        cout << "职工工号: " << temp->num << ", ";
        cout << "职工姓名: " << temp->name << ", ";
        cout << "职工工资: " << temp->wage << endl;
        temp = temp->next;
    }
}

// 主函数
int main() {
    staff *head = nullptr, *tail = nullptr;

    int n;
    cout << "请输入职工人数: ";
    cin >> n;
    cin.ignore(); // 忽略多余的换行符

    // 按顺序输入职工信息
    for (int i = 0; i < n; i++) {
        staff *newStaff = new staff;
        cout << "请输入第 " << i + 1 << " 个职工的工号: ";
        cin >> newStaff->num;
        cin.ignore();
        cout << "请输入第 " << i + 1 << " 个职工的姓名: ";
        cin.getline(newStaff->name, 20);
        cout << "请输入第 " << i + 1 << " 个职工的工资: ";
        cin >> newStaff->wage;
        newStaff->next = nullptr;

        if (head == nullptr) {
            head = newStaff;
            tail = newStaff;
        } else {
            tail->next = newStaff;
            tail = newStaff;
        }
    }

    // 输出原链表中的职工信息
    cout << "\n原职工信息表:" << endl;
    printList(head);

    // 输入删除的职工位置
    int pos;
    cout << "\n请输入要删除的职工位置: ";
    cin >> pos;

    // 删除链表中第pos个职工
    deln(head, pos);

    // 输出删除后的职工信息
    cout << "\n删除后的职工信息表:" << endl;
    printList(head);

	system("pause");
    return 0;
}
