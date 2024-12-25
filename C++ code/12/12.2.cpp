#include <stdio.h>
#include <iostream>

int main() {
    FILE *fp;
    int number;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // 打开文件f2.txt进行读取
    fp = fopen("f2.txt", "r");
    if (fp == NULL) {
        printf("无法打开文件f2.txt！\n");
        return 1;
    }

    // 使用fscanf逐个读取文件中的整数
    while (fscanf(fp, "%d", &number) == 1) {
        if (number > 0) {
            positiveCount++;  // 统计正整数
        } else if (number < 0) {
            negativeCount++;  // 统计负整数
        } else {
            zeroCount++;      // 统计零
        }
    }

    // 输出统计结果
    printf("正整数的个数: %d\n", positiveCount);
    printf("负整数的个数: %d\n", negativeCount);
    printf("零的个数: %d\n", zeroCount);

    // 关闭文件
    fclose(fp);

    system("pause");
    return 0;
}