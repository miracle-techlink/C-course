#include <iostream>
using namespace std;

// �ж��Ƿ�Ϊ����
bool isprime(int m) {
    if (m <= 1) return false; // 1�����µ����ֲ�������
    for (int i = 2; i * i <= m; i++) { // ֻ��鵽sqrt(m)����
        if (m % i == 0) {
            return false; // ����ܱ�i��������m��������
        }
    }
    return true; // ����m������
}

int main() {
    int count = 0; // ���������������10����������
    int num = 2;   // ��2��ʼ�ж�����
    while (count < 10) {
        if (isprime(num) && isprime(num + 2)) {  // �ж�num��num+2�Ƿ�����������
            cout << "<" << num << "," << num + 2 << ">" << endl;
            count++;  // ���һ�Ժ󣬼�������1
        }
        num++;  // ���������һ������
    }

	system("pause");
    return 0;
}
