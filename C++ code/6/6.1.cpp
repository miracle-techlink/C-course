#include "iostream"
#include "iomanip"  // ����setw
using namespace std;

#include "iostream"
#include "iomanip"  // ����setw
using namespace std;

int main() {
    int n;
    cout << "������һ��С��10��������n: ";
    cin >> n;

    // �����ά���飬���ڴ洢��������ε���ֵ
    int a[10][10] = {0}; 

    // �����������ε�����
    for (int i = 0; i < n; i++) {
        a[i][0] = 1; // ÿ�е�һ����Ϊ1
        a[i][i] = 1; // ÿ�е����Խ����ϵ���Ϊ1
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j]; // ����λ�õ���ֵ
        }
    }

    // ������������
    for (int i = 0; i < n; i++) {
        cout << setw((n - i) * 2) << ""; // ����ÿ��ǰ�Ŀո����ھ��ж���
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << a[i][j]; // �̶�������ÿ��Ԫ�أ�ȷ������
        }
        cout << endl; // �����һ�к���
    }

    system("pause");
    return 0;
}
