#include "data.h"

void addGrade(List *list, char *id, char *time, int num, int gra_num, char *coun_name, char *coun_phone,
              char *chairman) {
    Grade *grade = (Grade *) malloc(sizeof(Grade));
    strncpy(grade->id, id, 5);
    strncpy(grade->time, time, 9);
    grade->num = num;
    grade->gra_num = gra_num;
    strncpy(grade->coun_name, coun_name, NAME_SIZE);
    strncpy(grade->coun_phone, coun_phone, 12);
    strncpy(grade->chairman, chairman, NAME_SIZE);
    grade->classes = init_list(sizeof(Class));
    add(list, grade);
}

void addClass(Grade *grade, char *id, char *name, int num, float age, int gra_num, char *mon_name, char *phone,
              char *tea_name, char *tea_phone) {
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

void addStudent(Class *class, char *id, char *name, char *gender, char *hometown, char *birth, char *phone,
                float score, int age, bool grad, char *where) {
    Student *student = (Student *) malloc(sizeof(Student));
    strncpy(student->id, id, 12);
    strncpy(student->name, name, NAME_SIZE);
    strncpy(student->gender, gender, 1);
    strncpy(student->hometown, hometown, NAME_SIZE);
    strncpy(student->birth, birth, 9);
    strncpy(student->phone, phone, 12);
    student->score = score;
    student->grad = grad;
    student->age = age;
    strncpy(student->where, where, NAME_SIZE);
    add(class->students, student);
}

Grade *getGrade(List *grade_list, int position) {
    return (Grade *) getData(grade_list, 2);
}

Class *getClass(List *grade, int position) {
    return (Class *) getData(grade, position);
}

Student *getStudent(List *class, int position) {
    return (Student *) getData(class, position);
}

List *getGradeById(List *grade_list, const char *id) {
    List *result = init_list(sizeof(Grade));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        Grade *grade = (Grade *) head->data;
        if (string_match(grade->id, id)) {
            add(result, grade);
        }
        head = head->next;
    }
    return result;
}

List *getGradeByTime(List *grade_list, int min, int max) {
    List *result = init_list(sizeof(Grade));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        Grade *grade = (Grade *) head->data;
        if (atoi(grade->time) >= min && atoi(grade->time) <= max) {
            add(result, grade);
        }
        head = head->next;
    }
    return result;
}

List *getGradeByNum(List *grade_list, int min, int max) {
    List *result = init_list(sizeof(Grade));
    Node *head = getFirst(grade_list);
    while (NULL != head) {
        Grade *grade = (Grade *) head->data;
        if (grade->num >= min && grade->num <= max) {
            add(result, grade);
        }
        head = head->next;
    }
    return result;
}


List *getClassById(List *class_list, const char *id) {
    List *result = init_list(sizeof(Class));
    Node *head = getFirst(class_list);
    while (NULL != head) {
        Class *class = (Class *) head->data;
        if (string_match(class->id, id)) {
            add(result, class);
        }
        head = head->next;
    }
    return result;
}

List *getClassByName(List *class_list, const char *name) {
    List *result = init_list(sizeof(Grade));
    Node *head = getFirst(class_list);
    while (NULL != head) {
        Class *class = (Class *) head->data;
        if (string_match(class->name, name)) {
            add(result, class);
        }
        head = head->next;
    }
    return result;
}

List *getClassByTeaName(List *class_list, const char *name) {
    List *result = init_list(sizeof(Class));
    Node *head = getFirst(class_list);
    while (NULL != head) {
        Class *class = (Class *) head->data;
        if (string_match(class->tea_name, name)) {
            add(result, class);
        }
        head = head->next;
    }
    return result;
}

List *getClassByNum(List *class_list, int min, int max) {
    List *result = init_list(sizeof(Class));
    Node *head = getFirst(class_list);
    while (NULL != head) {
        Class *class = (Class *) head->data;
        if (class->num >= min && class->num <= max) {
            add(result, class);
        }
        head = head->next;
    }
    return result;
}


List *getStudentByName(List *student_list, const char *name) {
    List *result = init_list(sizeof(Student));
    Node *head = getFirst(student_list);
    while (NULL != head) {
        Student *student = (Student *) head->data;
        if (string_match(student->name, name)) {
            add(result, student);
        }
        head = head->next;
    }
    return result;
}

List *getStudentByWhere(List *student_list, const char *where) {
    List *result = init_list(sizeof(Student));
    Node *head = getFirst(student_list);
    while (NULL != head) {
        Student *student = (Student *) head->data;
        if (string_match(student->where, where)) {
            add(result, student);
        }
        head = head->next;
    }
    return result;
}


List *getStudentByAge(List *student_list, int min, int max) {
    List *result = init_list(sizeof(Student));
    Node *head = getFirst(student_list);
    while (NULL != head) {
        Student *student = (Student *) head->data;
        if (student->age >= min && student->age <= max) {
            add(result, student);
        }
        head = head->next;
    }
    return result;
}

int main(void) {
    List *grade_list = init_list(sizeof(Grade));
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addGrade(grade_list, "2017", "20170101", 100, 0, "LiJin", "12312341234", "ChenZhuo");
    addClass(((Grade *) getData(grade_list, 2)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234", "Yuan",
             "12312341234");
    List *list = getGradeByTime(grade_list, 20170101, 20180101);
    return 0;
}
