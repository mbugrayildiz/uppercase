/*
Parsing the string, then making the letters to uppercase.
*/

#include "upperc.h"

#define MAGIC_NUMBER ('a' - 'A') // == 32 == 0x20 --> we got 6th bit==2^5=32 when we does a-A==b-B=... it's 6th bit difference

char *uppercase(char *s)
{

    if ( (s != NULL) && (s[0] == '\0') )
    {
        printf("s is empty!!\n");
        return EXIT_FAILURE;
    }

    for(char *p = s; *p!='\0'; ++p) // Condition is --> continue the loop as long as *p is not zero, null
    {
        if ('a' <= *p && *p <= 'z')
            *p = *p - MAGIC_NUMBER; //Indicating about 6th bit operation
    }

    return s;
}
