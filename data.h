#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <stdbool.h>
#include "linkedlist.h"
#include <string.h>
#include <ctype.h>
#include "utils.h"

#define NAME_SIZE 22

FILE *student_file;
FILE *class_file;
FILE *grade_file;
FILE *info_file;

typedef struct student {
    char id[12];
    char name[NAME_SIZE];
    char gender[1];
    char hometown[NAME_SIZE];
    char birth[9];
    char phone[12];
    float score;
    int age;
    bool grad;
    char where[NAME_SIZE];
} Student;

typedef struct class {
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

List *getClassByNum(List *class_list, int min, int max);

List *getClassByTeaName(List *class_list, const char *name);

List *getClassByName(List *class_list, const char *name);

List *getClassById(List *class_list, const char *id);

List *getGradeByNum(List *grade_list, int min, int max);

List *getGradeByTime(List *grade_list, int min, int max);

List *getGradeById(List *grade_list, const char *id);

Student *getStudent(List *class, int position);

Class *getClass(List *grade, int position);

Grade *getGrade(List *grade_list, int position);

void addStudent(Class *class, char *id, char *name, char *gender, char *hometown, char *birth, char *phone, float score,
                int age, bool grad, char *where);

void addClass(Grade *grade, char *id, char *name, int num, float age, int gra_num, char *mon_name, char *phone,
              char *tea_name, char *tea_phone);

void
addGrade(List *list, char *id, char *time, int num, int gra_num, char *coun_name, char *coun_phone, char *chairman);

#endif