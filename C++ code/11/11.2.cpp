#include <iostream>
#include <cstring>
using namespace std;

// ���嵥������ṹ
struct Node {
    char data;       // �洢�ַ�
    Node *next;      // ָ����һ������ָ��
};

// ���ַ�������˳����뵽������
void insertReverse(Node *&head, char ch) {
    Node *newNode = new Node;  // �����µĽ��
    newNode->data = ch;
    newNode->next = head;       // �½��� next ָ��ǰ�����ͷ���
    head = newNode;             // ����ͷ���Ϊ�½��
}

// �����������
void printList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

// ������
int main() {
    char str[100];  // ���ڴ洢������ַ���
    Node *head = nullptr;  // ��ʼ������Ϊ��

    // �Ӽ��������ַ���
    cout << "������һ���ַ���: ";
    cin.getline(str, 100);  // ��ȡ�ַ��������100���ַ�

    // ���ַ�����ÿ���ַ�������˳����뵽������
    for (int i = 0; str[i] != '\0'; i++) {
        insertReverse(head, str[i]);
    }

    // ��������е�����
    cout << "������˳����֯����������: ";
    printList(head);

	system("pause");
    return 0;
}
