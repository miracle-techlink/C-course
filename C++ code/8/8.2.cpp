#include <iostream>
#include <cstring>  // ����strlen����
using namespace std;

// �ж��ַ����Ƿ�Ϊ����
int huiwen(char s[]) {
    int len = strlen(s);  // ��ȡ�ַ����ĳ���
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {  // �����Ӧλ�õ��ַ�����ͬ
            return 0;  // ���ǻ��ģ�����0
        }
    }
    return 1;  // �ǻ��ģ�����1
}

int main() {
    char str[100];  // ����һ���ַ�������
    cout << "������һ���ַ���: ";
    cin >> str;  // �����ַ���

    // ���� huiwen �����ж��ַ����Ƿ�Ϊ����
    if (huiwen(str) == 1) {
        cout << "���ַ����ǻ��ġ�" << endl;
    } else {
        cout << "���ַ������ǻ��ġ�" << endl;
    }
	system("pause");
    return 0;
}
