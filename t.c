#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
   
    FILE *fp = fopen(argv[1], "r");    

    if (fp == NULL)
    {
        printf("%s: %s\n", argv[0], strerror(errno));
    }
    else
    {
        printf("%s: %s\n", argv[0], strerror(errno));
    }

    fclose(fp);
    return 0;
}
