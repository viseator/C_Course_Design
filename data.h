#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <stdbool.h>
#include "linkedlist.h"
#include <string.h>
#include <ctype.h>
#include "utils.h"

#define NAME_SIZE 22

extern FILE *student_file;
extern FILE *class_file;
extern FILE *grade_file;
extern FILE *info_file;

typedef struct student {
    char id[12];
    char name[NAME_SIZE];
    char gender[2];
    char hometown[NAME_SIZE];
    char birth[9];
    char phone[12];
    float score;
    int age;
    bool grad;
    char where[NAME_SIZE];
} Student;

typedef struct class_ {
    char id[15];
    char name[NAME_SIZE];
    int num;
    float age;
    int gra_num;
    char mon_name[NAME_SIZE];
    char phone[12];
    char tea_name[NAME_SIZE];
    char tea_phone[12];
    List *students;
} Class;

typedef struct grade {
    char id[5];
    char time[9];
    int num;
    int gra_num;
    char coun_name[NAME_SIZE];
    char coun_phone[12];
    char chairman[NAME_SIZE];
    List *classes;
} Grade;

List *readGradeFromFile();

List *readClassFromFile(int num);

List *readStudentFromFile(int num);

void openFileForRead();

void saveGradeToFile(List *grade_list);

void saveClassToFile(List *class_list);

void saveStudentToFile(List *student_list);

void writeListToFile(List *list, FILE *file);

void closeFile();

void openFileForWrite();

List *getStudentByAge(List *student_list, int min, int max);

List *getStudentByWhere(List *student_list, const char *where);

List *getStudentByName(List *student_list, const char *name);

List *getStudentByGra(List *student_list, bool gra);

List *getClassByNum(List *class_list, int min, int max);

List *getClassByTeaName(List *class_list, const char *name);

List *getClassByName(List *class_list, const char *name);

List *getClassById(List *class_list, const char *id);

List *getGradeByNum(List *grade_list, int min, int max);

List *getGradeByTime(List *grade_list, int min, int max);

List *getGradeById(List *grade_list, const char *id);

Student *getStudent(List *class_, int position);

Class *getClass(List *grade, int position);

Grade *getGrade(List *grade_list, int position);

void addStudent(List *list, char *id, char *name, char *gender, char *hometown, char *birth, char *phone, float score,
                int age, bool grad, char *where);

void addClass(List *list, char *id, char *name, int num, float age, int gra_num, char *mon_name, char *phone,
              char *tea_name, char *tea_phone);

void
addGrade(List *list, char *id, char *time, int num, int gra_num, char *coun_name, char *coun_phone, char *chairman);

void removeGradeByData(List *grade_list, void *data);

void removeClassByData(List *grade_list, void *data);

void removeStudentByData(List *grade_list, void *data);

void removeStudentFromClass(List *class_list, void *data);

List *getAllClass(List*);

List *getAllStudent(List *gradeList);

List *getAllStudentInClass(List *classes);

void *sortGradeByTime(List *gradeList);

void *sortClassById(List *classList);

void *sortStudentById(List *studentList);

void *sortGradeByNum(List *gradeList);

void *sortGradeByUnGra(List *gradeList);

void *sortClassByUnGra(List *classList);

void *sortGradeById(List *gradeList);
#endif
