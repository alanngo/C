#include <stdio.h>

int main()
{
    int var = 20; // an actual variable
    int *ptr = &var; // declaring a pointer and storing var in memory
    
    /* address stored in pointer variable */
    printf("Address stored in ptr variable: %x\n", ptr );

    /* access/dereferencing the value using the pointer */
    printf("Value of *ptr variable: %d\n", *ptr );

    return 0;
}