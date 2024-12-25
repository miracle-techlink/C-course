#include <iostream>
#include <algorithm>  // ���� sort ����
using namespace std;

// ��1��ͨ������ֵ��������������ָ�뷵�ز���������
int fun1(int s[], int n, int* x) {
    int excellent = 0, fail = 0;
    
    // ���򣬰��մӸߵ���
    sort(s, s + n, greater<int>());
    
    // ͳ�������벻���������
    for (int i = 0; i < n; i++) {
        if (s[i] >= 90) {
            excellent++;  // ����
        }
        if (s[i] < 60) {
            fail++;  // ������
        }
    }

    *x = fail;  // ͨ��ָ�뷵�ز���������
    return excellent;  // ������������
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

    // ����1��ʹ�÷���ֵ��ָ������ȡͳ������
    int fail1;
    int excellent1 = fun1(s, n, &fail1);
    cout << "�������� = " << excellent1 << ", ���������� = " << fail1 << endl;

    delete[] s;  // �ͷŶ�̬������ڴ�

    system("pause");
    return 0;
}

