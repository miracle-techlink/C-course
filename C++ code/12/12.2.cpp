#include <stdio.h>
#include <iostream>

int main() {
    FILE *fp;
    int number;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // ���ļ�f2.txt���ж�ȡ
    fp = fopen("f2.txt", "r");
    if (fp == NULL) {
        printf("�޷����ļ�f2.txt��\n");
        return 1;
    }

    // ʹ��fscanf�����ȡ�ļ��е�����
    while (fscanf(fp, "%d", &number) == 1) {
        if (number > 0) {
            positiveCount++;  // ͳ��������
        } else if (number < 0) {
            negativeCount++;  // ͳ�Ƹ�����
        } else {
            zeroCount++;      // ͳ����
        }
    }

    // ���ͳ�ƽ��
    printf("�������ĸ���: %d\n", positiveCount);
    printf("�������ĸ���: %d\n", negativeCount);
    printf("��ĸ���: %d\n", zeroCount);

    // �ر��ļ�
    fclose(fp);

    system("pause");
    return 0;
}