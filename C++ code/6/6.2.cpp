#include "iostream"
#include "string"
using namespace std;

int main() {
    string str = "aaaasdfga"; // ��֪���ַ���
    char ch = 'a'; // Ҫɾ�����ַ�
    string result = ""; // ���ڴ洢ɾ����Ľ��

    // �����ַ�����ɾ��ָ���ַ�
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) { // �����ǰ�ַ�����Ҫɾ�����ַ�
            result += str[i]; // ������ӵ�����ַ�����
        }
    }

    // ���ɾ������ַ���
    cout << "ɾ������ַ���: " << result << endl;

    system("pause");
    return 0;
}
