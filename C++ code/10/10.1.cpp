#include <iostream>
#include <cstring>
using namespace std;

// 定义结构体 student
struct student {
    char *num;  // 学号，使用指针
    int score;  // 成绩
};

// 定义max函数，返回分数最高的学生的信息
student* max(student s[], int n) {
    student *maxStudent = &s[0];  // 假设第一个学生是分数最高的
    for (int i = 1; i < n; i++) {
        if (s[i].score > maxStudent->score) {
            maxStudent = &s[i];  // 更新最高分学生
        }
    }
    return maxStudent;
}

int main() {
    // 定义学生数组，假设有5个学生
    student students[5];
    
    // 给学生信息赋值
    students[0].num = new char[10];
    strcpy(students[0].num, "1001");
    students[0].score = 85;

    students[1].num = new char[10];
    strcpy(students[1].num, "1002");
    students[1].score = 92;

    students[2].num = new char[10];
    strcpy(students[2].num, "1003");
    students[2].score = 78;

    students[3].num = new char[10];
    strcpy(students[3].num, "1004");
    students[3].score = 95;

    students[4].num = new char[10];
    strcpy(students[4].num, "1005");
    students[4].score = 88;

    // 调用max函数，获取分数最高的学生
    student* topStudent = max(students, 5);

    // 输出分数最高的学生信息
    cout << "The student with the highest score is:" << endl;
    cout << "Student ID: " << topStudent->num << ", Score: " << topStudent->score << endl;

    // 释放为num分配的内存
    for (int i = 0; i < 5; i++) {
        delete[] students[i].num;
    }

	system("pause");
    return 0;
}
