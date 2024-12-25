#include <iostream>
using namespace std;

// ��������� Fraction
class Fraction {
private:
    int fz; // ����
    int fm; // ��ĸ

    // �����Լ���ĸ���������ʹ��ŷ������㷨��
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    // ���캯������ʼ�����Ӻͷ�ĸ
    Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0) { // ��ĸ����Ϊ0
            cout << "��ĸ����Ϊ0���Զ�����Ϊ1" << endl;
            denominator = 1;
        }
        fz = numerator;
        fm = denominator;
        Reduction(); // �ڹ���ʱ����Լ��
    }

    // ��Ա�������������
    void print() const {
        cout << fz << "/" << fm << endl;
    }

    // ��Ա������Լ�ַ���
    void Reduction() {
        int divisor = gcd(fz, fm); // ����Ӻͷ�ĸ�����Լ��
        fz /= divisor;
        fm /= divisor;

        // �����ĸΪ������������淶��������ʽ��
        if (fm < 0) {
            fz = -fz;
            fm = -fm;
        }
    }
};

int main() {
    int numerator, denominator;

    // ������Ӻͷ�ĸ
    cout << "����������ķ���: ";
    cin >> numerator;
    cout << "����������ķ�ĸ: ";
    cin >> denominator;

    // ���� Fraction ���󲢽��в���
    Fraction frac(numerator, denominator);

    cout << "Լ�ֺ�ķ���Ϊ: ";
    frac.print();

	system("pause");
    return 0;
}
