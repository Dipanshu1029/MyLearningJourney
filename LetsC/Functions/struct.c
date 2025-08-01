#include <stdio.h>

struct student {
    int ExamRollNo;
    int SchoolCode;
    char Name[100];
};

int main() {

    struct student Dipanshu;
    Dipanshu.ExamRollNo = 10242776;
    Dipanshu.SchoolCode = 123445;
    // Dipanshu.Name = {"D","i", "p", "a", "n", "s", "h", "u", "\0"};
    printf("Exam Roll No: %d\n", Dipanshu.ExamRollNo);
    printf("School Code: %d\n", Dipanshu.SchoolCode);
    printf("Name: %s\n", Dipanshu.Name);
    return 0;
}