#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    while (i <= 10000) 
    {
        printf("%d-seni cok seviyorum\n"
               "  ***   ***\n"
               " ***** *****\n"
               "*************\n"
               " ***********\n"
               "  *********\n"
               "   *******\n"
               "    ****\n"
               "     *\n\n", i);
        i++;
    }

    return 0;
}