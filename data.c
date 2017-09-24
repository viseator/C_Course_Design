#include "data.h"

/**gloab files for read and write */
FILE *student_file;
FILE *class_file;
FILE *grade_file;
FILE *info_file;

/**create new grade */
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

/**create new class */
void addClass(List *class_list, char *id, char *name, int num, float age, int gra_num, char *mon_name, char *phone,
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
    add(class_list, class);
}

/**create new student */
void addStudent(List *student_list, char *id, char *name, char *gender, char *hometown, char *birth, char *phone,
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
    add(student_list, student);
}

/**get grade data by position */
Grade *getGrade(List *grade_list, int position) {
    return (Grade *) getData(grade_list, position);
}

/**get class data by position */
Class *getClass(List *grade, int position) {
    return (Class *) getData(grade, position);
}

/**get student data by position */
Student *getStudent(List *class, int position) {
    return (Student *) getData(class, position);
}

/**get grade by id */
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

/**get grade by time */
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


/**get grade by num */
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

/**get class by id */
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

/**get class by name */
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

/**get class by teacher name */
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

/**get class by num */
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

/**get student by name */
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

/**get student by where */
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


/**get student by age */
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

/**get student by gratuation */
List *getStudentByGra(List *student_list, bool gra){
    List *result = init_list(sizeof(Student));
    Node *head = getFirst(student_list);
    while(NULL != head){
        Student *student = (Student *) head->data;
        if(student->grad == gra){
            add(result, student);
        }
        head = head->next;
    }
    return result;
}

/**open file for write */
void openFileForWrite() {
    student_file = fopen("student.dat", "wb");
    class_file = fopen("class.dat", "wb");
    grade_file = fopen("grade.dat", "wb");
    info_file = fopen("info.dat", "w");
}

/**close files */
void closeFile() {
    fclose(student_file);
    fclose(class_file);
    fclose(grade_file);
    fclose(info_file);
}

/**write list to file */
void writeListToFile(List *list, FILE *file) {
    Node *head = list->head->next;
    while (NULL != head) {
        fwrite(head->data, list->size, 1, file);
        head = head->next;
    }
}

/**save student list to file */
void saveStudentToFile(List *student_list) {
    fprintf(info_file, "%d\n", student_list->length);
    writeListToFile(student_list, student_file);
}

/**save class list to file */
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

/**save grade list to file */
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

/**open file for read */
void openFileForRead() {
    student_file = fopen("student.dat", "rb");
    class_file = fopen("class.dat", "rb");
    grade_file = fopen("grade.dat", "rb");
    info_file = fopen("info.dat", "r");
}

/**read student list from file */
List *readStudentFromFile(int num) {
    List *result = init_list(sizeof(Student));
    while (num--) {
        Student *data = (Student *) malloc(sizeof(Student));
        fread(data, sizeof(Student), 1, student_file);
        add(result, data);
    }
    return result;
}

/**read class list from file */
List *readClassFromFile(int num) {
    List *result = init_list(sizeof(Class));
    while (num--) {
        Class *data = (Class *) malloc(sizeof(Class));
        fread(data, sizeof(Class), 1, class_file);
        int n;
        fscanf(info_file, "%d", &n);
        if (n == 0) {
            data->students = init_list(sizeof(Student));
        } else {
            data->students = readStudentFromFile(n);
        }
        add(result, data);
    }
    return result;
}

/**read grade list from file */
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
            data->classes = init_list(sizeof(Class));
        } else {
            data->classes = readClassFromFile(n);
        }
        add(result, data);
    }
    closeFile();
    return result;
}

/**remove all students in list */
void removeStudent(List* student_list){
    Node* head = student_list->head;
    while(NULL != head->next){
        removeNode(student_list, head->next);
    }
}

/**remove all classes in list */
void removeClass(List* class_list){
    Node* head = class_list->head;
    while(NULL != head->next){
        List* student = ((Class*)head->next->data)->students;
        if(NULL != student){
            removeStudent(student);
        }
        removeNode(class_list,head->next);
    }
}

/**remove all grades in list */
void removeGrade(List* grade_list){
    Node* head = grade_list->head;
    while(NULL != head->next){
        List* class = ((Grade*)head->next->data)->classes;
        if(NULL != class){
            removeClass(class);
        }
        removeNode(grade_list,head->next);
    }
}

/**remove a student from class list */
void removeStudentFromClass(List *class_list, void *data){
    for(int i = 0; i < class_list->length; i++){
        List *student_list = getClass(class_list, i)->students;
        removeNode(student_list, data);
    }
}

/**remove a student in all students */
void removeStudentByData(List *grade_list, void *data){
    for(int i = 0; i < grade_list->length; i++){
        List *class_list = getGrade(grade_list, i)->classes;
        removeStudentFromClass(class_list, data);
    }
}

/**remove a class in all grades */
void removeClassByData(List *grade_list, void *data){
    for(int i = 0; i < grade_list->length; i++){
        List *class_list = getGrade(grade_list, i)->classes;
        removeNode(class_list, data);
    }
}

/**remove a grade in all grades */
void removeGradeByData(List *grade_list, void *data){
    removeNode(grade_list, data);
}

/**get all classes in grade list */
List *getAllClass(List *grade_list){
    List *result = init_list(sizeof(Class));
    for(int i = 0; i < grade_list->length; i++){
        appendList(result, getGrade(grade_list, i)->classes);
    }
    return result;
}

/**get all students in grade list */
List *getAllStudent(List *gradeList){
    List *result = init_list(sizeof(Student));
    List *classes = getAllClass(gradeList);
    for(int i = 0; i < classes->length; i++){
        appendList(result, getClass(classes, i)->students);
    }
    return result;
}

/**get all students in a class list */
List *getAllStudentInClass(List *classes){
    List *result = init_list(sizeof(Student));
    for(int i = 0; i < classes->length; i++){
        appendList(result, getClass(classes, i)->students);
    }
    return result;
}

/**sort grade list by time */
void *sortGradeByTime(List *gradeList){
    Node *head = gradeList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if(strcmp(((Grade*) p->data)->id, ((Grade*)min->data)->id) < 0){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort class list by id */
void *sortClassById(List *classList){
    Node *head = classList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if(strcmp(((Class*) p->data)->id, ((Class*)min->data)->id) < 0){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort class list by ungratuated */
void *sortClassByUnGra(List *classList){
    Node *head = classList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if((((Class*)p->data)->num - ((Class*)p->data)->gra_num) < ((((Class*)min->data)->num) - ((Class*)min->data)->gra_num)){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort student list by id */
void *sortStudentById(List *studentList){
    Node *head = studentList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if(strcmp(((Student*) p->data)->id, ((Student*)min->data)->id) < 0){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort grade by id */
void *sortGradeById(List *gradeList){
    Node *head = gradeList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if(strcmp(((Grade*) p->data)->id, ((Grade*)min->data)->id) < 0){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort grade by student number */
void *sortGradeByNum(List *gradeList){
    Node *head = gradeList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if(((Grade*)p->data)->num < ((Grade*)min->data)->num){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}

/**sort grade by ungratuated student number */
void *sortGradeByUnGra(List *gradeList){
    Node *head = gradeList->head;
    Node *tail = head;
    while(NULL != tail->next){
        Node *min= tail->next;
        Node *p = min->next;
        while(NULL != p){
            if((((Grade*)p->data)->num - ((Grade*)p->data)->gra_num) < ((((Grade*)min->data)->num) - ((Grade*)min->data)->gra_num)){
                min = p;
            }
            p = p->next;
        }
        void *data = min->data;
        min->data = tail->next->data;
        tail->next->data = data;
        tail = tail->next;
    }
}
