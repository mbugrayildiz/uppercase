#include <stdio.h>
#include <stdlib.h>

#include "upperc.h"

void usage(char *prg)
{
    printf("usage: %s <text>\n", prg);
}


int main(int argc, char *argv[])
{
    printf("Upper Case Function\n");
    if (argc <= 1)
    {
        fprintf(stderr,"ERORR!! Please insert a string!\n"); // Error message in Console!
        usage(argv[0]);
        return EXIT_FAILURE; //Error
    }
    else
    {
        for(int i=1; i<argc; i++) //Checking all arguments one by one
            printf("%s \n", uppercase(argv[i]));

    }
    return 0;
}
