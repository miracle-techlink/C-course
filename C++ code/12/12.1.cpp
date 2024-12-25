#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
    char str[100], reversedStr[100];
    FILE *fp;

    // 从键盘输入字符串
    printf("请输入一串字符: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // 去掉换行符

    // 获取字符串的倒序
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversedStr[i] = str[len - i - 1];
    }
    reversedStr[len] = '\0';  // 确保倒序字符串正确结束

    // 打开文件f1.txt进行写入操作
    fp = fopen("f1.txt", "w");
    if (fp == NULL) {
        printf("无法打开文件!\n");
        return 1;
    }

    // 将倒序字符串写入文件
    fputs(reversedStr, fp);

    // 将原字符串追加到文件末尾
    fputs(str, fp);

    // 关闭文件
    fclose(fp);

    // 提示完成操作
    printf("操作成功！文件f1.txt已更新。\n");

	system("pause");
    return 0;
}
