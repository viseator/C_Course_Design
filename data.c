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
    return (Grade *) getData(grade_list, position);
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

void openFileForWrite() {
    student_file = fopen("student.dat", "wb");
    class_file = fopen("class.dat", "wb");
    grade_file = fopen("grade.dat", "wb");
    info_file = fopen("info.dat", "w");
}

void closeFile() {
    fclose(student_file);
    fclose(class_file);
    fclose(grade_file);
    fclose(info_file);
}

void writeListToFile(List *list, FILE *file) {
    Node *head = list->head->next;
    while (NULL != head) {
        fwrite(head->data, list->size, 1, file);
        head = head->next;
    }
}

void saveStudentToFile(List *student_list) {
    fprintf(info_file, "%d\n", student_list->length);
    writeListToFile(student_list, student_file);
}

void saveClassToFile(List *class_list) {
    fprintf(info_file, "%d\n", class_list->length);
    writeListToFile(class_list, class_file);
    Node *head = class_list->head->next;
    while (NULL != head) {
        Class *class = (Class *) head->data;
        saveStudentToFile(class->students);
        head = head->next;
    }
}

void saveGradeToFile(List *grade_list) {
    openFileForWrite();
    fprintf(info_file, "%d\n", grade_list->length);
    writeListToFile(grade_list, grade_file);
    Node *head = grade_list->head->next;
    while (NULL != head) {
        Grade *grade = (Grade *) head->data;
        saveClassToFile(grade->classes);
        head = head->next;
    }
    closeFile();
}

void openFileForRead() {
    student_file = fopen("student.dat", "rb");
    class_file = fopen("class.dat", "rb");
    grade_file = fopen("grade.dat", "rb");
    info_file = fopen("info.dat", "r");
}

List *readStudentFromFile(int num) {
    List *result = init_list(sizeof(Student));
    while (num--) {
        Student *data = (Student *) malloc(sizeof(Student));
        fread(data, sizeof(Student), 1, student_file);
        add(result, data);
    }
    return result;
}

List *readClassFromFile(int num) {
    List *result = init_list(sizeof(Class));
    while (num--) {
        Class *data = (Class *) malloc(sizeof(Class));
        fread(data, sizeof(Class), 1, class_file);
        int n;
        fscanf(info_file, "%d", &n);
        if (n == 0) {
            data->students = NULL;
        } else {
            data->students = readStudentFromFile(n);
        }
        add(result, data);
    }
    return result;
}

List *readGradeFromFile() {
    openFileForRead();
    int num;
    fscanf(info_file, "%d", &num);
    List *result = init_list(sizeof(Grade));
    while (num--) {
        Grade *data = (Grade *) malloc(sizeof(Grade));
        fread(data, sizeof(Grade), 1, grade_file);
        int n;
        fscanf(info_file, "%d", &n);
        if (n == 0) {
            data->classes = NULL;
        } else {
            data->classes = readClassFromFile(n);
        }
        add(result, data);
    }
    closeFile();
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
    addClass((getGrade(grade_list, 2)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234", "Yuan",
             "12312341234");
    addClass((getGrade(grade_list, 2)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234", "Yuan",
             "12312341234");
    addClass((getGrade(grade_list, 3)), "CS1609", "计算机", 100, 10.1, 101, "Yuan", "12312341234", "Yuan",
             "12312341234");
    addStudent(getClass(getGrade(grade_list, 2)->classes, 1), "U201614753", "吴迪111", "1", "YUSHAN", "19971024",
               "13479343728", 666, 18, false, "Ali");
    addStudent(getClass(getGrade(grade_list, 2)->classes, 0), "U201614753", "吴迪222", "1", "YUSHAN", "19971024",
               "13479343728", 666, 18, false, "Ali");
    addStudent(getClass(getGrade(grade_list, 3)->classes, 0), "U201614753", "吴迪333", "1", "YUSHAN", "19971024",
               "13479343728", 666, 18, false, "Ali");
    saveGradeToFile(grade_list);

    printf("%s", getStudent(getClass(getGrade(grade_list, 2)->classes, 1)->students, 0)->name);
    List *new_list = readGradeFromFile();
    printf("%s", getStudent(getClass(getGrade(new_list, 2)->classes, 1)->students, 0)->name);
    return 0;
}
