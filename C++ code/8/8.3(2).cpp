#include <iostream>
#include <algorithm>  // ���� sort ����
using namespace std;

// ��2��ͨ�����ò����������������벻��������
void fun2(int s[], int n, int &x, int &y) {
    x = 0;  // ����������ʼ��Ϊ0
    y = 0;  // ������������ʼ��Ϊ0
    
    // ���򣬰��մӸߵ���
    sort(s, s + n, greater<int>());
    
    // ͳ�������벻���������
    for (int i = 0; i < n; i++) {
        if (s[i] >= 90) {
            x++;  // ����
        }
        if (s[i] < 60) {
            y++;  // ������
        }
    }
}

int main() {
    int n;
    cout << "������ѧ������: ";
    cin >> n;

    int* s = new int[n];  // ��̬����һ���������洢ѧ���ɼ�
    cout << "������ÿ��ѧ���ĳɼ�: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // ����2��ʹ�����ò�������ȡͳ������
    int excellent2, fail2;
    fun2(s, n, excellent2, fail2);
    cout << "�������� = " << excellent2 << ", ���������� = " << fail2 << endl;

    delete[] s;  // �ͷŶ�̬������ڴ�

    system("pause");
    return 0;
}
