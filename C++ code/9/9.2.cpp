#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// �ݹ麯�������������ۼӺ�
int sum(int a[], int n) {
    if (n == 0) {
        return 0;  // �ݹ�����������������Ϊ0
    } else {
        return a[n - 1] + sum(a, n - 1);  // �ݹ���������0��n-1�ĺ�
    }
}

int main() {
    srand(time(0));  // �����������
    
    int a[10];  // �������飬�洢10�������

    // �������10����λ��
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 90 + 10;  // ����10��99֮��������
    }

    // ���������ɵ�����
    cout << "���ɵ������Ϊ: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // ����sum��������������ĺ�
    int result = sum(a, 10);
    
    // ����ۼӺ�
    cout << "����Ԫ�ص��ۼӺ�Ϊ: " << result << endl;

    system("pause");
    return 0;
}
