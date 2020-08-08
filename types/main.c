#include <stdio.h>
#include <string.h>
#include <stdbool.h> // needed for boolean
int main(int argc, char *argv[])
{
	bool b = false; // need to import
    char c ='x';

    int i = 400;
    short s = 5;
    long l = 99999999;
    double d = 67.32;
    float f = 43.5;

    unsigned u = -1; //can never be negative, wraps around

    // c DOES NOT have strings, use char arrays/pointers
    char* str1 = "string as char pointer";
    char str2[128] = "string as char array";


    // signed allows negative numbers
    // unsinged will just wrap around

    printf("%d\n",b); // prints 0 for false, 1 for true
    printf("%d\n",i); // use %d for decimal for numerical types except long
    printf("%d\n",s);

    printf("%ld\n",l); //use %ld for long

    printf("%f\n",d); //use %f for double and float
    printf("%f\n",f);

    printf("%u\n",u); //use %u for unsigned

    printf("%c\n", c); // use %c for char
    
    printf("%s\n",str1); // use %s for "strings"
    printf("%s\n",str2); 
	return 0;
}