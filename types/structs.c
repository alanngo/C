#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char* name;
}Student;

Student* createStudent(int id, char *name)
{
    int n;
    Student* ret = malloc(n *sizeof(Student));
    ret->id = id;
    ret->name = name;
    return ret; 
}

void printStudent(const Student* stu)
{
    printf("=======Student info=======\n");
    printf("ID: %d\n", stu->id);
    printf("Name: %s\n", stu->name);
    printf("==========================\n");
}

int main()
{
    Student* sanjna = createStudent(1, "sanjna");
    printStudent(sanjna);
    Student* sheetal = createStudent(2, "sheetal");
    printStudent(sheetal);
    Student* sharanya = createStudent(3, "sharanya");
    printStudent(sharanya);
    return 0;
}