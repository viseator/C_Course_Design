#include "data.h"

void add_grade(List *list, char id[], char time[], int num, int gra_num, char coun_name[], char coun_phone[],
               char chairman[]) {
    Grade *grade = (Grade *) malloc(sizeof(Grade));
    strncpy(grade->id, id, 5);
    strncpy(grade->time, time, 7);
    grade->num = num;
    grade->gra_num = gra_num;
    strncpy(grade->coun_name, coun_name, NAME_SIZE);
    strncpy(grade->coun_phone, coun_phone, 12);
    strncpy(grade->chairman, chairman, NAME_SIZE);
    grade->classes = init_list(sizeof(Class));
    add(list, grade);
}

void add_class(Grade *grade, char id[], char name[], int num, float age, int gra_num, char mon_name[], char phone[],
               char tea_name[], char tea_phone[]) {
    Class *class = (Class *) malloc(sizeof(Class));
    strncpy(class->id, id, 15);
    strncpy(class->name, name, NAME_SIZE);
    class->num = num;
    class->age = age;
    class->gra_num = gra_num;
    strncpy(class->mon_name, mon_name, NAME_SIZE);
    strncpy(class->phone, phone, 12);
    strncpy(class->tea_name, tea_name, NAME_SIZE);
    strncpy(class->tea_phone, tea_phone, 12);
    class->students = init_list(sizeof(Student));
    add(grade->classes, class);
}

void add_student(Class *class, char id[], char name[], char gender[], char hometown[], char birth[], char phone[],
                 float score, bool grad, char where[]) {
    Student *student = (Student *) malloc(sizeof(Student));
    strncpy(student->id, id, 12);
    strncpy(student->name, name, NAME_SIZE);
    strncpy(student->gender, gender, 1);
    strncpy(student->hometown, hometown, NAME_SIZE);
    strncpy(student->birth, birth, 9);
    strncpy(student->phone, phone, 12);
    student->score = score;
    student->grad = grad;
    strncpy(student->where, where, NAME_SIZE);
    add(class->students, student);
}

Grade *getGrade(List *grade_list, int position) {
    return (Grade *) getData(grade_list, 2);
}

Class *getClass(Grade *grade, int position) {
    return (Class *) getData(grade->classes, position);
}

Student *getStudent(Class *class, int position) {
    return (Student *) getData(class->students, position);
}

int main(void) {
    List *grade_list = init_list(sizeof(Grade));
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_grade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    add_class(((Grade *) getData(grade_list, 2)), "CS1609", "CS1609", 100, 10.1, 101, "Yuan", "12312341234", "Yuan",
              "12312341234");
    printf("%s", getClass(getGrade(grade_list, 2), 0)->name);
    return 0;
}
