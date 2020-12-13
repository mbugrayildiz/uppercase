/*
Parsing the string, then making the letters to uppercase.
*/

#include "upperc.h"

#define MAGIC_NUMBER ('a' - 'A') // == 32 == 0x20 --> we got 6th bit==2^5=32 when we does a-A==b-B=... it's 6th bit difference

char *uppercase(char *s)
{
    char *p = s;
    while ('a' <= *p && *p <= 'z' && *p != '\0') {
        *p = *p - MAGIC_NUMBER;
        p++;
    }
    return s;
}
