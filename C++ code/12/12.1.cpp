#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
    char str[100], reversedStr[100];
    FILE *fp;

    // �Ӽ��������ַ���
    printf("������һ���ַ�: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // ȥ�����з�

    // ��ȡ�ַ����ĵ���
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversedStr[i] = str[len - i - 1];
    }
    reversedStr[len] = '\0';  // ȷ�������ַ�����ȷ����

    // ���ļ�f1.txt����д�����
    fp = fopen("f1.txt", "w");
    if (fp == NULL) {
        printf("�޷����ļ�!\n");
        return 1;
    }

    // �������ַ���д���ļ�
    fputs(reversedStr, fp);

    // ��ԭ�ַ���׷�ӵ��ļ�ĩβ
    fputs(str, fp);

    // �ر��ļ�
    fclose(fp);

    // ��ʾ��ɲ���
    printf("�����ɹ����ļ�f1.txt�Ѹ��¡�\n");

	system("pause");
    return 0;
}
