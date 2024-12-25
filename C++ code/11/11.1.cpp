#include <iostream>
#include <cstring>
using namespace std;

// ����ְ����Ϣ�ṹ��
struct staff {
    char num[6];      // ְ������
    char name[20];    // ְ������
    double wage;      // ְ������
    staff *next;      // ָ����һ������ָ��
};

// ɾ�������е�n�����
void deln(staff *&head, int n) {
    if (head == nullptr || n <= 0) {
        cout << "Invalid position." << endl;
        return;
    }

    staff *temp = head;

    // ���ɾ�����ǵ�һ�����
    if (n == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    // �ҵ���n-1�����
    for (int i = 1; temp != nullptr && i < n - 1; i++) {
        temp = temp->next;
    }

    // �����n����㲻����
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position exceeds the list length." << endl;
        return;
    }

    // ɾ����n�����
    staff *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

// ���ְ����Ϣ
void printList(staff *head) {
    staff *temp = head;
    while (temp != nullptr) {
        cout << "ְ������: " << temp->num << ", ";
        cout << "ְ������: " << temp->name << ", ";
        cout << "ְ������: " << temp->wage << endl;
        temp = temp->next;
    }
}

// ������
int main() {
    staff *head = nullptr, *tail = nullptr;

    int n;
    cout << "������ְ������: ";
    cin >> n;
    cin.ignore(); // ���Զ���Ļ��з�

    // ��˳������ְ����Ϣ
    for (int i = 0; i < n; i++) {
        staff *newStaff = new staff;
        cout << "������� " << i + 1 << " ��ְ���Ĺ���: ";
        cin >> newStaff->num;
        cin.ignore();
        cout << "������� " << i + 1 << " ��ְ��������: ";
        cin.getline(newStaff->name, 20);
        cout << "������� " << i + 1 << " ��ְ���Ĺ���: ";
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

    // ���ԭ�����е�ְ����Ϣ
    cout << "\nԭְ����Ϣ��:" << endl;
    printList(head);

    // ����ɾ����ְ��λ��
    int pos;
    cout << "\n������Ҫɾ����ְ��λ��: ";
    cin >> pos;

    // ɾ�������е�pos��ְ��
    deln(head, pos);

    // ���ɾ�����ְ����Ϣ
    cout << "\nɾ�����ְ����Ϣ��:" << endl;
    printList(head);

	system("pause");
    return 0;
}
