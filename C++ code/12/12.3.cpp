#include <stdio.h>
#include <stdlib.h>

#define N 5  // 定义学生的数量

// 定义学生结构体
struct Student {
    char id[20];  // 学号
    float score;  // 成绩
};

int main() {
    FILE *fp;
    struct Student students[N];
    float maxScore, minScore, totalScore = 0.0;

    // 从键盘输入N个学生的学号和成绩
    printf("请输入 %d 个学生的学号和成绩：\n", N);
    for (int i = 0; i < N; i++) {
        printf("请输入第 %d 个学生的学号: ", i + 1);
        scanf("%s", students[i].id);
        printf("请输入第 %d 个学生的成绩: ", i + 1);
        scanf("%f", &students[i].score);
    }

    // 将学生信息写入文件 student.dat
    fp = fopen("student.dat", "wb");  // 二进制写入模式
    if (fp == NULL) {
        printf("无法创建文件 student.dat！\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), N, fp);
    fclose(fp);

    // 从文件中读取学生信息
    fp = fopen("student.dat", "rb");  // 二进制读取模式
    if (fp == NULL) {
        printf("无法打开文件 student.dat！\n");
        return 1;
    }

    fread(students, sizeof(struct Student), N, fp);
    fclose(fp);

    // 初始化最大值和最小值
    maxScore = minScore = students[0].score;

    // 计算最高分、最低分和总分
    for (int i = 0; i < N; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
        }
        if (students[i].score < minScore) {
            minScore = students[i].score;
        }
        totalScore += students[i].score;
    }

    // 输出计算结果
    printf("\n学生信息：\n");
    for (int i = 0; i < N; i++) {
        printf("学号: %s, 成绩: %.2f\n", students[i].id, students[i].score);
    }
    printf("\n最高分: %.2f\n", maxScore);
    printf("最低分: %.2f\n", minScore);
    printf("总分: %.2f\n", totalScore);

    return 0;
}