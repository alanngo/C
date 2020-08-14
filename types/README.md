# Types in C

## Primitives
```C
char c ='x';

// numerical types
int i = 400;
short s = 5;
long l = 99999999;
double d = 67.32;
float f = 43.5;

unsigned u = -1; //can never be negative, wraps around

```

## Pointers
- A pointer is used to store memory addresses
- An array is a pointer that stores collection of data
```C    
// C DOES NOT have strings, use char arrays/pointers
char* str1 = "string as char pointer";
char str2[128] = "string as char array"; //this is also a pointer

int var = 20; // an actual variable
int *ptr = &var; // declaring a pointer and storing var in memory
/* address stored in pointer variable */
printf("Address stored in ptr variable: %x\n", ptr );

/* access/dereferencing the value using the pointer */
printf("Value of *ptr variable: %d\n", *ptr );
```
## Structs
- structs store data in an "object"
- ALWAYS use struct pointers when programming (it helps)
- DON'T FORGET #include <stdlib.h>
```C
//defining a struct 
typedef struct
{
    ... // member variables
}<STRUCT_NAME>; 

// initializing a struct, always use pointer notation to avoid seg faults
int n;
<STRUCT_NAME>* var = malloc(n * sizeof(<STRUCT_NAME>));  

// getting struct member variables
<TYPE> get = var-><MEMBER_VAR>;

// setting struct member variables
<TYPE> set;
var-><MEMBER_VAR> = set;
```