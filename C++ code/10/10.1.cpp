#include <iostream>
#include <cstring>
using namespace std;

// ����ṹ�� student
struct student {
    char *num;  // ѧ�ţ�ʹ��ָ��
    int score;  // �ɼ�
};

// ����max���������ط�����ߵ�ѧ������Ϣ
student* max(student s[], int n) {
    student *maxStudent = &s[0];  // �����һ��ѧ���Ƿ�����ߵ�
    for (int i = 1; i < n; i++) {
        if (s[i].score > maxStudent->score) {
            maxStudent = &s[i];  // ������߷�ѧ��
        }
    }
    return maxStudent;
}

int main() {
    // ����ѧ�����飬������5��ѧ��
    student students[5];
    
    // ��ѧ����Ϣ��ֵ
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

    // ����max��������ȡ������ߵ�ѧ��
    student* topStudent = max(students, 5);

    // ���������ߵ�ѧ����Ϣ
    cout << "The student with the highest score is:" << endl;
    cout << "Student ID: " << topStudent->num << ", Score: " << topStudent->score << endl;

    // �ͷ�Ϊnum������ڴ�
    for (int i = 0; i < 5; i++) {
        delete[] students[i].num;
    }

	system("pause");
    return 0;
}
