#include "iostream"
#include "string"
using namespace std;

int main() {
    string str;
    cout << "������һ���ַ���: ";
    getline(cin, str);  // ����һ���ַ���

    // ˫ָ�뷨���򽻻��ַ�
    int start = 0;  // �ַ����Ŀ�ʼλ��
    int end = str.length() - 1;  // �ַ����Ľ���λ��

    while (start < end) {
        // �����ַ�
        swap(str[start], str[end]);
        start++;  // ��ʼָ�������ƶ�
        end--;    // ����ָ�������ƶ�
    }

    // ����������ַ���
    cout << "�������ַ���: " << str << endl;

    system("pause");
    return 0;
}
