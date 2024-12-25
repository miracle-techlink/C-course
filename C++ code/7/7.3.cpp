#include "iostream"
#include "ctime"   // �������������
using namespace std;

int main() {
    int arr[10];           // ����һ������10������������
    int *p = arr;          // ����ָ��ָ������
    int *pMax = arr, *pMin = arr;  // ����ָ������ָ��������Сֵ

    // ���������
    srand(time(0));

    // ������������10��Ԫ��
    cout << "ԭ��������: ";
    for (int i = 0; i < 10; i++) {
        *(p + i) = rand() % 101;  // ���� 0~100 �������
        cout << *(p + i) << " ";
    }
    cout << endl;

    // �ҵ�������Сֵ��ָ��
    for (int i = 1; i < 10; i++) {
        if (*(p + i) > *pMax) {  // �����ֵ
            pMax = p + i;
        }
        if (*(p + i) < *pMin) {  // ����Сֵ
            pMin = p + i;
        }
    }

    // �������ֵ����Сֵ
    int temp = *pMax;
    *pMax = *pMin;
    *pMin = temp;

    // ������������������
    cout << "��������������: ";
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
