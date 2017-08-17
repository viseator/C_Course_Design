#include "datastruct.h"

typedef struct student {
    char id[12];
    char name[NAME_SIZE];
    char gender[1];
    char hometown[NAME_SIZE];
    char birth[9];
    char phone[12];
    float score;
    bool grad;
    char where[NAME_SIZE];
    void *next;
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
    void *students;
} Class;

typedef struct grade {
    char id[5];
    char time[7];
    int num;
    int gra_num;
    char coun_name[NAME_SIZE];
    char coun_phone[12];
    char chairman[NAME_SIZE];
    void *classes;
} Grade;

int main(void) {
    return 0;
}
