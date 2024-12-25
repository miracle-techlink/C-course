#include <iostream>
using namespace std;

// �����ַ����� Mystring
class Mystring {
private:
    char* str;     // �ַ����洢
    int length;    // �ַ�������

public:
    // ���캯������ʼ�����ַ���
    Mystring() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }

    // ���ι��캯�����������ַ�����ʼ��
    Mystring(const char* input) {
        length = 0;
        while (input[length] != '\0') { // �ֶ������ַ�������
            length++;
        }

        str = new char[length + 1]; // �����ڴ�
        for (int i = 0; i < length; i++) {
            str[i] = input[i]; // �����ַ���
        }
        str[length] = '\0'; // ��ӽ�����
    }

    // �����������ͷ��ڴ�
    ~Mystring() {
        delete[] str;
    }

    // �����ַ�������
    int getLength() const {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    // ���������ַ���
    Mystring concat(const Mystring& other) const {
        int newLength = length + other.length; // ���ַ����ĳ���
        char* newStr = new char[newLength + 1]; // �����¿ռ�

        // ���Ƶ�һ���ַ���
        for (int i = 0; i < length; i++) {
            newStr[i] = str[i];
        }

        // ���Ƶڶ����ַ���
        for (int i = 0; i < other.length; i++) {
            newStr[length + i] = other.str[i];
        }
        newStr[newLength] = '\0'; // ��ӽ�����

        return Mystring(newStr);
    }

    // �����ַ���
    void input() {
        char temp[1000]; // ��ʱ������
        cout << "�������ַ���: ";
        cin >> temp;

        // ���·���ռ䲢�洢�����ַ���
        length = 0;
        while (temp[length] != '\0') {
            length++;
        }

        delete[] str; // �ͷžɿռ�
        str = new char[length + 1];
        for (int i = 0; i < length; i++) {
            str[i] = temp[i];
        }
        str[length] = '\0';
    }

    // ����ַ���
    void output() const {
        cout << str << endl;
    }
};

int main() {
    // ���� Mystring ����
    Mystring str1, str2, str3;

    // �����һ���ַ���
    cout << "�����һ���ַ���: ";
    str1.input();

    // ����ڶ����ַ���
    cout << "����ڶ����ַ���: ";
    str2.input();

    // ����ַ�������
    cout << "��һ���ַ���Ϊ: ";
    str1.output();
    cout << "�ڶ����ַ���Ϊ: ";
    str2.output();

    // ���㲢����ַ�������
    cout << "��һ���ַ�������: " << str1.getLength() << endl;
    cout << "�ڶ����ַ�������: " << str2.getLength() << endl;

    // ���������ַ���
    str3 = str1.concat(str2);
    cout << "���Ӻ���ַ���Ϊ: ";
    str3.output();

	system("pause");
    return 0;
}
