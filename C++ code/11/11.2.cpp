#include <iostream>
#include <cstring>
using namespace std;

// 定义单链表结点结构
struct Node {
    char data;       // 存储字符
    Node *next;      // 指向下一个结点的指针
};

// 将字符按反向顺序插入到链表中
void insertReverse(Node *&head, char ch) {
    Node *newNode = new Node;  // 创建新的结点
    newNode->data = ch;
    newNode->next = head;       // 新结点的 next 指向当前链表的头结点
    head = newNode;             // 更新头结点为新结点
}

// 输出链表内容
void printList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

// 主函数
int main() {
    char str[100];  // 用于存储输入的字符串
    Node *head = nullptr;  // 初始化链表为空

    // 从键盘输入字符串
    cout << "请输入一个字符串: ";
    cin.getline(str, 100);  // 读取字符串，最多100个字符

    // 将字符串的每个字符按反向顺序插入到链表中
    for (int i = 0; str[i] != '\0'; i++) {
        insertReverse(head, str[i]);
    }

    // 输出链表中的内容
    cout << "按反向顺序组织的链表内容: ";
    printList(head);

	system("pause");
    return 0;
}
