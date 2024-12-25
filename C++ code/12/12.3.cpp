#include <stdio.h>
#include <stdlib.h>

#define N 5  // ����ѧ��������

// ����ѧ���ṹ��
struct Student {
    char id[20];  // ѧ��
    float score;  // �ɼ�
};

int main() {
    FILE *fp;
    struct Student students[N];
    float maxScore, minScore, totalScore = 0.0;

    // �Ӽ�������N��ѧ����ѧ�źͳɼ�
    printf("������ %d ��ѧ����ѧ�źͳɼ���\n", N);
    for (int i = 0; i < N; i++) {
        printf("������� %d ��ѧ����ѧ��: ", i + 1);
        scanf("%s", students[i].id);
        printf("������� %d ��ѧ���ĳɼ�: ", i + 1);
        scanf("%f", &students[i].score);
    }

    // ��ѧ����Ϣд���ļ� student.dat
    fp = fopen("student.dat", "wb");  // ������д��ģʽ
    if (fp == NULL) {
        printf("�޷������ļ� student.dat��\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), N, fp);
    fclose(fp);

    // ���ļ��ж�ȡѧ����Ϣ
    fp = fopen("student.dat", "rb");  // �����ƶ�ȡģʽ
    if (fp == NULL) {
        printf("�޷����ļ� student.dat��\n");
        return 1;
    }

    fread(students, sizeof(struct Student), N, fp);
    fclose(fp);

    // ��ʼ�����ֵ����Сֵ
    maxScore = minScore = students[0].score;

    // ������߷֡���ͷֺ��ܷ�
    for (int i = 0; i < N; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
        }
        if (students[i].score < minScore) {
            minScore = students[i].score;
        }
        totalScore += students[i].score;
    }

    // ���������
    printf("\nѧ����Ϣ��\n");
    for (int i = 0; i < N; i++) {
        printf("ѧ��: %s, �ɼ�: %.2f\n", students[i].id, students[i].score);
    }
    printf("\n��߷�: %.2f\n", maxScore);
    printf("��ͷ�: %.2f\n", minScore);
    printf("�ܷ�: %.2f\n", totalScore);

    return 0;
}